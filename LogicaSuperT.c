#include <stdio.h>
int main (){

    // Carta 1
    char estado1;
    char codigoCarta1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pib_per_capital1;
    char Cidadevencedora[50];
    
    // Carta 2 
    char estado2;
    char codigoCarta2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pib_per_capital2;

    // Entrada de dados da carta 1 
    printf("Dados da carta 1: \n");
    printf("Estado (A-H):");
    scanf(" %c", &estado1);

    printf("Código da carta (ex: A01):");
    scanf(" %s", codigoCarta1);

    printf("Nome da Cidade:");
    scanf(" %[^\n]s", nomeCidade1);

    printf("População:");
    scanf(" %d", &populacao1);

    printf("Área (km²):");
    scanf(" %f", &area1);

    printf("PIB (em bilhões de reais):");
    scanf(" %f", &pib1);

    printf("Número de Pontos Turísticos:");
    scanf(" %d", &pontosTuristicos1);

    // Entrada de dados da carta 2
    printf("Dados da carta 2: \n");
    printf("Estado (A-H):");
    scanf(" %c", &estado2);

    printf("Código da carta (ex: B01):");
    scanf(" %s", codigoCarta2);

    printf("Nome da Cidade:");
    scanf(" %[^\n]s", nomeCidade2);

    printf("População:");
    scanf(" %d", &populacao2);

    printf("Área (km²):");
    scanf(" %f", &area2);

    printf("PIB (em bilhões de reais):");
    scanf(" %f", &pib2);

    printf("Número de Pontos Turísticos:");
    scanf(" %d", &pontosTuristicos2);

    // Cálculo de densidade populacional e Pib per capital
    densidade1 = populacao1 / area1;
    pib_per_capital1 = (pib1 * 1000000000) / populacao1;
    densidade2 = populacao2 / area2;
    pib_per_capital2 = (pib2 * 1000000000) / populacao2;
    
     // Comparação e exibição do vencedor
    printf("\nResultado:\n");
    if (populacao1 > populacao2) {
        printf("Cidade 1 (%s) tem maior população que Cidade 2 (%s).\n", nomeCidade1, nomeCidade2);
        printf("A cidade vencedora é %s\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Cidade 2 (%s) tem maior população que Cidade 1 (%s).\n", nomeCidade2, nomeCidade1);
        printf("A cidade vencedora é %s\n", nomeCidade2);
    } else {
        printf("As cidades %s e %s têm a mesma população.\n", nomeCidade1, nomeCidade2);
        printf("A cidade vencedora é Nenhuma (empate)\n");
    }
    
     return 0;
}
    


