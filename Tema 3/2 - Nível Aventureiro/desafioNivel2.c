#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main () {

    /* Declaração das Variáveis para Carta 1 */
    char estado[2] = "A";
    char codigo[6] = "01";
    char nomeDaCidade[20] = "Sampa";
    unsigned int populacao = 12325000;
    float area = 1521.11;
    float pib = 699.28;
    int qtdPontoTuristico = 50;
    float densidadePopulacao = (float) populacao / area;
    float pibPerCapita = (float) populacao / pib;
    float superPoder = (float) populacao + area + pib + (float) qtdPontoTuristico + densidadePopulacao + pibPerCapita;
    
/*  printf("==== Carta 01 ====\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s%s\n", estado, codigo);
    printf("Nome da Cidade: %s\n", nomeDaCidade);
    printf("População: %u\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", qtdPontoTuristico);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacao);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita);
    printf("Super Poder da Carta 1: %.2f\n", superPoder);*/

    /* Declaração das Variáveis para Carta 2 */
    
    char estado2[2] = "B";
    char codigo2[6] = "02";
    char nomeDaCidade2[20] = "RIO";
    unsigned int populacao2 = 6748000; 
    float area2 = 1200.25;
    float pib2 = 300.50;
    int qtdPontoTuristico2= 30;
    float densidadePopulacao2 = (float) populacao2 / area2;
    float pibPerCapita2 = (float) populacao2 / pib2;
    float superPoder2 = (float) populacao2 + area2 + pib2 + (float) qtdPontoTuristico2 + densidadePopulacao2 + pibPerCapita2;
    

/*
    printf("\n==== Carta 02 ====\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %u\n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", qtdPontoTuristico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacao2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2); 
    printf("Super Poder da Carta 2: %.2f\n", superPoder2);
*/
    
    printf("-----------------\n");

    int escolhaAtributo;

    printf("Opções\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB Per Capta\n");
    printf("7. Super Poder\n");

    printf("Digite sua opção: ");
    scanf("%d", &escolhaAtributo);

    printf("Nome da Cidade\n");
    printf("Carta 1: %s - Carta 2: %s\n", nomeDaCidade, nomeDaCidade2);

    switch (escolhaAtributo) {
        case 1:
            printf("Atributo Escolhido: População\n");
            if (populacao > populacao2) {
                printf("Carta 1 venceu\n");
            } else if (populacao < populacao2) {
                printf("Carta 2 venceu\n");
            } else {
                printf("O valor das duas cartas são iguais!\n");
            }
        break;
        case 2:
            printf("Atributo Escolhido: Área\n");
            if (area > area2){
                printf("Carta 1 venceu\n");
            } else if (area < area2){
                printf("Carta 2 venceu\n");
            } else {
                printf("O valor das duas cartas são iguais!\n");
            }
        break;
        case 3:
            printf("Atributo Escolhido: PIB\n");
            if (pib > pib2){
                printf("Carta 1 venceu\n");
            } else if (pib < pib2){
                printf("Carta 2 venceu\n");
            } else {
                printf("O valor das duas cartas são iguais!\n");
            }
        break;
        case 4:
            printf("Atributo Escolhido: Número de Pontos Turísticos\n");
                if (qtdPontoTuristico > qtdPontoTuristico2) {
                    printf("Carta 1 venceu\n");
            } else if (qtdPontoTuristico < qtdPontoTuristico2) {
                printf("Carta 2 venceu\n");
            } else {
                printf("O valor das duas cartas são iguais!\n");
            }
        break;
        case 5:
            printf("Atributo Escolhido: Densidade Populacional\n");
            if (densidadePopulacao < densidadePopulacao2){
                printf("Carta 1 venceu\n");
            } else if (densidadePopulacao > densidadePopulacao2){
                printf("Carta 2 venceu\n");
            } else {
                printf("O valor das duas cartas são iguais!\n");
            }
        break;
        case 6:
            printf("Atributo Escolhido: PIB Per Capta\n");
            if (pibPerCapita > pibPerCapita2){
                printf("Carta 1 venceu\n");
            } else if (pibPerCapita < pibPerCapita2){
                printf("Carta 2 venceu\n");
            } else {
                printf("O valor das duas cartas são iguais!\n");
            }
        break;
        case 7:
            printf("Atributo Escolhido: Super Poder\n");
            if (superPoder > superPoder2){
                printf("Carta 1 venceu\n");
            } else if (superPoder < superPoder2){
                printf("Carta 2 venceu\n");
            } else {
                printf("O valor das duas cartas são iguais!\n");
            }  
        break;

        default: printf("Atributo Não Existe. Tente Novamente!\n");
    }

    printf("-----------------\n"); 


}
