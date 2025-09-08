#include <stdio.h>
#include <string.h>
#include <ctype.h>

int es_palindromo(const char *palabra) {
    int izquierda = 0;
    int derecha = strlen(palabra) - 1;
    while (izquierda < derecha) {
        // Ignorar espacios y convertir a minúsculas
        while (izquierda < derecha && !isalnum(palabra[izquierda])) izquierda++;
        while (izquierda < derecha && !isalnum(palabra[derecha])) derecha--;
        if (tolower(palabra[izquierda]) != tolower(palabra[derecha]))
            return 0;
        izquierda++;
        derecha--;
    }
    return 1;
}

int main() {
    char palabra[100];
    printf("Ingrese una palabra: ");
    fgets(palabra, sizeof(palabra), stdin);
    // Eliminar salto de línea
    palabra[strcspn(palabra, "\n")] = 0;

    if (es_palindromo(palabra))
        printf("La palabra es un palindromo.\n");
    else
        printf("La palabra no es un palindromo.\n");
    return 0;
}