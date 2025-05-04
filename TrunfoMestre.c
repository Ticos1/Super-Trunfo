#include <stdio.h>
#include <stdlib.h>

int main() {

    // Carta 1
    char estado1;
    char codigocarta1[10];
    char nomedacidade1[50];
    int populacao1;
    float area1;
    float pib1; // PIB em bilhões
    int pontosturisticos1;

    // Carta 2
    char estado2;
    char codigocarta2[10];
    char nomedacidade2[50];
    int populacao2;
    float area2;
    float pib2; // PIB em bilhões
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

    printf("Digite o PIB da cidade (em bilhões): \n");
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

    printf("Digite o PIB da cidade (em bilhões): \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontosturisticos2);

    // Calcular densidade populacional
    float densidade1 = (float)populacao1 / area1; 
    float densidade2 = (float)populacao2 / area2; 

    // Calcular PIB per capita (ajustando PIB para bilhões)
    float pibPerCapita1 = (pib1 * 1000000000) / (float)populacao1; 
    float pibPerCapita2 = (pib2 * 1000000000) / (float)populacao2; 

    // Calcular Super Poder
    float superPoder1 = populacao1 + area1 + (pib1 * 1000000000) + pontosturisticos1 + pibPerCapita1 + (1 / densidade1);
    float superPoder2 = populacao2 + area2 + (pib2 * 1000000000) + pontosturisticos2 + pibPerCapita2 + (1 / densidade2);

    // Comparar atributos
    printf("\nComparação de atributos:\n");

    // População
    printf("População: %s\n", (populacao1 > populacao2) ? "Carta 1 vence" : (populacao2 > populacao1) ? "Carta 2 vence" : "Empate");

    // Área
    printf("Área: %s\n", (area1 > area2) ? "Carta 1 vence" : (area2 > area1) ? "Carta 2 vence" : "Empate");

    // PIB
    printf("PIB: %s\n", (pib1 > pib2) ? "Carta 1 vence" : (pib2 > pib1) ? "Carta 2 vence" : "Empate");

    // Pontos turísticos
    printf("Pontos turísticos: %s\n", (pontosturisticos1 > pontosturisticos2) ? "Carta 1 vence" : (pontosturisticos2 > pontosturisticos1) ? "Carta 2 vence" : "Empate");

    // Densidade populacional
    printf("Densidade populacional: %s\n", (densidade1 < densidade2) ? "Carta 1 vence" : (densidade2 < densidade1) ? "Carta 2 vence" : "Empate");

    // PIB per capita
    printf("PIB per capita: %s\n", (pibPerCapita1 > pibPerCapita2) ? "Carta 1 vence" : (pibPerCapita2 > pibPerCapita1) ? "Carta 2 vence" : "Empate");

    // Super Poder
    printf("Super Poder: %s\n", (superPoder1 > superPoder2) ? "Carta 1 vence" : (superPoder2 > superPoder1) ? "Carta 2 vence" : "Empate");

    return 0;
}