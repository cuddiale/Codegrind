// Creare una query che utilizza una join tra due tabelle.

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
        "SELECT a.id, a.name, b.department_name FROM employees a JOIN departments b ON a.department_id = b.id"
    ));
    std::unique_ptr<sql::ResultSet> res(pstmt->executeQuery());

    while (res->next()) {
        std::cout << "ID: " << res->getInt("id") << ", Name: " << res->getString("name")
                  << ", Department: " << res->getString("department_name") << std::endl;
    }

    return 0;
}