#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// Estrutura da Carta
struct Carta {
    char pais;
    char codigo[4];
    char nomeCidade[20];
    unsigned long int populacao;
    float area;
    float pib; // em bilhões
    int pontosTuristicos;
};

int main() {
    struct Carta carta1, carta2;
    float densidade1, pibPerCapita1, superPoder1;
    float densidade2, pibPerCapita2, superPoder2;
    int opcao;

    printf("****** Desafio SUPER TRUNFO ********\n");

    // Cadastro Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o Pais: ");
    scanf(" %c", &carta1.pais);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", &carta1.codigo);

    printf("Digite o Nome da Cidade:  ");
    scanf("%[^\n]", &carta1.nomeCidade);

    printf("Digite a Populacao:  ");
    scanf("%lu", &carta1.populacao);

    printf("Digite a Area em km²:  ");
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
    printf("Pais: %c\n", carta1.pais);
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
    printf("Digite o seu Pais: ");
    scanf(" %c", &carta2.pais);

    printf("Digite o Codigo da Carta (ex: B02):");
    scanf("%s", &carta2.codigo);

    printf("Digite o Nome da Cidade:");
    scanf(" %[^\n]", &carta2.nomeCidade);

    printf("Digite a Populacao:");
    scanf("%lu", &carta2.populacao);

    printf("Digite a Area em km²:");
    scanf("%f", &carta2.area);

    printf("Digite o PIB em bilhoes:");
    scanf("%f", &carta2.pib);

    printf("Digite o Numero de Pontos Turisticos:");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculos Carta 2
    densidade2 = (float)carta2.populacao / carta2.area;
    pibPerCapita2 = (carta2.pib * 1000000000.0f) / carta2.populacao;
    superPoder2 = (float)carta2.populacao + carta2.area + carta2.pib +
                  carta2.pontosTuristicos + pibPerCapita2 +
                  (1.0f / densidade2);

    // Exibindo Carta 2
    printf("\n===== Carta 2 =====\n");
    printf("Pais: %c\n", carta2.pais);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.nomeCidade);
    printf("Populacao: %lu\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Menu Interativo
    printf("\n===== MENU DE COMPARACAO =====\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);

    printf("\n===== Resultado =====\n");

    switch(opcao) {
    case 1: // População
      printf("Comparando População: %s (%lu) x %s (%lu)\n",
      carta1.nomeCidade, carta1.populacao,
      carta2.nomeCidade, carta2.populacao);
    if(carta1.populacao > carta2.populacao)
       printf("Vencedor: CARTA 1 %s\n", carta1.nomeCidade);
    else if(carta2.populacao > carta1.populacao)
        printf("Vencedor: CARTA 2 %s\n", carta2.nomeCidade);
    else
        printf("Empate!\n");
    break;

    case 2: // Área
        printf("Comparando Área: %s (%.2f) x %s (%.2f)\n",
        carta1.nomeCidade, carta1.area,
        carta2.nomeCidade, carta2.area);
    if(carta1.area > carta2.area)
        printf("Vencedor: CARTA 1 %s\n", carta1.nomeCidade);
    else if(carta2.area > carta1.area)
        printf("Vencedor: CARTA 2 %s\n", carta2.nomeCidade);
    else
        printf("Empate!\n");
    break;

    case 3: // PIB
        printf("Comparando PIB: %s (%.2f) x %s (%.2f)\n",
        carta1.nomeCidade, carta1.pib,
        carta2.nomeCidade, carta2.pib);
    if(carta1.pib > carta2.pib)
        printf("Vencedor:CARTA 1 %s\n", carta1.nomeCidade);
    else if(carta2.pib > carta1.pib)
        printf("Vencedor:CARTA 2 %s\n", carta2.nomeCidade);
    else
        printf("Empate!\n");
    break;

    case 4: // Pontos turísticos
        printf("Comparando Pontos Turísticos: %s (%d) x %s (%d)\n",
            carta1.nomeCidade, carta1.pontosTuristicos,
            carta2.nomeCidade, carta2.pontosTuristicos);
    if(carta1.pontosTuristicos > carta2.pontosTuristicos)
        printf("Vencedor:CARTA 1 %s\n", carta1.nomeCidade);
    else if(carta2.pontosTuristicos > carta1.pontosTuristicos)
        printf("Vencedor:CARTA 2 %s\n", carta2.nomeCidade);
    else
        printf("Empate!\n");
    break;

    case 5: // Densidade (regra invertida)
            printf("Comparando Densidade: %s (%.2f) x %s (%.2f)\n",
            carta1.nomeCidade, densidade1,
            carta2.nomeCidade, densidade2);
    if(densidade1 < densidade2)
            printf("Vencedor:CARTA 1 %s\n", carta1.nomeCidade);
    else if(densidade2 < densidade1)
            printf("Vencedor:CARTA 2 %s\n", carta2.nomeCidade);
    else
            printf("Empate!\n");
    break;

    case 6: // PIB per Capita
            printf("Comparando PIB per Capita: %s (%.2f) x %s (%.2f)\n",
            carta1.nomeCidade, pibPerCapita1,
            carta2.nomeCidade, pibPerCapita2);
    if(pibPerCapita1 > pibPerCapita2)
            printf("Vencedor: CARTA 1 %s\n", carta1.nomeCidade);
    else if(pibPerCapita2 > pibPerCapita1)
            printf("Vencedor:CARTA 2 %s\n", carta2.nomeCidade);
    else
            printf("Empate!\n");
    break;

    case 7: // Super Poder
            printf("Comparando Super Poder: %s (%.2f) x %s (%.2f)\n",
            carta1.nomeCidade, superPoder1,
            carta2.nomeCidade, superPoder2);
    if(superPoder1 > superPoder2)
            printf("Vencedor: CARTA 1 %s\n", carta1.nomeCidade);
    else if(superPoder2 > superPoder1)
            printf("Vencedor:CARTA 2 %s\n", carta2.nomeCidade);
    else
            printf("Empate!\n");
    break;

    default:
            printf("Opção inválida! Escolha entre 1 e 7.\n");
    break;
    }

    return 0;
}

