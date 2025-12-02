#include <stdio.h>

int main(){
    int numero = 1;

    printf("Digite um número inteiro\n");
    scanf("%d", &numero);

    switch (numero) {
        case 1:
        // Case 1 executado
        printf("Caso 1 atendido\n");
        break;
        case 2:
        // Case 2 executado
        printf("Caso 2 atendido\n");
        break;
        default:
        // Não atendeu a nenhum caso. Default executado
        printf("Nenhum dos casos atendidos. Default executado\n\n");
    } 

}
    
