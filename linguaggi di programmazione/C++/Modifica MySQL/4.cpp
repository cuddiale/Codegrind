// Creare una classe per gestire la connessione a MySQL e modificare più record.

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

    void modificaRecords(const std::string& query, const std::string& new_status, const std::string& old_status) {
        std::unique_ptr<sql::PreparedStatement> pstmt(con->prepareStatement(query));
        pstmt->setString(1, new_status);
        pstmt->setString(2, old_status);
        int rows = pstmt->executeUpdate();
        std::cout << "Record modificati: " << rows << std::endl;
    }
};

int main() {
    MySQLClient client("tcp://127.0.0.1:3306", "root", "password", "test_db");
    client.modificaRecords("UPDATE test_table SET status = ? WHERE status = ?", "inactive", "active");
    return 0;
}