// Creare una classe per gestire la connessione a MySQL e stampare il nome del database.

#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/resultset.h>
#include <iostream>

class MySQLClient {
private:
    sql::mysql::MySQL_Driver* driver;
    sql::Connection* con;
public:
    MySQLClient(const std::string& host, const std::string& user, const std::string& pass, const std::string& db) {
        driver = sql::mysql::get_mysql_driver_instance();
        con = driver->connect(host, user, pass);
        con->setSchema(db);
    }

    ~MySQLClient() {
        delete con;
    }

    void stampaNomeDatabase() {
        std::cout << "Connesso al database: " << con->getSchema() << std::endl;
    }
};

int main() {
    MySQLClient client("tcp://127.0.0.1:3306", "root", "password", "test_db");
    client.stampaNomeDatabase();
    return 0;
}