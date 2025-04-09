// Creare un programma che gestisce esplicitamente le connessioni a MySQL e utilizza le transazioni per garantire l'integrità dei dati.

#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/exception.h>
#include <iostream>

void executeTransaction(sql::Connection* con) {
    try {
        con->setAutoCommit(false);

        std::unique_ptr<sql::Statement> stmt(con->createStatement());
        stmt->execute("INSERT INTO test_table (name, age) VALUES ('George', 55)");
        stmt->execute("INSERT INTO test_table (name, age) VALUES ('Hannah', 60)");

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
}

int main() {
    try {
        sql::mysql::MySQL_Driver* driver = sql::mysql::get_mysql_driver_instance();
        std::unique_ptr<sql::Connection> con(driver->connect("tcp://127.0.0.1:3306", "root", "password"));
        con->setSchema("test_db");

        executeTransaction(con.get());

    } catch (sql::SQLException& e) {
        std::cerr << "Errore SQL durante la connessione: " << e.what() << std::endl;
    }

    return 0;
}