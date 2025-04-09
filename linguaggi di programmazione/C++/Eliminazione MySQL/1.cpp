// Stabilire una connessione a MySQL ed eliminare un singolo record.

#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
#include <iostream>

int main() {
    sql::mysql::MySQL_Driver* driver = sql::mysql::get_mysql_driver_instance();
    std::unique_ptr<sql::Connection> con(driver->connect("tcp://127.0.0.1:3306", "root", "password"));
    con->setSchema("test_db");

    std::unique_ptr<sql::PreparedStatement> pstmt(con->prepareStatement("DELETE FROM test_table WHERE id = ?"));
    pstmt->setInt(1, 1);
    int rows = pstmt->executeUpdate();

    std::cout << "Eliminati " << rows << " record." << std::endl;

    return 0;
}