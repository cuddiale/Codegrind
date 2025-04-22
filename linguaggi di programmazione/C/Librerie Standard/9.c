// Confrontare due stringhe usando `string.h`.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "abc";
    char str2[] = "abc";
    if (strcmp(str1, str2) == 0) {
        printf("Le stringhe sono uguali\n");
    } else {
        printf("Le stringhe sono diverse\n");
    }
    return 0;
}