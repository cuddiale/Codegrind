// Stabilire una connessione a MySQL ed eliminare più record usando MySQL C API.

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

    const char* query = "DELETE FROM test_table WHERE status = 'inactive'";
    if (mysql_query(conn, query)) {
        std::cerr << "DELETE failed. Error: " << mysql_error(conn) << std::endl;
    } else {
        std::cout << "Record eliminati con successo." << std::endl;
    }

    mysql_close(conn);
    return EXIT_SUCCESS;
}