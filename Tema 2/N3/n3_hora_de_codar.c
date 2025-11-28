#include <stdio.h>

/*
Programa de Inventário para comparação de produtos em estoque

cadastrar produtos 
comparar estoques
operadores relacionais para comparação
utilização do undisgned
*/

int main(){
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";
    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;
    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA = estoqueA * valorA;
    double valorTotalB = estoqueB * valorB;

    int resultadoA, resultadoB;

    // Exibir as informações na tela
    printf("*** Exibição ***\n");
    printf("Produto %s tem estoque %u e o valor unitário é %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor unitário é %.2f\n", produtoB, estoqueB, valorB);

    // Comparação com valor mínimo de estoque
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("*** Comparação com valor mínimo de estoque ***\n");
    printf("O produto %s tem estoque mínimo %d\n", produtoA, estoqueMinimoA);
    printf("O produto %s tem estoque mínimo %d\n", produtoB, estoqueMinimoB);


    // Comparação entre os valores totais dos produtos
    printf("*** Comparação entre os valores totais dos produtos ***\n");

    printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f)? %d",
        valorTotalA, valorTotalB, (valorTotalA > valorTotalB)
    );
    
    printf("\n*** Fim ***\n");
    return 0;
}