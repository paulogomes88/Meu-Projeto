#include <stdio.h>
int main(){
    int numero = 1, resultado;
    printf("Antes do decremento - Resultado: %d - Número: %d\n", resultado, numero);
    resultado = numero--;
    printf("Após Pós-decremento - Resultado: %d - Número: %d\n", resultado, numero);
    resultado = --numero;
    printf("Após Pré-decremento - Resultado: %d - Número: %d\n", resultado, numero);
}