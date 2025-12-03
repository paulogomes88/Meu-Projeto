#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

   int escolhaJogador = 2, escolhaComputador;
   srand(time(0));

   // 1 - Pedra
   // 2 - Papel
   // 3 - Tesoura



   printf("==== Jogar Jopekô ====\n");
   printf("Escolha uma opção: \n");
   printf("1 - Pedra\n");
   printf("2 - Papel\n");
   printf("3 - Tesoura\n");
   //printf("Escolha sua opção: ");
   //scanf("%d", &escolhaJogador);

   escolhaComputador = rand() % 3 + 1;

   switch (escolhaJogador) {
      case 1:
         printf("Jogador - Pedra \n");
      break;
      case 2:
         printf("Jogador - Papel \n");
      break;
      case 3:
         printf("Jogador - Tesoura \n");
      break;
      default: printf("Opção Inválida \n");
   }

   switch (escolhaComputador) {
      case 1:
         printf("Computador - Pedra \n");
      break;
      case 2:
         printf("Computador - Papel \n");
      break;
      case 3:
         printf("Computador - Tesoura \n");
      break;
      default: printf("Opção Inválida \n");
   }


   // 1 - Pedra
   // 2 - Papel
   // 3 - Tesoura

   printf("\n");

   if (escolhaJogador == escolhaComputador) {
      printf("Houve um Empate\n");

   } else if ((escolhaJogador == 1) && (escolhaComputador == 3) ||
      (escolhaJogador == 2) && (escolhaComputador == 1) ||
      (escolhaJogador == 3) && (escolhaComputador == 2)) {
         printf("Parabéns! Jogador venceu.\n");
      } else {
         printf("Computador Venceu\n");
      }

   printf("\n---- Fim ----\n\n");

}