#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
 // Criando as variáveis para as cartas
    unsigned long int population_1;
    int points_1;
    float area_1, pib_1, density_1, super_1;

    unsigned long int population_2;
    int pontos2;
    float area_2, pib_2, density_2, super_2;

    // Lendo os dados das cartas
    printf("Carta 1:\n");
    printf("Populacao: ");
    scanf("%ld", &population_1);
    printf("Area: ");
    scanf("%f", &area_1);
    printf("PIB: ");
    scanf("%f", &pib_1);
    printf("Pontos turisticos: ");
    scanf("%d", &points_1);

    printf("\nCarta 2:\n");
    printf("Populacao: ");
    scanf("%ld", &population_2);
    printf("Area: ");
    scanf("%f", &area_2);
    printf("PIB: ");
    scanf("%f", &pib_2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    // Calculando o valor da densidade e do super
    density_1 = population_1 / area_1;
    super_1 = population_1 + area_1 + pib_1 + points_1 + (1 / density_1);
    density_2 = population_2 / area_2;
    super_2 = population_2 + area_2 + pib_2 + pontos2 + (1 / density_2);

    // Mostrando as cartas
    printf("\n=== Dados das Cartas ===\n");
    printf("Carta 1:\n");
    printf("Populacao: %ld\n", population_1);
    printf("Area: %.2f\n", area_1);
    printf("PIB: %.2f\n", pib_1);
    printf("Pontos turisticos: %d\n", points_1);
    printf("Densidade populacional: %.2f\n", density_1);
    printf("Super poder: %.2f\n", super_1);

    printf("\nCarta 2:\n");
    printf("Populacao: %ld\n", population_2);
    printf("Area: %.2f\n", area_2);
    printf("PIB: %.2f\n", pib_2);
    printf("Pontos turisticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f\n", density_2);
    printf("Super poder: %.2f\n", super_2);

    // Mostrando o resultado da comparação
    printf("\n=== Resultado ===\n");
    printf("Populacao: %s\n", (population_1 > population_2) ? "1" : "0");
    printf("Area: %s\n", (area_1 > area_2) ? "1" : "0");
    printf("PIB: %s\n", (pib_1 > pib_2) ? "1" : "0");
    printf("Pontos turisticos: %s\n", (points_1 > pontos2) ? "1" : "0");
    printf("Densidade populacional: %s\n", (density_1 < density_2) ? "1" : "0");
    printf("Super poder: %s\n", (super_1 > super_2) ? "1" : "0");

    return 0;
}
