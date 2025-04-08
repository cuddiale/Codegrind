// Stabilire una connessione a MySQL ed inserire un singolo record usando MySQL C API.

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

    const char* query = "INSERT INTO test_table (name, age) VALUES ('John Doe', 30)";
    if (mysql_query(conn, query)) {
        std::cerr << "INSERT failed. Error: " << mysql_error(conn) << std::endl;
    } else {
        std::cout << "Record inserito con successo." << std::endl;
    }

    mysql_close(conn);
    return EXIT_SUCCESS;
}