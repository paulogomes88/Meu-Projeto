#include <stdio.h>

int main () {
    // int idade = 18;
    // int resultado;

    // Modo 1
    // condicao ? verdadeiro : falso;
    /* idade >= 18 ? printf("Maior da Idade\n") : printf("Menor de Idade\n"); */

    // Modo 2
    /* resultado = idade >= 18 ? 1 : 0;

    if (resultado == 1){
        printf("Maior da Idade\n");
    } else {
        printf("Menor de Idade\n");
    } */

    // Modo 3 - Temperatura

    /* int temperatura = 31;
    int resultado;

    // condicao ? verdadeiro : falso;

    resultado = temperatura > 30;

    if (resultado == 1){
        printf("Está calor\n");
    } else {
        printf("Está frio\n");
    } */

    // Modo 4 - Comparação entre Números
    int num1 = 40, num2 = 20, maior;

    num1 > num2 ? (maior = num1) : (maior = num2);
    printf("O número maior é %d", maior);
 
      
}
