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
    
    printf("Carta 01\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s%s\n", estado, codigo);
    printf("Nome da Cidade: %s\n", nomeDaCidade);
    printf("População: %u\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", qtdPontoTuristico);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacao);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita);

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

    printf("\nCarta 02\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %u\n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", qtdPontoTuristico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacao2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2); 

    // ### Comparação entre duas Cartas ###

    // 1. Calcular a Densidade Populacional e o PIB per Capita: Assim como no nível intermediário, calcule e armazene esses valores.

    // 2. Calcular o Super Poder: Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder"). Armazene o Super Poder como float. Atenção: Preste muita atenção na conversão de tipos ao somar valores de tipos diferentes!



    // Comparar as Cartas: Compare as duas cartas atributo por atributo (exceto estado, código e nome), incluindo o Super Poder. Lembre-se: para a densidade populacional, a carta com o menor valor vence; para os demais atributos (incluindo Super Poder), a carta com o maior valor vence.

    printf("\n==== Comparação ====\n");

    if (populacao > populacao2){
        printf("Carta 1\n");
    } else {
        printf("Carta 2\n");
    }

    printf("Super Poder da Carta 1: %.2f \n", superPoder);

    

    // Exibir os Resultados das Comparações: Para cada atributo, imprima na tela qual carta venceu (Carta 1 ou Carta 2), exibindo o resultado da comparação (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence).


    /* Exemplo de Exibição: 
    
    Comparação de Cartas:
    População: Carta 1 venceu (1)
    Área: Carta 1 venceu (1)
    PIB: Carta 1 venceu (1)
    Pontos Turísticos: Carta 1 venceu (1)
    Densidade Populacional: Carta 2 venceu (0)
    PIB per Capita: Carta 1 venceu (1)
    Super Poder: Carta 1 venceu (1)
    
    */



    printf("======================\n");
    return 0;
}
