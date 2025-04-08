// Creare una classe per gestire la connessione a MySQL e stampare il nome del database usando MySQL C API.

#include <mysql/mysql.h>
#include <iostream>

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

    void stampaNomeDatabase() {
        std::cout << "Connesso al database: " << mysql_get_server_info(conn) << std::endl;
    }
};

int main() {
    try {
        MySQLClient client("localhost", "root", "password", "test_db");
        client.stampaNomeDatabase();
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}