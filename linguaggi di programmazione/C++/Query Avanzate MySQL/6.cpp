// Creare una query che utilizza una subquery per filtrare i record.

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
        "SELECT * FROM test_table WHERE age > (SELECT AVG(age) FROM test_table)"
    ));
    std::unique_ptr<sql::ResultSet> res(pstmt->executeQuery());

    while (res->next()) {
        std::cout << "ID: " << res->getInt("id") << ", Name: " << res->getString("name")
                  << ", Age: " << res->getInt("age") << std::endl;
    }

    return 0;
}