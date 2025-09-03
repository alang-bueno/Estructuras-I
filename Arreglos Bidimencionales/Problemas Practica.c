#include <stdio.h>
#include <stdlib.h>


//Problema 1

int main(){
    int matriz[3][3];

    printf("Ingresa los elemntos de la matriz 3x3:");
    for(int fila = 0; fila < 3; fila ++){
        for(int col = 0; col < 3; col ++){
            printf("Elemento [%d][%d]: ", fila, col);
            scanf("%d", &matriz[fila][col]);
        }
    }
    printf("La matriz ingresada es:\n ");
    for(int fila = 0; fila < 3; fila++){
        for(int col = 0; col < 3; col++){
            printf("%d\t", matriz[fila][col]);
        }
        printf("\n");
    }
    return 0;
}
/*
//Problema 2
void diagonal_principal(int matriz[3][3], int fs, int cs){
    printf("La diagonla principal es: \n");
    for(int fila = 0; fila < fs; fila++){
        for(int col = 0; col < cs; col++){
            if(fila == col){
                printf("%d\t", matriz[fila][col]);
            }else{
                printf("-\t");
            }
        }
        printf("\n");
    }
}
int main(){
    int matriz[3][3];

    printf("Ingresa los elementos de la matriz 3x3:");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    diagonal_principal(matriz, 3, 3);

    return 0;
}

//Problema 3

#define TAM 3

void leer_matriz(int matriz[TAM][TAM]){
    printf("Ingresa los elemntos de la matriz:\n");
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("\nElemento: [%d][%d]:", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
void imprimir_matriz(int matriz[TAM][TAM]){
    printf("\nMatriz ingresada:\n");
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

void diagonal_secundaria(int matriz[TAM][TAM]){
    printf("\nDiagonal secundaria:\n");
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            if(i + j == TAM - 1){
                printf("%d\t", matriz[i][j]);
            }else{
                printf("-\t");
            }
        }
        printf("\n");
    }
}

int main(){
    int matriz[TAM][TAM];

    leer_matriz(matriz);
    imprimir_matriz(matriz);
    diagonal_secundaria(matriz);

    return 0;
}
//Problema 4
#define TAM 3
void leer_matriz(int matriz[TAM][TAM]){
    printf("Ingresa los elemntos de la matriz [%d][%d]:\n", TAM, TAM);
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
        printf("Elemento [%d][%d]:", i, j);
        scanf("%d", &matriz[i][j]);
    }
    printf("\n");
    }
}
void suma_fila(int matriz[TAM][TAM]){
    for(int i = 0; i < TAM; i++){
        int suma = 0;
        for(int j = 0; j < TAM; j++){
            suma += matriz[i][j];
        }
        printf("Suma de fila %d: %d\n", i, suma);
    }
}
void suma_columna(int matriz[TAM][TAM]){
    for(int j = 0; j < TAM; j++){
        int suma = 0;
        for(int i = 0; i < TAM; i++){
            suma += matriz[i][j];
        }
        printf("Suma de columna %d: %d\n", j, suma);
    }
}

int main(){
    int matriz[TAM][TAM];

     leer_matriz(matriz);
     suma_fila(matriz);
     suma_columna(matriz);

    return 0;
}
    */







