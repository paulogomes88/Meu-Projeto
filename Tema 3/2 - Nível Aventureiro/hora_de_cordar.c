#include <stdio.h>

int main(){

    int escolhaJogador, esolhaComputador;
    srand(time(0));

    printf("==== Jogar Jopekô ====\n");
    printf("Escolha uma opção: \n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    printf("Escolha sua opção: \n");
    scanf("%d", escolhaJogador);


    printf("\n---- Fim ----\n\n");
    return 0;
}