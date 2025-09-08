#include <stdio.h>
#include <string.h>
#include <ctype.h>

void ordenar(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len-1; i++) {
        for (int j = i+1; j < len; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

void limpiar(char *dest, const char *src) {
    int j = 0;
    for (int i = 0; src[i]; i++) {
        if (isalpha((unsigned char)src[i])) {
            dest[j++] = tolower((unsigned char)src[i]);
        }
    }
    dest[j] = '\0';
}

int main() {
    char palabra1[100], palabra2[100];
    char limpia1[100], limpia2[100];

    printf("Ingrese la primera palabra: ");
    fgets(palabra1, sizeof(palabra1), stdin);
    palabra1[strcspn(palabra1, "\n")] = 0;

    printf("Ingrese la segunda palabra: ");
    fgets(palabra2, sizeof(palabra2), stdin);
    palabra2[strcspn(palabra2, "\n")] = 0;

    limpiar(limpia1, palabra1);
    limpiar(limpia2, palabra2);

    ordenar(limpia1);
    ordenar(limpia2);

    if (strcmp(limpia1, limpia2) == 0) {
        printf("Las palabras son anagramas.\n");
    } else {
        printf("Las palabras NO son anagramas.\n");
    }

    return 0;
}