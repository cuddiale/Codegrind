// Utilizzare la stringificazione di token per creare messaggi di errore personalizzati.

#include <stdio.h>

#define STRINGIFY(x) #x
#define ERROR_MSG(msg) printf("Errore: %s\n", STRINGIFY(msg))

int main() {
    ERROR_MSG(C'è stato un errore);
    return 0;
}