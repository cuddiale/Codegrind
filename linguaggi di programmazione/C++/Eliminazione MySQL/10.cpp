// Creare una classe per gestire la connessione a MySQL ed eliminare più record usando SOCI.

#include <soci/soci.h>
#include <soci/mysql/soci-mysql.h>
#include <iostream>

class MySQLClient {
private:
    soci::session sql;
public:
    MySQLClient(const std::string& connection_string) : sql(soci::mysql, connection_string) {}

    void eliminaRecordMultipli(const std::string& table, const std::string& status) {
        sql << "DELETE FROM " << table << " WHERE status = :status", soci::use(status);
        std::cout << "Record eliminati con successo." << std::endl;
    }
};

int main() {
    try {
        MySQLClient client("db=test_db user=root password='password' host=localhost");
        client.eliminaRecordMultipli("test_table", "inactive");
    } catch (const std::exception& e) {
        std::cerr << "Errore: " << e.what() << std::endl;
    }
    return 0;
}