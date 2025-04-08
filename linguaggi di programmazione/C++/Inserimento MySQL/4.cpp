// Creare una classe per gestire la connessione a MySQL ed inserire più record.

#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
#include <iostream>

class MySQLClient {
private:
    sql::mysql::MySQL_Driver* driver;
    std::unique_ptr<sql::Connection> con;
public:
    MySQLClient(const std::string& host, const std::string& user, const std::string& pass, const std::string& db) {
        driver = sql::mysql::get_mysql_driver_instance();
        con.reset(driver->connect(host, user, pass));
        con->setSchema(db);
    }

    void inserisciRecordMultipli(const std::string& table, const std::vector<std::pair<std::string, int>>& records) {
        std::unique_ptr<sql::PreparedStatement> pstmt(con->prepareStatement("INSERT INTO " + table + " (name, age) VALUES (?, ?)"));
        for (const auto& record : records) {
            pstmt->setString(1, record.first);
            pstmt->setInt(2, record.second);
            pstmt->executeUpdate();
        }
        std::cout << "Record multipli inseriti con successo." << std::endl;
    }
};

int main() {
    MySQLClient client("tcp://127.0.0.1:3306", "root", "password", "test_db");
    std::vector<std::pair<std::string, int>> records = {{"Alice", 25}, {"Bob", 28}};
    client.inserisciRecordMultipli("test_table", records);
    return 0;
}