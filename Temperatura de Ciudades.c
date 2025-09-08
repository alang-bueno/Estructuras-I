#include <stdio.h>
#include <string.h>

#define CIUDADES 4
#define MESES 4

void verCiudad(char ciudades[][30], char meses[][15], float temps[CIUDADES][MESES]) {
    char nombre[30];
    int i, j, encontrada = 0;

    printf("Ingresa el nombre de la ciudad: ");
    scanf("%s", nombre);

    for (i = 0; i < CIUDADES; i++) {
        if (strcmp(nombre, ciudades[i]) == 0) {
            printf("\nTemperaturas de %s:\n", ciudades[i]);
            for (j = 0; j < MESES; j++) {
                printf("%s: %.1f\n", meses[j], temps[i][j]);
            }
            encontrada = 1;
        }
    }

    if (!encontrada) {
        printf("Ciudad no encontrada.\n");
    }
}

void verMes(char ciudades[][30], char meses[][15], float temps[CIUDADES][MESES]) {
    char nombre[15];
    int i, j, encontrado = 0;

    printf("Ingresa el nombre del mes: ");
    scanf("%s", nombre);

    for (j = 0; j < MESES; j++) {
        if (strcmp(nombre, meses[j]) == 0) {
            printf("\nTemperaturas en %s:\n", meses[j]);
            for (i = 0; i < CIUDADES; i++) {
                printf("%s: %.1f\n", ciudades[i], temps[i][j]);
            }
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("Mes no encontrado.\n");
    }
}

void verExtremos(char ciudades[][30], char meses[][15], float temps[CIUDADES][MESES]) {
    float min, max;
    int i, j;
    char ciudadMin[30], ciudadMax[30], mesMin[15], mesMax[15];

    min = temps[0][0];
    max = temps[0][0];
    strcpy(ciudadMin, ciudades[0]);
    strcpy(ciudadMax, ciudades[0]);
    strcpy(mesMin, meses[0]);
    strcpy(mesMax, meses[0]);

    for (i = 0; i < CIUDADES; i++) {
        for (j = 0; j < MESES; j++) {
            if (temps[i][j] < min) {
                min = temps[i][j];
                strcpy(ciudadMin, ciudades[i]);
                strcpy(mesMin, meses[j]);
            }
            if (temps[i][j] > max) {
                max = temps[i][j];
                strcpy(ciudadMax, ciudades[i]);
                strcpy(mesMax, meses[j]);
            }
        }
    }

    printf("\nTemperatura minima: %.1f en %s (%s)\n", min, ciudadMin, mesMin);
    printf("Temperatura maxima: %.1f en %s (%s)\n", max, ciudadMax, mesMax);
}

int main() {
    char ciudades[CIUDADES][30] = {"Tokio", "Londres", "NuevaYork", "Mexico"};
    char meses[MESES][15] = {"Enero", "Febrero", "Marzo", "Abril"};
    float temps[CIUDADES][MESES] = {
        {5.2, 7.1, 12.3, 18.5},
        {4.1, 5.3, 8.7, 12.4},
        {0.8, 2.9, 8.1, 14.7},
        {18.2, 21.3, 24.8, 26.1}
    };

    int opcion;

    do {
        printf("\nMENU\n");
        printf("1. Ver temperaturas de una ciudad\n");
        printf("2. Ver temperaturas de un mes\n");
        printf("3. Ver temperatura minima y maxima\n");
        printf("0. Salir\n");
        printf("Elige una opcion: ");
        scanf("%d", &opcion);

        if (opcion == 1) {
            verCiudad(ciudades, meses, temps);
        } else if (opcion == 2) {
            verMes(ciudades, meses, temps);
        } else if (opcion == 3) {
            verExtremos(ciudades, meses, temps);
        } else if (opcion != 0) {
            printf("Opcion invalida\n");
        }
    } while (opcion != 0);

    return 0;
}


