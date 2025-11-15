#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main () {

    /* Declaração das Variáveis para Carta 1 */
    char estado;
    char codigo[6];
    char nomeDaCidade[20];
    int populacao;
    float area;
    float pib;
    int qtdPontoTuristico;

    /* Entrada dos Dados para Carta 1 */
    printf("Dados da Carta 1:\n");
    printf("Digite a primeira letra do Estado: "); scanf(" %c", &estado);
    printf("Digite o código: "); scanf("%s", codigo);
    printf("Digite o nome da Cidade: "); scanf("%s", nomeDaCidade);
    printf("Digite a População: "); scanf("%d", &populacao);
    printf("Digite a Área: "); scanf("%f", &area);
    printf("Digite o PIB: "); scanf("%f", &pib);
    printf("Digite a quantidade de pontos Turísticos: "); scanf("%d", &qtdPontoTuristico);

    /* Declaração das Variáveis para Carta 2 */
    char estado2;
    char codigo2[6];
    char nomeDaCidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int qtdPontoTuristico2;

    /* Entrada dos dados da Carta 2 */
    printf("\nDados da Carta 2:\n");
    printf("Digite a primeira letra do Estado: "); scanf(" %c", &estado2);
    printf("Digite o código: "); scanf("%s", codigo2);
    printf("Digite o nome da Cidade: "); scanf("%s", nomeDaCidade2);
    printf("Digite a População: "); scanf("%d", &populacao2);
    printf("Digite a Área: "); scanf("%f", &area2);
    printf("Digite o PIB: "); scanf("%f", &pib2);
    printf("Digite a quantidade de pontos Turísticos: "); scanf("%d", &qtdPontoTuristico2);

    /* Exibição da Carta 1 */
    printf("\nCarta 01:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c%s\n", estado, codigo);
    printf("Nome da Cidade: %s\n", nomeDaCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", qtdPontoTuristico);

    /* Exibição da Carta 2 */
    printf("\nCarta 02:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c%s\n", estado, codigo);
    printf("Nome da Cidade: %s\n", nomeDaCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", qtdPontoTuristico);

    printf("\n");

    return 0;
}