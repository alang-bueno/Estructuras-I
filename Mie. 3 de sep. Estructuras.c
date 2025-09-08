#include <stdio.h>
#define TAM 50

char letras[TAM][TAM]={
    {'a', 'b', 'c'},
    //.
    //.
    //.
};

char cad[20] = "laboratorio";

int main(){
    char ciudades[5][20] = {// 5 ciudades de 20 caracteres
    "Tokio",
    "Mazatlan",
    "Acapulco",
    "Oaxaca",
    "TUla"
    };
    for(int i = 0; i < 5; i++){
       printf("%s\n", ciudades[i]);

    }
}

