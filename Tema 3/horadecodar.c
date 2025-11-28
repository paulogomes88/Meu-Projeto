#include <stdio.h>

int main(){

    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("Entre com a temperatura: \n");
    scanf("%f", &temperatura);

    printf("Entre com a umidade: \n");
    scanf("%f", &umidade);

    printf("Entre com o Estoque: \n");
    scanf("%u", &estoque);

    if (temperatura > 30){
        printf("A temperatura está a cima do esperado\n");
    } else {
        printf("A temperatura está abaixo do esperado\n");
    }

    if (umidade > 50){
        printf("A umidade está a cima do esperado\n");
    } else {
        printf("A umidade está abaixo do esperado\n");
    }

    if (estoque < estoqueMinimo){
        printf("O estoque está abaixo do Estoque Mínimo\n");
    } else {
        printf("O estoque está a cima do Estoque Mínimo\n");
    }

}