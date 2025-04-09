// Stabilire una connessione a MySQL e leggere un singolo record usando MySQL C API.

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

    const char* query = "SELECT * FROM test_table WHERE name = 'John Doe'";
    if (mysql_query(conn, query)) {
        std::cerr << "SELECT failed. Error: " << mysql_error(conn) << std::endl;
        mysql_close(conn);
        return EXIT_FAILURE;
    }

    MYSQL_RES* res = mysql_store_result(conn);
    if (res == nullptr) {
        std::cerr << "mysql_store_result() failed. Error: " << mysql_error(conn) << std::endl;
        mysql_close(conn);
        return EXIT_FAILURE;
    }

    MYSQL_ROW row;
    if ((row = mysql_fetch_row(res))) {
        std::cout << "ID: " << row[0] << ", Name: " << row[1] << ", Age: " << row[2] << std::endl;
    } else {
        std::cout << "Record non trovato" << std::endl;
    }

    mysql_free_result(res);
    mysql_close(conn);
    return EXIT_SUCCESS;
}