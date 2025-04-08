// Creare una classe per gestire la connessione a MySQL e creare una tabella con colonne avanzate.

#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
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

    void creaTabella(const std::string& table_name) {
        sql::Statement* stmt = con->createStatement();
        stmt->execute("CREATE TABLE IF NOT EXISTS " + table_name + " (id INT AUTO_INCREMENT PRIMARY KEY, nome VARCHAR(255), eta INT, data_nascita DATE)");
        std::cout << "Tabella creata: " << table_name << std::endl;
        delete stmt;
    }
};

int main() {
    MySQLClient client("tcp://127.0.0.1:3306", "root", "password", "test_db");
    client.creaTabella("avanzata");
    return 0;
}