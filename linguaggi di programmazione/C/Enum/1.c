// Definire un enum per i giorni della settimana e stamparli a schermo:

#include <stdio.h>

enum GiorniSettimana {
    Lunedi,
    Martedi,
    Mercoledi,
    Giovedi,
    Venerdi,
    Sabato,
    Domenica
};

int main() {
    enum GiorniSettimana oggi = Martedi;

    printf("Oggi è %d\n", oggi);

    return 0;
}