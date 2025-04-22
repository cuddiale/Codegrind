// Creare un array dinamico di puntatori a stringhe e aggiungere stringhe dinamicamente.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char **str_array = NULL;
    int n = 0;
    char buffer[100];

    while (1) {
        printf("Inserisci una stringa (digita 'fine' per terminare): ");
        scanf("%99s", buffer);

        if (strcmp(buffer, "fine") == 0) {
            break;
        }

        str_array = (char **)realloc(str_array, (n + 1) * sizeof(char *));
        str_array[n] = (char *)malloc((strlen(buffer) +

1) * sizeof(char));
        strcpy(str_array[n], buffer);
        n++;
    }

    printf("Stringhe inserite:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", str_array[i]);
        free(str_array[i]);
    }

    free(str_array);
    return 0;
}