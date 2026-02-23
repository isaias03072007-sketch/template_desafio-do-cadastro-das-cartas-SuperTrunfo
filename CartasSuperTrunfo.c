#include <stdio.h>
int main() {

  char codigo[10];
    char cidade[30];
    char estado;
    int habitantes;
    int pontos;
    float area, PIB;
    int numero;

    printf("Digite as Informações da sua carta:\n");

    printf("Carta (número): ");
    scanf("%d", &numero);

    printf("Digite uma letra de 'A' a 'H': ");
    scanf(" %c", &estado);

    printf("Código da Carta (Ex. A01, B03): ");
    scanf(" %s", codigo);

    printf("Nome da Cidade: ");
    scanf(" %s", cidade);
    printf("População: ");
    scanf(" %d", &habitantes);

    printf("Área (em Km2): ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &PIB);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontos);

    //----------------------------------------------------//

    char codigo1[10];
    char cidade1[30];
    char estado1;
    int habitantes1;
    int pontos1;
    float area1, PIB1;
    int numero1;

    printf("Digite as Informações da sua carta:\n");

    printf("Carta (número): ");
    scanf("%d", &numero1);

    printf("Digite uma letra de 'A' a 'H': ");
    scanf(" %c", &estado1);

    printf("Código da Carta (Ex. A01, B03): ");
    scanf(" %s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %s", cidade1); 

    printf("População: ");
    scanf(" %d", &habitantes1);

    printf("Área (em Km2): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &PIB1);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontos1);

    printf("\n");

    printf("Dados da Carta 1: \n");
    printf("Carta: %d\n", numero);
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", habitantes);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos Turisticos: %d\n", pontos); 

    printf("----------------------------------------------------------------------------------------------\n") ;

    printf("Dados da Carta 2: \n");
    printf("Carta: %d\n", numero1);
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", habitantes1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos Turisticos: %d\n", pontos1); 

return 0;
} 
