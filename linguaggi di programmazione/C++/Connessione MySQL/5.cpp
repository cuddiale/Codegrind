// Stabilire una connessione a MySQL e stampare il nome del database usando SOCI.

#include <soci/soci.h>
#include <soci/mysql/soci-mysql.h>
#include <iostream>

int main() {
    try {
        soci::session sql(soci::mysql, "db=test_db user=root password='password' host=localhost");
        std::cout << "Connesso al database: test_db" << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Errore: " << e.what() << std::endl;
    }
    return 0;
}