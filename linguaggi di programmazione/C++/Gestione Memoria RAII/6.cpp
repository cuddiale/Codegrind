// Usare RAII per gestire l'apertura e chiusura di un socket.

#include <iostream>
#include <stdexcept>

class SocketRAII {
private:
    int socket;
public:
    SocketRAII(int s) : socket(s) {
        if (socket < 0) {
            throw std::runtime_error("Errore nell'apertura del socket");
        }
        std::cout << "Socket aperto" << std::endl;
    }
    ~SocketRAII() {
        if (socket >= 0) {
            // close(socket); // Usare la funzione appropriata per chiudere il socket
            std::cout << "Socket chiuso" << std::endl;
        }
    }
    void invia(const std::string& messaggio) {
        // send(socket, messaggio.c_str(), messaggio.size(), 0); // Usare la funzione appropriata per inviare dati
        std::cout << "Messaggio inviato: " << messaggio << std::endl;
    }
};

int main() {
    try {
        SocketRAII socket(1); // 1 è solo un esempio, usare il socket reale
        socket.invia("Ciao, mondo!");
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}