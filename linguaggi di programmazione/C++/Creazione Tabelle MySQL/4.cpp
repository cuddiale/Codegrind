// Creare una classe per gestire la connessione a MySQL e creare una tabella usando MySQL C API.

#include <mysql/mysql.h>
#include <iostream>
#include <stdexcept>

class MySQLClient {
private:
    MYSQL* conn;
public:
    MySQLClient(const std::string& host, const std::string& user, const std::string& pass, const std::string& db) {
        conn = mysql_init(nullptr);
        if (conn == nullptr) {
            throw std::runtime_error("mysql_init() failed");
        }
        if (mysql_real_connect(conn, host.c_str(), user.c_str(), pass.c_str(), db.c_str(), 0, nullptr, 0) == nullptr) {
            mysql_close(conn);
            throw std::runtime_error("mysql_real_connect() failed");
        }
    }

    ~MySQLClient() {
        mysql_close(conn);
    }

    void creaTabella(const std::string& table_name) {
        std::string query = "CREATE TABLE IF NOT EXISTS " + table_name + " (id INT AUTO_INCREMENT PRIMARY KEY, nome VARCHAR(255))";
        if (mysql_query(conn, query.c_str())) {
            throw std::runtime_error("CREATE TABLE failed: " + std::string(mysql_error(conn)));
        }
        std::cout << "Tabella creata: " << table_name << std::endl;
    }
};

int main() {
    try {
        MySQLClient client("localhost", "root", "password", "test_db");
        client.creaTabella("esempio");
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}