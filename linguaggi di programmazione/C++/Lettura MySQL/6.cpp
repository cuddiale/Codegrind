// Creare una classe per gestire la connessione a MySQL e leggere più record usando MySQL C API.

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

    void leggiRecordMultipli(const std::string& query, int age) {
        std::string full_query = query + std::to_string(age);
        if (mysql_query(conn, full_query.c_str())) {
            throw std::runtime_error("SELECT failed: " + std::string(mysql_error(conn)));
        }

        MYSQL_RES* res = mysql_store_result(conn);
        if (res == nullptr) {
            throw std::runtime_error("mysql_store_result() failed: " + std::string(mysql_error(conn)));
        }

        MYSQL_ROW row;
        while ((row = mysql_fetch_row(res))) {
            std::cout << "ID: " << row[0] << ", Name: " << row[1] << ", Age: " << row[2] << std::endl;
        }

        mysql_free_result(res);
    }
};

int main() {
    try {
        MySQLClient client("localhost", "root", "password", "test_db");
        client.leggiRecordMultipli("SELECT * FROM test_table WHERE age > ", 20);
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}