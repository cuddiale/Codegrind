// Creare una query che utilizza condizioni multiple (AND, OR) per filtrare i record.

#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
#include <cppconn/resultset.h>
#include <iostream>

int main() {
    sql::mysql::MySQL_Driver* driver = sql::mysql::get_mysql_driver_instance();
    std::unique_ptr<sql::Connection> con(driver->connect("tcp://127.0.0.1:3306", "root", "password"));
    con->setSchema("test_db");

    std::unique_ptr<sql::PreparedStatement> pstmt(con->prepareStatement(
        "SELECT * FROM test_table WHERE (age >= ? AND status = ?) OR name = ?"
    ));
    pstmt->setInt(1, 25);
    pstmt->setString(2, "active");
    pstmt->setString(3, "John Doe");
    std::unique_ptr<sql::ResultSet> res(pstmt->executeQuery());

    while (res->next()) {
        std::cout << "ID: " << res->getInt("id") << ", Name: " << res->getString("name")
                  << ", Age: " << res->getInt("age") << ", Status: " << res->getString("status") << std::endl;
    }

    return 0;
}