// Stabilire una connessione a MySQL e creare una tabella.

#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <iostream>

int main() {
    sql::mysql::MySQL_Driver* driver = sql::mysql::get_mysql_driver_instance();
    sql::Connection* con = driver->connect("tcp://127.0.0.1:3306", "root", "password");
    con->setSchema("test_db");

    sql::Statement* stmt = con->createStatement();
    stmt->execute("CREATE TABLE IF NOT EXISTS esempio (id INT AUTO_INCREMENT PRIMARY KEY, nome VARCHAR(255))");
    std::cout << "Tabella creata: esempio" << std::endl;

    delete stmt;
    delete con;
    return 0;
}