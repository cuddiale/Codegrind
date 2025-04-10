#include <iostream>
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
#include <cppconn/resultset.h>
#include <cppconn/exception.h>

void aggiungi_contatto(sql::Connection* con) {
    std::string nome, cognome, telefono, email;

    std::cout << "Inserisci il nome del contatto: ";
    std::getline(std::cin, nome);
    std::cout << "Inserisci il cognome del contatto: ";
    std::getline(std::cin, cognome);
    std::cout << "Inserisci il numero di telefono: ";
    std::getline(std::cin, telefono);
    std::cout << "Inserisci l'email: ";
    std::getline(std::cin, email);

    std::unique_ptr<sql::PreparedStatement> pstmt(con->prepareStatement("INSERT INTO rubrica (nome, cognome, telefono, email) VALUES (?, ?, ?, ?)"));
    pstmt->setString(1, nome);
    pstmt->setString(2, cognome);
    pstmt->setString(3, telefono);
    pstmt->setString(4, email);
    pstmt->execute();

    std::cout << "Contatto aggiunto con successo!" << std::endl;
}

void visualizza_contatti(sql::Connection* con) {
    std::unique_ptr<sql::Statement> stmt(con->createStatement());
    std::unique_ptr<sql::ResultSet> res(stmt->executeQuery("SELECT * FROM rubrica"));

    while (res->next()) {
        std::cout << "ID: " << res->getInt("id") << ", Nome: " << res->getString("nome") << ", Cognome: " << res->getString("cognome") << ", Telefono: " << res->getString("telefono") << ", Email: " << res->getString("email") << std::endl;
    }
}

void modifica_contatto(sql::Connection* con) {
    int id;
    std::string nuovo_nome, nuovo_cognome, nuovo_telefono, nuova_email;

    std::cout << "Inserisci l'ID del contatto da modificare: ";
    std::cin >> id;
    std::cin.ignore();  // Ignores the newline character left in the input buffer

    std::cout << "Inserisci il nuovo nome del contatto: ";
    std::getline(std::cin, nuovo_nome);
    std::cout << "Inserisci il nuovo cognome del contatto: ";
    std::getline(std::cin, nuovo_cognome);
    std::cout << "Inserisci il nuovo numero di telefono: ";
    std::getline(std::cin, nuovo_telefono);
    std::cout << "Inserisci la nuova email: ";
    std::getline(std::cin, nuova_email);

    std::unique_ptr<sql::PreparedStatement> pstmt(con->prepareStatement("UPDATE rubrica SET nome = ?, cognome = ?, telefono = ?, email = ? WHERE id = ?"));
    pstmt->setString(1, nuovo_nome);
    pstmt->setString(2, nuovo_cognome);
    pstmt->setString(3, nuovo_telefono);
    pstmt->setString(4, nuova_email);
    pstmt->setInt(5, id);
    pstmt->execute();

    std::cout << "Contatto modificato con successo!" << std::endl;
}

void cancella_contatto(sql::Connection* con) {
    int id;
    std::cout << "Inserisci l'ID del contatto da cancellare: ";
    std::cin >> id;
    std::cin.ignore();  // Ignores the newline character left in the input buffer

    std::unique_ptr<sql::PreparedStatement> pstmt(con->prepareStatement("DELETE FROM rubrica WHERE id = ?"));
    pstmt->setInt(1, id);
    pstmt->execute();

    std::cout << "Contatto cancellato con successo!" << std::endl;
}

int main() {
    try {
        sql::mysql::MySQL_Driver* driver = sql::mysql::get_mysql_driver_instance();
        std::unique_ptr<sql::Connection> con(driver->connect("tcp://127.0.0.1:3306", "root", "password"));
        con->setSchema("gestione_rubrica");

        int scelta;

        do {
            std::cout << "\nGestione Rubrica\n";
            std::cout << "1. Aggiungi Contatto\n";
            std::cout << "2. Visualizza Contatti\n";
            std::cout << "3. Modifica Contatto\n";
            std::cout << "4. Cancella Contatto\n";
            std::cout << "5. Esci\n";
            std::cout << "Scegli un'opzione: ";
            std::cin >> scelta;
            std::cin.ignore();  // Ignores the newline character left in the input buffer

            switch (scelta) {
                case 1:
                    aggiungi_contatto(con.get());
                    break;
                case 2:
                    visualizza_contatti(con.get());
                    break;
                case 3:
                    modifica_contatto(con.get());
                    break;
                case 4:
                    cancella_contatto(con.get());
                    break;
                case 5:
                    std::cout << "Uscita..." << std::endl;
                    break;
                default:
                    std::cout << "Opzione non valida." << std::endl;
            }
        } while (scelta != 5);

    } catch (sql::SQLException& e) {
        std::cerr << "Errore SQL: " << e.what() << std::endl;
    }

    return 0;
}