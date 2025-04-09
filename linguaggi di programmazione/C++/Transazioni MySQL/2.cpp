// Creare un programma che avvia una transazione, esegue un'operazione di inserimento e poi effettua un rollback in caso di errore.

#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/exception.h>
#include <iostream>

int main() {
    try {
        sql::mysql::MySQL_Driver* driver = sql::mysql::get_mysql_driver_instance();
        std::unique_ptr<sql::Connection> con(driver->connect("tcp://127.0.0.1:3306", "root", "password"));
        con->setSchema("test_db");

        con->setAutoCommit(false);

        std::unique_ptr<sql::Statement> stmt(con->createStatement());
        stmt->execute("INSERT INTO test_table (name, age) VALUES ('Bob', 25)");

        throw std::runtime_error("Errore simulato");

        con->commit();
        std::cout << "Transazione completata con successo" << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Errore: " << e.what() << std::endl;
        try {
            std::unique_ptr<sql::Connection> con(driver->connect("tcp://127.0.0.1:3306", "root", "password"));
            con->rollback();
            std::cout << "Transazione annullata" << std::endl;
        } catch (sql::SQLException& e) {
            std::cerr << "Errore SQL durante il rollback: " << e.what() << std::endl;
        }
    }

    return 0;
}