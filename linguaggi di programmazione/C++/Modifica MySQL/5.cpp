// Stabilire una connessione a MySQL e modificare un singolo record usando MySQL C API.

#include <mysql/mysql.h>
#include <iostream>

int main() {
    MYSQL* conn = mysql_init(nullptr);
    if (conn == nullptr) {
        std::cerr << "mysql_init() failed\n";
        return EXIT_FAILURE;
    }

    if (mysql_real_connect(conn, "localhost", "root", "password", "test_db", 0, nullptr, 0) == nullptr) {
        std::cerr << "mysql_real_connect() failed\n";
        mysql_close(conn);
        return EXIT_FAILURE;
    }

    const char* query = "UPDATE test_table SET age = 35 WHERE name = 'John Doe'";
    if (mysql_query(conn, query)) {
        std::cerr << "UPDATE failed. Error: " << mysql_error(conn) << std::endl;
    } else {
        std::cout << "Record modificato con successo." << std::endl;
    }

    mysql_close(conn);
    return EXIT_SUCCESS;
}