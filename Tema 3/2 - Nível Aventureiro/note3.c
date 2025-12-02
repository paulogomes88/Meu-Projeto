#include <stdio.h>

int main(){

    int numero = 7;

    //printf("Digite um número: \n");
    //scanf("%d", &numero);

    if(numero > 0){
        if(numero % 2 == 0){
            printf("Par\n");
        } else {
            printf("Ímpar\n");
        }
    } else if (numero == 0){
        printf("Número Zero\n");
    } else {
        printf("Número negativo\n");
    }

        



}