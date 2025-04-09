// Creare una classe per gestire la connessione a MySQL e leggere più record.

#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
#include <cppconn/resultset.h>
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

    void leggiRecordMultipli(const std::string& query, int age) {
        std::unique_ptr<sql::PreparedStatement> pstmt(con->prepareStatement(query));
        pstmt->setInt(1, age);
        std::unique_ptr<sql::ResultSet> res(pstmt->executeQuery());

        while (res->next()) {
            std::cout << "ID: " << res->getInt("id") << ", Name: " << res->getString("name") << ", Age: " << res->getInt("age") << std::endl;
        }
    }
};

int main() {
    MySQLClient client("tcp://127.0.0.1:3306", "root", "password", "test_db");
    client.leggiRecordMultipli("SELECT * FROM test_table WHERE age > ?", 20);
    return 0;
}