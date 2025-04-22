// Chiedere all'utente di inserire una stringa contenente parole separate da spazi e dividerla in singoli token.

#include <stdio.h>
#include <string.h>

int main() {
    char stringa[100];

    printf("Inserisci una stringa con parole separate da spazi: ");
    scanf("%[^\n]s", stringa);

    char *token = strtok(stringa, " ");

    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}
