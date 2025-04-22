#include <stdio.h>

int main()
{
    // Variáveis das duas cartas
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Introdução pro jogo
    printf("Bem-vindo ao Super Trunfo das Cidades! Cadastre suas cartas:\n");

    // Primeira carta
    printf("Primeira carta:\n");

    printf("Digite o estado (letra de A ate H): \n");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex: A01): \n");
    scanf("%s", codigo1);

    printf("Nome da cidade: \n");
    scanf(" %s", nomeCidade1);

    printf("Populacao: \n");
    scanf("%d", &populacao1);

    printf("Area (em km²): \n");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): \n");
    scanf("%f", &pib1);

    printf("Número de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos1);

    // Exibindo a primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    // Segunda carta
    printf("\nSegunda carta:\n");

    printf("Digite o estado (letra de A ate H): \n");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: B02): \n");
    scanf("%s", codigo2);

    printf("Nome da cidade: \n");
    scanf("%s", nomeCidade2);

    printf("Populacao: \n");
    scanf("%d", &populacao2);

    printf("Area (em km²): \n");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): \n");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos2);

    // Exibindo a segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    printf("\nCadastro finalizado! Agora e so jogar. Boa sorte no Super Trunfo!\n");

    return 0;
}
