#include <stdio.h>

// Variável Short

int main(){
    short int numeroPequeno = 32767; //Valor máximo de short int
    printf("Número pequeno (short int): %d\n", numeroPequeno);

    numeroPequeno = 32768; // Valor maior que o máximo de short int
    printf("Número pequeno atualizado (short int): %d\n", numeroPequeno);

    printf("\n*** Tamanho das Variáveis ***\n");
    printf("Short int: %lu B - int: %lu B - long int: %lu B\n", sizeof(short int), sizeof(int), sizeof(long int));
    printf("Float: %lu B - Double: %lu B Long double: %lu B\n", sizeof(float), sizeof(double), sizeof(long double));


}