// Creare una classe per gestire la connessione a MySQL ed inserire più record usando MySQL C API.

#include <mysql/mysql.h>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <utility>

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

    void inserisciRecordMultipli(const std::string& table, const std::vector<std::pair<std::string, int>>& records) {
        for (const auto& record : records) {
            std::string query = "INSERT INTO " + table + " (name, age) VALUES ('" + record.first + "', " + std::to_string(record.second) + ")";
            if (mysql_query(conn, query.c_str())) {
                throw std::runtime_error("INSERT failed: " + std::string(mysql_error(conn)));
            }
        }
        std::cout << "Record multipli inseriti con successo." << std::endl;
    }
};

int main() {
    try {
        MySQLClient client("localhost", "root", "password", "test_db");
        std::vector<std::pair<std::string, int>> records = {{"Alice", 25}, {"Bob", 28}};
        client.inserisciRecordMultipli("test_table", records);
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}