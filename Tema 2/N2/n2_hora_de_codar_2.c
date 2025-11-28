#include <stdio.h>

// Método sem Casting

int main()
{
    int nota1, nota2, nota3;
    int soma;
    float media;

    printf("*** Programa de Cálculo de Média ***\n");

    printf("Digite a 1ª nota: ");
    scanf("%d", &nota1);

    printf("Digite a 2ª nota: ");
    scanf("%d", &nota2);

    printf("Digite a 3ª nota: ");
    scanf("%d", &nota3);

    soma = nota1 + nota2 + nota3;
    media = (nota1 + nota2 + nota3) / 3;
    
    printf("A soma é: %d\n", soma);
    printf("A média é: %f\n", media);

    printf("==================================\n");
    return 0;
}