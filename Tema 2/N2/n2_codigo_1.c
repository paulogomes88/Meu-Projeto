#include    <stdio.h>

int main(){
    int numero1, numero2 = 0;
    int soma, subtracao, multiplicacao, divisao;

    printf("Digite o Primeiro Número: ");
    scanf("%d", &numero1);

    printf("Digite o Segundo Número: ");
    scanf("%d", &numero2);

    /* Adição */
    soma = numero1 + numero2;
    
    /* Subtração */
    subtracao = numero1 - numero2;

    /* Multiplicação */
    multiplicacao = numero1 * numero2;

    /* Divisão */
    divisao = numero1 / numero2;

    printf("A soma é %d\n", soma);
    printf("A substração é %d\n", subtracao);
    printf("A Multiplicação é %d\n", multiplicacao);
    printf("A Divisão é %d\n", divisao);

    return 0;
}