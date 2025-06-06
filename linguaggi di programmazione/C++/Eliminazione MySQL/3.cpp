// Creare una classe per gestire la connessione a MySQL ed eliminare un singolo record.

#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
#include <iostream>

class MySQLClient {
private:
    sql::mysql::MySQL_Driver* driver;
    std::unique_ptr<sql::Connection> con;
public:
    MySQLClient(const std::string& host, const std::string& user, const std::string& pass, const std::string& db) {
        driver = sql::mysql::get_mysql_driver_instance();
        con.reset(driver->connect(host, user, pass));
        con->setSchema(db);
    }

    void eliminaRecordSingolo(const std::string& table, int id) {
        std::unique_ptr<sql::PreparedStatement> pstmt(con->prepareStatement("DELETE FROM " + table + " WHERE id = ?"));
        pstmt->setInt(1, id);
        int rows = pstmt->executeUpdate();
        std::cout << "Eliminati " << rows << " record." << std::endl;
    }
};

int main() {
    MySQLClient client("tcp://127.0.0.1:3306", "root", "password", "test_db");
    client.eliminaRecordSingolo("test_table", 1);
    return 0;
}