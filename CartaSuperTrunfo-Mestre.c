#include <stdio.h>

// Desafio SUPER TRUNFO - Nível MESTE
struct Carta {
    char estado;
    char codigo[4];
    char nomeCidade[20];
    unsigned long int populacao;  // atualizado para unsigned long int
    float area;
    float pib; // em bilhões
    int pontosTuristicos;
};

int main() {
    struct Carta carta1, carta2;
    float densidade1, pibPerCapita1, superPoder1;
    float densidade2, pibPerCapita2, superPoder2;

    printf("****** Desafio SUPER TRUNFO ********\n");

    // Cadastro Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("Digite a Populacao: ");
    scanf("%lu", &carta1.populacao);

    printf("Digite a Area em km²: ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB em bilhoes: ");
    scanf("%f", &carta1.pib);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cálculos Carta 1
    densidade1 = (float)carta1.populacao / carta1.area;
    pibPerCapita1 = (carta1.pib * 1000000000.0f) / carta1.populacao;
    superPoder1 = (float)carta1.populacao + carta1.area + carta1.pib +
                  carta1.pontosTuristicos + pibPerCapita1 +
                  (1.0f / densidade1);

    // Exibindo Carta 1
    printf("\n===== Carta 1 =====\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.nomeCidade);
    printf("Populacao: %lu\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Cadastro Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("Digite a Populacao: ");
    scanf("%lu", &carta2.populacao);

    printf("Digite a Area em km²: ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB em bilhoes: ");
    scanf("%f", &carta2.pib);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculos Carta 2
    densidade2 = (float)carta2.populacao / carta2.area;
    pibPerCapita2 = (carta2.pib * 1000000000.0f) / carta2.populacao;
    superPoder2 = (float)carta2.populacao + carta2.area + carta2.pib +
                  carta2.pontosTuristicos + pibPerCapita2 +
                  (1.0f / densidade2);

    // Exibindo Carta 2
    printf("\n===== Carta 2 =====\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.nomeCidade);
    printf("Populacao: %lu\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações
    printf("\n===== Comparacao de Cartas =====\n");
    printf("Populacao: Carta 1 venceu (%d)\n", carta1.populacao > carta2.populacao);
    printf("Area: Carta 1 venceu (%d)\n", carta1.area > carta2.area);
    printf("PIB: Carta 1 venceu (%d)\n", carta1.pib > carta2.pib);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", carta1.pontosTuristicos > carta2.pontosTuristicos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
