#include <stdio.h>
#include <stdlib.h>

int main() {

    // Carta 1
    char estado1;
    char codigocarta1[10];
    char nomedacidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    // Carta 2
    char estado2;
    char codigocarta2[10];
    char nomedacidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    // Ler carta 1
    printf("Digite uma letra de A-H: \n");
    scanf(" %c", &estado1);

    printf("Digite o codigo do estado: \n");
    scanf("%s", codigocarta1);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomedacidade1);

    printf("Digite a populacao da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade em Km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontosturisticos1);

    // Ler carta 2
    printf("Digite uma letra de A-H: \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo do estado: \n");
    scanf("%s", codigocarta2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomedacidade2);

    printf("Digite a populacao da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade em Km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontosturisticos2);

    // Resultado carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da carta: %s\n", codigocarta1);
    printf("Cidade: %s\n", nomedacidade1);
    printf("Número de habitantes: %d\n", populacao1);
    printf("Área em km²: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontosturisticos1);

    // Resultado carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da carta: %s\n", codigocarta2);
    printf("Cidade: %s\n", nomedacidade2);
    printf("Número de habitantes: %d\n", populacao2);
    printf("Área em km²: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontosturisticos2);

    return 0;
}