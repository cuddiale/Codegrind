// Stabilire una connessione a MySQL ed inserire più record.

#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
#include <iostream>

int main() {
    sql::mysql::MySQL_Driver* driver = sql::mysql::get_mysql_driver_instance();
    std::unique_ptr<sql::Connection> con(driver->connect("tcp://127.0.0.1:3306", "root", "password"));
    con->setSchema("test_db");

    std::unique_ptr<sql::PreparedStatement> pstmt(con->prepareStatement("INSERT INTO test_table (name, age) VALUES (?, ?)"));
    pstmt->setString(1, "Alice");
    pstmt->setInt(2, 25);
    pstmt->executeUpdate();

    pstmt->setString(1, "Bob");
    pstmt->setInt(2, 28);
    pstmt->executeUpdate();

    std::cout << "Record multipli inseriti con successo." << std::endl;

    return 0;
}