// Creare una classe per gestire la connessione a MySQL e creare una tabella usando SOCI.

#include <soci/soci.h>
#include <soci/mysql/soci-mysql.h>
#include <iostream>

class MySQLClient {
private:
    soci::session sql;
public:
    MySQLClient(const std::string& connection_string) : sql(soci::mysql, connection_string) {}

    void creaTabella(const std::string& table_name) {
        sql << "CREATE TABLE IF NOT EXISTS " + table_name + " (id INT AUTO_INCREMENT PRIMARY KEY, nome VARCHAR(255))";
        std::cout << "Tabella creata: " << table_name << std::endl;
    }
};

int main() {
    try {
        MySQLClient client("db=test_db user=root password='password' host=localhost");
        client.creaTabella("esempio");
    } catch (const std::exception& e) {
        std::cerr << "Errore: " << e.what() << std::endl;
    }
    return 0;
}