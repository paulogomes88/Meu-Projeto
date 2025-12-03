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
    
    printf("==== Carta 01 ====\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s%s\n", estado, codigo);
    printf("Nome da Cidade: %s\n", nomeDaCidade);
    printf("População: %u\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", qtdPontoTuristico);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacao);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita);
    printf("Super Poder da Carta 1: %.2f\n", superPoder);

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

printf("\n==== Comparação de Cartas ====\n");

    // População (populacao)
    if (populacao > populacao2) {
        printf("População: Carta 1 venceu\n");
    } else if (populacao < populacao2) {
        printf("População: Carta 2 venceu\n");
    } else {
        printf("População: O valor das duas cartas são iguais!\n");
    }

    // Área (area)
    if (area > area2){
        printf("Área: Carta 1 venceu\n");
    } else if (area < area2){
        printf("Área: Carta 2 venceu\n");
    } else {
        printf("Área: O valor das duas cartas são iguais!\n");
    }

    // PIB (pib)
    if (pib > pib2){
        printf("PIB: Carta 1 venceu\n");
    } else if (pib < pib2){
        printf("PIB: Carta 2 venceu\n");
    } else {
        printf("PIB: O valor das duas cartas são iguais!\n");
    }

    // Quantidade de Ponto Turístico (qtdPontoTuristico)
    if (qtdPontoTuristico > qtdPontoTuristico2) {
        printf("Pontos Turísticos: Carta 1 venceu\n");
    } else if (qtdPontoTuristico < qtdPontoTuristico2) {
        printf("Pontos Turísticos: Carta 2 venceu\n");
    } else {
        printf("Pontos Turísticos: O valor das duas cartas são iguais!\n");
    }

    // Densidade da População (densidadePopulacao) Menor valor é o que vence
    if (densidadePopulacao < densidadePopulacao2){
        printf("Densidade População: Carta 1 venceu\n");
    } else if (densidadePopulacao > densidadePopulacao2){
        printf("Densidade População: Carta 2 venceu\n");
    } else {
        printf("Densidade População: O valor das duas cartas são iguais!\n");
    }

    // Pib Per Capta (pibPerCapita)
    if (pibPerCapita > pibPerCapita2){
        printf("PIB Per Capta: Carta 1 venceu\n");
    } else if (pibPerCapita < pibPerCapita2){
        printf("PIB Per Capta: Carta 2 venceu\n");
    } else {
        printf("PIB Per Capta: O valor das duas cartas são iguais!\n");
    }

    // Super Poder (superPoder)
    if (superPoder > superPoder2){
        printf("Super Poder: Carta 1 venceu\n");
    } else if (superPoder < superPoder2){
        printf("Super Poder: Carta 2 venceu\n");
    } else {
        printf("Super Poder: O valor das duas cartas são iguais!\n");
    }  


    printf("\n### Comparação de um Único Atributo ###\n");

    // Comparação de um Único Atributo

    if (densidadePopulacao < densidadePopulacao2){
        printf("Densidade Populacional Carta 1: %.2f hab/km²\n", densidadePopulacao);
        printf("Densidade Populacional Carta 2: %.2f hab/km²\n", densidadePopulacao2);
        printf("Carta 1 Venceu\n");
    } else {
        printf("Densidade Populacional Carta 1: %.2f hab/km²\n", densidadePopulacao);
        printf("Densidade Populacional Carta 2: %.2f hab/km²\n", densidadePopulacao2);
        printf("Carta 2 Venceu\n");
    }

    printf("-----------------\n");

    /*
    1. Menu Interativo: Criar um menu interativo no terminal usando a estrutura switch que permita ao jogador escolher qual atributo será usado para comparar as cartas. O menu deve ser claro e fácil de usar.

    2. Comparação de Atributos: Implementar a lógica de comparação entre duas cartas com base no atributo selecionado pelo jogador. Os atributos disponíveis são:

        Nome do país (string - usado apenas para exibir informações, não para comparação direta) 
        População (int)   
        Área (float)   
        PIB (float)   
        Número de pontos turísticos (int)   
        Densidade demográfica (float - já calculada no desafio anterior).

    3. Regras de Comparação: A regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.

    4. Exibição do Resultado: Mostrar na tela, de forma clara, o resultado da comparação, incluindo:

        O nome dos dois países.
        O atributo usado na comparação.
        Os valores do atributo para cada carta.
        Qual carta venceu.
        Em caso de empate, exibir a mensagem "Empate!".
    
    */

        // 1. Nome da Cidade
        // 2. População
        // 3. Área
        // 4. Pib
        // 5. Número de Pontos Turísticos
        // 6. Densidade Populacional
        // 7. PIB Per Capta
        // 8. Super Poder

    int escolhaAtributo = 2;

    switch (escolhaAtributo) {
        case 1:
            printf("Nome da Cidade\n");
            printf("Carta 1: %s - Carta 2: %s\n", nomeDaCidade, nomeDaCidade2);
        break;
        case 2:
            printf("Atributo Escolhido: População\n");
            if (populacao > populacao2) {
                printf("População: Carta 1 venceu\n");
            } else if (populacao < populacao2) {
                printf("População: Carta 2 venceu\n");
            } else {
                printf("População: O valor das duas cartas são iguais!\n");
            }
        break;
        case 3:
            printf("Atributo Escolhido: Área\n");
            if (area > area2){
                printf("Área: Carta 1 venceu\n");
            } else if (area < area2){
                printf("Área: Carta 2 venceu\n");
            } else {
                printf("Área: O valor das duas cartas são iguais!\n");
            }
        break;
        case 4:
        printf("Atributo Escolhido: PIB\n");
        break;
        case 5:
        printf("Atributo Escolhido: Número de Pontos Turísticos\n");
        break;
        case 6:
        printf("Atributo Escolhido: Densidade Populacional\n");
        break;
        case 7:
        printf("Atributo Escolhido: PIB Per Capta\n");
        break;
        case 8:
        printf("Atributo Escolhido: Super Poder");
        break;

        default: printf("Atributo Não Existe. Tente Novamente!\n");
    }

    


}
