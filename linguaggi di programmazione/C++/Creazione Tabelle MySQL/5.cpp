// Stabilire una connessione a MySQL e creare una tabella usando SOCI.

#include <soci/soci.h>
#include <soci/mysql/soci-mysql.h>
#include <iostream>

int main() {
    try {
        soci::session sql(soci::mysql, "db=test_db user=root password='password' host=localhost");
        sql << "CREATE TABLE IF NOT EXISTS esempio (id INT AUTO_INCREMENT PRIMARY KEY, nome VARCHAR(255))";
        std::cout << "Tabella creata: esempio" << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Errore: " << e.what() << std::endl;
    }
    return 0;
}