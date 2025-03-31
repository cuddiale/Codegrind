// Scrivi un programma in C++ che rinomini un file di testo.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    if (rename("old_file.txt", "new_file.txt") == 0) {
        cout << "File rinominato con successo!" << endl;
    } else {
        cout << "Impossibile rinominare il file." << endl;
    }

    return 0;
}
