// Creare una query che utilizza funzioni di aggregazione come AVG per calcolare la media di un campo.

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

    std::unique_ptr<sql::PreparedStatement> pstmt(con->prepareStatement("SELECT AVG(age) AS average_age FROM test_table"));
    std::unique_ptr<sql::ResultSet> res(pstmt->executeQuery());

    if (res->next()) {
        std::cout << "Età media: " << res->getDouble("average_age") << std::endl;
    }

    return 0;
}