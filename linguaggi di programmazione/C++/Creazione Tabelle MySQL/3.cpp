// Stabilire una connessione a MySQL e creare una tabella usando MySQL C API.

#include <mysql/mysql.h>
#include <iostream>

int main() {
    MYSQL* conn;
    conn = mysql_init(nullptr);

    if (conn == nullptr) {
        std::cerr << "mysql_init() failed\n";
        return EXIT_FAILURE;
    }

    if (mysql_real_connect(conn, "localhost", "root", "password", "test_db", 0, nullptr, 0) == nullptr) {
        std::cerr << "mysql_real_connect() failed\n";
        mysql_close(conn);
        return EXIT_FAILURE;
    }

    const char* query = "CREATE TABLE IF NOT EXISTS esempio (id INT AUTO_INCREMENT PRIMARY KEY, nome VARCHAR(255))";
    if (mysql_query(conn, query)) {
        std::cerr << "CREATE TABLE failed. Error: " << mysql_error(conn) << std::endl;
        mysql_close(conn);
        return EXIT_FAILURE;
    }

    std::cout << "Tabella creata: esempio" << std::endl;

    mysql_close(conn);
    return EXIT_SUCCESS;
}