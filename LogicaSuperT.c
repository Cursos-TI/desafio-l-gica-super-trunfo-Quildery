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
    float Cidadevencedora[50];
    
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

    // Cálculo de densidade populacional e pob_per_capital

    

    if (populacao1 > populacao2) {
        printf("Cidade 1 tem maior Pupolação que Cidade 2. \n");
    } else {
        printf("Cidade 2 tem maior População. \n");
    }
    
     printf("A Cidade vencedora é %s \n",Cidadevencedora);
     
     return 0;
}

    


