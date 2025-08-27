#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Suellen
struct Carta {

    char estado;
    char codigo[3];
    char nomeCidade[10];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    };
int main() {
    struct Carta carta1, carta2;
    // Cadastro do Conjunto  A - Carta 1

    printf("---- Desafio Carta Trunfo ---\n");
    printf("Novo Comit\n");
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade); // lê até o Enter

    printf("Digite a Populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a Area em km²: ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB em bilhoes: ");
    scanf("%f", &carta1.pib);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Exibindo o cadastradas do Conjunto A Carta 1 
    printf("\n===== Carta 1 =====\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.nomeCidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontosTuristicos);

     //Cadastro do Conjunto  B - Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("Digite a Populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a Area em km²: ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB em bilhoes: ");
    scanf("%f", &carta2.pib);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Exibindo o cadastradas do Conjunto B Carta 2 
    
    printf("\n===== Carta 2 =====\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.nomeCidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontosTuristicos);

    return 0;
}


