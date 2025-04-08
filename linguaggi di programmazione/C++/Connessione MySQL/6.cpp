// Creare una classe per gestire la connessione a MySQL e stampare il nome del database usando SOCI.

#include <soci/soci.h>
#include <soci/mysql/soci-mysql.h>
#include <iostream>

class MySQLClient {
private:
    soci::session sql;
public:
    MySQLClient(const std::string& connection_string) : sql(soci::mysql, connection_string) {}

    void stampaNomeDatabase(const std::string& db_name) {
        std::cout << "Connesso al database: " << db_name << std::endl;
    }
};

int main() {
    try {
        MySQLClient client("db=test_db user=root password='password' host=localhost");
        client.stampaNomeDatabase("test_db");
    } catch (const std::exception& e) {
        std::cerr << "Errore: " << e.what() << std::endl;
    }
    return 0;
}