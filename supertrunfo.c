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
    printf("Bem-vindo ao Super Trunfo das Cidades! Bora cadastrar suas cartas:\n");

    // Primeira carta
    printf("Primeira carta:\n");

    printf("Digite o estado (letra de A até H): \n");
    scanf(" %c", &estado1);

    printf("Código da carta (ex: A01): \n");
    scanf("%s", codigo1);

    printf("Nome da cidade: \n");
    scanf(" %s", nomeCidade1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área (em km²): \n");
    scanf("%f", &area1);

    printf("PIB (em bilhões): \n");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    // Exibindo a primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    // Segunda carta
    printf("\nSegunda carta:\n");

    printf("Digite o estado (letra de A até H): \n");
    scanf(" %c", &estado2);

    printf("Código da carta (ex: B02): \n");
    scanf("%s", codigo2);

    printf("Nome da cidade: \n");
    scanf("%s", nomeCidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área (em km²): \n");
    scanf("%f", &area2);

    printf("PIB (em bilhões): \n");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    // Exibindo a segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    printf("\nCadastro finalizado! Agora é só jogar. Boa sorte no Super Trunfo!\n");

    return 0;
}
