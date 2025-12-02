#include <stdio.h>

int main(){

    int idade = 20;
    int altura = 1.75;

    // idade >= 18 -> verdadeiro
    // idade <= 30 -> verdadeiro
    // verdadeiro && verdadeiro -> verdadeiro
    // verdadeiro || altura > 1.70 -> verdadeiro
    // verdadeiro && verdadeiro || verdadeiro

    if (idade >= 18 && idade <= 30 || altura > 1.70){
        printf("Você possui idade e altura adequada\n");
    } else {
        printf("Não atendeu os requisitos necessários\n");
    }

    printf("--- Fim ---\n\n");
    return 0;
}