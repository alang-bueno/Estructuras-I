/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#define ALUM 50
#define MAT 10


void capturarDatos(int datos[ALUM][MAT], int alumnos, int materias) {
    for (int i = 0; i < alumnos; i++) {
        printf("\nIngresa las calificaciones del alumno %d\n", i + 1);
        for (int j = 0; j < materias; j++) {
            printf("Calificacion en materia %d: ", j + 1);
            scanf("%d", &datos[i][j]);
        }
    }
    printf("\nCalificaciones capturadas\n");
    for (int i = 0; i < alumnos; i++) {
        printf("Alumno %d: ", i + 1);
        for (int j = 0; j < materias; j++) {
            printf("%d ", datos[i][j]);
        }
        printf("\n");
}

void imprimirPromedios(int datos[ALUM][MAT], int alumnos, int materias) {
    printf("\nPromedios\n");
    for (int i = 0; i < alumnos; i++) {
        int suma = 0;
        for (int j = 0; j < materias; j++) {
            suma += datos[i][j];
        }
        int promedio = suma / materias;
        printf("Promedio del alumno %d = %d\n", i + 1, promedio);
    }
}

int main() {
    int alumnos, materias;
    int datos[ALUM][MAT];

    printf("Numero de alumnos: ");
    scanf("%d", &alumnos);

    printf("Numero de materias: ");
    scanf("%d", &materias);


    capturarDatos(datos, alumnos, materias);
    imprimirPromedios(datos, alumnos, materias);

    return 0;
}
