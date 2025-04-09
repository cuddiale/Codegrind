// Stabilire una connessione a MySQL e modificare più record.

#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
#include <iostream>

int main() {
    sql::mysql::MySQL_Driver* driver = sql::mysql::get_mysql_driver_instance();
    std::unique_ptr<sql::Connection> con(driver->connect("tcp://127.0.0.1:3306", "root", "password"));
    con->setSchema("test_db");

    std::unique_ptr<sql::PreparedStatement> pstmt(con->prepareStatement("UPDATE test_table SET status = ? WHERE status = ?"));
    pstmt->setString(1, "inactive");
    pstmt->setString(2, "active");
    int rows = pstmt->executeUpdate();

    std::cout << "Record modificati: " << rows << std::endl;

    return 0;
}