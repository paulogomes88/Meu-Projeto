#include <stdio.h>

// Método sem Casting

int main()
{
    float nota1, nota2, nota3;
    float soma, media;

    printf("*** Programa de Cálculo de Média ***\n");

    printf("Digite a 1ª nota: ");
    scanf("%f", &nota1);

    printf("Digite a 2ª nota: ");
    scanf("%f", &nota2);

    printf("Digite a 3ª nota: ");
    scanf("%f", &nota3);

    soma = nota1 + nota2 + nota3;
    media = soma / 3;
    
    printf("A soma é: %.1f\n", soma);
    printf("A média é: %.1f\n", media);

    printf("==================================\n");
    return 0;
}