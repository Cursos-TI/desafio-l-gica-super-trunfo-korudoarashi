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
    int points_2;
    float area_2, pib_2, density_2, super_2;

    int option_1, option_2;
    int score = 0;

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
    scanf("%d", &points_2);

    // Calculando o valor da densidade e do super
    density_1 = population_1 / area_1;
    super_1 = population_1 + area_1 + pib_1 + points_1 + (1.0 / density_1);
    density_2 = population_2 / area_2;
    super_2 = population_2 + area_2 + pib_2 + points_2 + (1.0 / density_2);

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
    printf("Pontos turisticos: %d\n", points_2);
    printf("Densidade populacional: %.2f\n", density_2);
    printf("Super poder: %.2f\n", super_2);

    // Mostrando o resultado da comparação
    printf("\n=== Menu de comparações ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - Super poder\n");

    printf("\nEscolha a primeira comparação: ");
    scanf("%d", &option_1);
    if(option_1 < 1 || option_1 > 6) {
        printf("Escolha não listada, encerrando programa");
        return 0;
    }

    printf("\nEscolha a segunda comparação: ");
    scanf("%d", &option_2);
    if(option_2 < 1 || option_2 > 6) {
        printf("Escolha não listada, encerrando programa");
        return 0;
    }

    if (option_2 == option_1) {
        printf("A mesma opção foi selecionada 2 vezes, encerrando programa.");
        return 0;
    }

    // Se a primeira carta vence, adiciona +1 ao score, do contrário -1
    // Se o score for positivo, a primeira carta vence
    // Se o score for negativo, a segunda carta vence
    // Se o score for 0, o resultado é empate

    switch(option_1) {
        case 1:
            if(population_1 == population_2)
                break;

            score += population_1 > population_2 ? 1 : -1;
            break;
        case 2:
            if(area_1 == area_2)
                break;

            score += area_1 > area_2 ? 1 : -1;
            break;
        case 3:
            if(pib_1 == pib_2)
                break;

            score += pib_1 > pib_2 ? 1 : -1;
            break;
        case 4:
            if(points_1 == points_2)
                break;

            score += points_1 > points_2 ? 1 : -1;
            break;
        case 5:
            if(density_1 == density_2)
                break;

            score += density_1 > density_2 ? 1 : -1;
            break;
        case 6:
            if(super_1 == super_2)
                break;

            score += super_1 > super_2 ? 1 : -1;
            break;
    }

    switch(option_2) {
        case 1:
            if(population_1 == population_2)
                break;

            score += population_1 > population_2 ? 1 : -1;
            break;
        case 2:
            if(area_1 == area_2)
                break;

            score += area_1 > area_2 ? 1 : -1;
            break;
        case 3:
            if(pib_1 == pib_2)
                break;

            score += pib_1 > pib_2 ? 1 : -1;
            break;
        case 4:
            if(points_1 == points_2)
                break;

            score += points_1 > points_2 ? 1 : -1;
            break;
        case 5:
            if(density_1 == density_2)
                break;

            score += density_1 > density_2 ? 1 : -1;
            break;
        case 6:
            if(super_1 == super_2)
                break;

            score += super_1 > super_2 ? 1 : -1;
            break;
    }

    if(score == 0) {
        printf("Ocorreu um empate!");
    } else if(score > 0) {
        printf("A primeira carta venceu!");
    } else if(score < 0) {
        printf("A segunda carta venceu!");
    }

    return 0;
}
