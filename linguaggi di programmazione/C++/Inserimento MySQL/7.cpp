// Creare una classe per gestire la connessione a MySQL ed inserire un singolo record usando MySQL C API.

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

    void inserisciRecordSingolo(const std::string& table, const std::string& name, int age) {
        std::string query = "INSERT INTO " + table + " (name, age) VALUES ('" + name + "', " + std::to_string(age) + ")";
        if (mysql_query(conn, query.c_str())) {
            throw std::runtime_error("INSERT failed: " + std::string(mysql_error(conn)));
        } else {
            std::cout << "Record inserito con successo." << std::endl;
        }
    }
};

int main() {
    try {
        MySQLClient client("localhost", "root", "password", "test_db");
        client.inserisciRecordSingolo("test_table", "John Doe", 30);
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}