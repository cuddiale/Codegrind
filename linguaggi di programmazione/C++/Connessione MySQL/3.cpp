// Stabilire una connessione a MySQL e stampare il nome del database usando MySQL C API.

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

    std::cout << "Connesso al database: " << mysql_get_server_info(conn) << std::endl;

    mysql_close(conn);
    return EXIT_SUCCESS;
}