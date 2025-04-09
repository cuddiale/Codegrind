// Stabilire una connessione a MySQL ed eliminare un singolo record usando SOCI.

#include <soci/soci.h>
#include <soci/mysql/soci-mysql.h>
#include <iostream>

int main() {
    try {
        soci::session sql(soci::mysql, "db=test_db user=root password='password' host=localhost");
        sql << "DELETE FROM test_table WHERE id = 1";
        std::cout << "Record eliminato con successo." << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Errore: " << e.what() << std::endl;
    }
    return 0;
}