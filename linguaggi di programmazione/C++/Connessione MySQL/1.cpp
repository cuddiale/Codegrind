// Stabilire una connessione a MySQL e stampare il nome del database.

#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/resultset.h>
#include <iostream>

int main() {
    sql::mysql::MySQL_Driver* driver = sql::mysql::get_mysql_driver_instance();
    sql::Connection* con = driver->connect("tcp://127.0.0.1:3306", "root", "password");
    con->setSchema("test_db");

    std::cout << "Connesso al database: " << con->getSchema() << std::endl;

    delete con;
    return 0;
}