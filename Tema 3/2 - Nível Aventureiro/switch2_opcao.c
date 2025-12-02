#include <stdio.h>

int main(){

   int opcao;

   printf("Escolha uma das opções\n");
   printf("1 - Verificar saldo\n");
   printf("2 - Fazer depósito\n");
   printf("3 - Fazer Saque\n");
   printf("Digite sua Opção: ");
   scanf("%d", &opcao);

   switch (opcao) {
      case 1:
         printf("Seu saldo e R$ 000,00\n");
      break;

      case 2:
         printf("Fazer depósito\n");
      break;

      case 3:
         printf("Fazer Saque\n");
      break;

      default: printf("Opção Inválida!\n");

   }

}