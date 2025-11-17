#include <stdio.h>

int main(){
    int numero = 1, resultado;
    printf("Antes do incremento - Resultado: %d - Número: %d\n", resultado, numero);
    resultado = numero++;
    printf("Após Pós-incremento - Resultado: %d - Número: %d\n", resultado, numero);
    resultado = ++numero;
    printf("Após Pré-incremento - Resultado: %d - Número: %d\n", resultado, numero);
}