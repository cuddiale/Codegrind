#include <iostream>
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
#include <cppconn/resultset.h>
#include <cppconn/exception.h>
#include <memory>
#include <stdexcept>

void crea_conto(sql::Connection* con) {
    std::string nome, cognome;
    double saldo_iniziale;

    std::cout << "Inserisci il nome del titolare: ";
    std::getline(std::cin, nome);
    std::cout << "Inserisci il cognome del titolare: ";
    std::getline(std::cin, cognome);
    std::cout << "Inserisci il saldo iniziale: ";
    std::cin >> saldo_iniziale;
    std::cin.ignore(); // Ignores the newline character left in the input buffer

    std::unique_ptr<sql::PreparedStatement> pstmt(con->prepareStatement("INSERT INTO conti (nome, cognome, saldo) VALUES (?, ?, ?)"));
    pstmt->setString(1, nome);
    pstmt->setString(2, cognome);
    pstmt->setDouble(3, saldo_iniziale);
    pstmt->execute();

    std::cout << "Conto creato con successo!" << std::endl;
}

void visualizza_saldo(sql::Connection* con) {
    int id_conto;

    std::cout << "Inserisci l'ID del conto: ";
    std::cin >> id_conto;
    std::cin.ignore(); // Ignores the newline character left in the input buffer

    std::unique_ptr<sql::PreparedStatement> pstmt(con->prepareStatement("SELECT saldo FROM conti WHERE id = ?"));
    pstmt->setInt(1, id_conto);

    std::unique_ptr<sql::ResultSet> res(pstmt->executeQuery());
    if (res->next()) {
        std::cout << "Saldo: " << res->getDouble("saldo") << std::endl;
    } else {
        std::cout << "Conto non trovato." << std::endl;
    }
}

void deposito(sql::Connection* con) {
    int id_conto;
    double importo;

    std::cout << "Inserisci l'ID del conto: ";
    std::cin >> id_conto;
    std::cout << "Inserisci l'importo da depositare: ";
    std::cin >> importo;
    std::cin.ignore(); // Ignores the newline character left in the input buffer

    std::unique_ptr<sql::PreparedStatement> pstmt(con->prepareStatement("UPDATE conti SET saldo = saldo + ? WHERE id = ?"));
    pstmt->setDouble(1, importo);
    pstmt->setInt(2, id_conto);
    pstmt->execute();

    std::unique_ptr<sql::PreparedStatement> pstmt_mov(con->prepareStatement("INSERT INTO movimenti (id_conto, tipo, importo) VALUES (?, 'deposito', ?)"));
    pstmt_mov->setInt(1, id_conto);
    pstmt_mov->setDouble(2, importo);
    pstmt_mov->execute();

    std::cout << "Deposito effettuato con successo!" << std::endl;
}

void prelievo(sql::Connection* con) {
    int id_conto;
    double importo;

    std::cout << "Inserisci l'ID del conto: ";
    std::cin >> id_conto;
    std::cout << "Inserisci l'importo da prelevare: ";
    std::cin >> importo;
    std::cin.ignore(); // Ignores the newline character left in the input buffer

    std::unique_ptr<sql::PreparedStatement> pstmt_saldo(con->prepareStatement("SELECT saldo FROM conti WHERE id = ?"));
    pstmt_saldo->setInt(1, id_conto);
    std::unique_ptr<sql::ResultSet> res(pstmt_saldo->executeQuery());

    if (res->next()) {
        double saldo_corrente = res->getDouble("saldo");
        if (importo > saldo_corrente) {
            std::cout << "Saldo insufficiente per il prelievo." << std::endl;
        } else {
            std::unique_ptr<sql::PreparedStatement> pstmt(con->prepareStatement("UPDATE conti SET saldo = saldo - ? WHERE id = ?"));
            pstmt->setDouble(1, importo);
            pstmt->setInt(2, id_conto);
            pstmt->execute();

            std::unique_ptr<sql::PreparedStatement> pstmt_mov(con->prepareStatement("INSERT INTO movimenti (id_conto, tipo, importo) VALUES (?, 'prelievo', ?)"));
            pstmt_mov->setInt(1, id_conto);
            pstmt_mov->setDouble(2, importo);
            pstmt_mov->execute();

            std::cout << "Prelievo effettuato con successo!" << std::endl;
        }
    } else {
        std::cout << "Conto non trovato." << std::endl;
    }
}

void visualizza_movimenti(sql::Connection* con) {
    int id_conto;

    std::cout << "Inserisci l'ID del conto: ";
    std::cin >> id_conto;
    std::cin.ignore(); // Ignores the newline character left in the input buffer

    std::unique_ptr<sql::PreparedStatement> pstmt(con->prepareStatement("SELECT * FROM movimenti WHERE id_conto = ?"));
    pstmt->setInt(1, id_conto);
    std::unique_ptr<sql::ResultSet> res(pstmt->executeQuery());

    while (res->next()) {
        std::cout << "ID Movimento: " << res->getInt("id") << ", Tipo: " << res->getString("tipo") << ", Importo: " << res->getDouble("importo") << ", Data: " << res->getString("data") << std::endl;
    }
}

int main() {
    try {
        sql::mysql::MySQL_Driver* driver = sql::mysql::get_mysql_driver_instance();
        std::unique_ptr<sql::Connection> con(driver->connect("tcp://127.0.0.1:3306", "root", "password"));
        con->setSchema("gestionale_bancario");

        int scelta;

        do {
            std::cout << "\nGestionale Bancario\n";
            std::cout << "1. Crea Conto\n";
            std::cout << "2. Visualizza Saldo\n";
            std::cout << "3. Deposito\n";
            std::cout << "4. Prelievo\n";
            std::cout << "5. Visualizza Movimenti\n";
            std::cout << "6. Esci\n";
            std::cout << "Scegli un'opzione: ";
            std::cin >> scelta;
            std::cin.ignore(); // Ignores the newline character left in the input buffer

            switch (scelta) {
                case 1:
                    crea_conto(con.get());
                    break;
                case 2:
                    visualizza_saldo(con.get());
                    break;
                case 3:
                    deposito(con.get());
                    break;
                case 4:
                    prelievo(con.get());
                    break;
                case 5:
                    visualizza_movimenti(con.get());
                    break;
                case 6:
                    std::cout << "Uscita..." << std::endl;
                    break;
                default:
                    std::cout << "Opzione non valida." << std::endl;
            }
        } while (scelta != 6);

    } catch (sql::SQLException& e) {
        std::cerr << "Errore SQL: " << e.what() << std::endl;
    }

    return 0;
}