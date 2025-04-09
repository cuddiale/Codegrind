// Creare una classe per gestire la connessione a MySQL e modificare un singolo record.

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

    void modificaRecord(const std::string& query, int age, const std::string& name) {
        std::unique_ptr<sql::PreparedStatement> pstmt(con->prepareStatement(query));
        pstmt->setInt(1, age);
        pstmt->setString(2, name);
        int rows = pstmt->executeUpdate();
        std::cout << "Record modificati: " << rows << std::endl;
    }
};

int main() {
    MySQLClient client("tcp://127.0.0.1:3306", "root", "password", "test_db");
    client.modificaRecord("UPDATE test_table SET age = ? WHERE name = ?", 35, "John Doe");
    return 0;
}