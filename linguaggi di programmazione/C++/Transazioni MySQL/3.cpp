// Creare un programma che avvia una transazione, esegue più operazioni (inserimento, aggiornamento) e poi effettua un commit.

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
        stmt->execute("INSERT INTO test_table (name, age) VALUES ('Charlie', 35)");
        stmt->execute("UPDATE test_table SET age = 36 WHERE name = 'Charlie'");

        con->commit();
        std::cout << "Transazione completata con successo" << std::endl;

    } catch (sql::SQLException& e) {
        std::cerr << "Errore SQL: " << e.what() << std::endl;
        try {
            con->rollback();
            std::cout << "Transazione annullata" << std::endl;
        } catch (sql::SQLException& e) {
            std::cerr << "Errore SQL durante il rollback: " << e.what() << std::endl;
        }
    }

    return 0;
}