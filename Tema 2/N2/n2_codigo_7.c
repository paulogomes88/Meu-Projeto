#include <stdio.h>

int main (){
    int a = 10;
    float b = 3, resultado;

    //resultado = a + b; // 'a' é convertido implicitamente para float
    resultado = (float) a / b; // 'a' é convertido explicitamente para float

    printf("Valor de resultado: %.2f", resultado);

    printf("\n");
    return 0;
}