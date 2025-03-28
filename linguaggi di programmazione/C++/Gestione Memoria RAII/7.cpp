// Usare RAII per gestire l'apertura e chiusura di una connessione al database.

#include <iostream>
#include <stdexcept>

class DatabaseRAII {
private:
    // Simulazione di una connessione al database
    bool connected;
public:
    DatabaseRAII() {
        connected = true;
        std::cout << "Connessione al database aperta" << std::endl;
    }
    ~DatabaseRAII() {
        if (connected) {
            // chiudiConnessione(); // Usare la funzione appropriata per chiudere la connessione
            std::cout << "Connessione al database chiusa" << std::endl;
        }
    }
    void eseguiQuery(const std::string& query) {
        if (!connected) {
            throw std::runtime_error("Connessione al database non valida");
        }
        std::cout << "Query eseguita: " << query << std::endl;
    }
};

int main() {
    try {
        DatabaseRAII db;
        db.eseguiQuery("SELECT * FROM utenti");
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}