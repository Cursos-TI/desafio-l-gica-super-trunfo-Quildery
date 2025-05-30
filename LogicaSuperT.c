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
    printf("=== Dados da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da carta (ex: A01): ");
    scanf("%3s", codigoCarta1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da carta 2
    printf("\n=== Dados da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da carta (ex: B01): ");
    scanf("%3s", codigoCarta2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo de densidade populacional e PIB per capita
    densidade1 = populacao1 / area1;
    pib_per_capital1 = (pib1 * 1000000000) / populacao1;
    densidade2 = populacao2 / area2;
    pib_per_capital2 = (pib2 * 1000000000) / populacao2;

    // Menu interativo para o primeiro atributo
    int opcao1;
    printf("\n=== Escolha o Primeiro Atributo ===\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Digite sua escolha (1-5): ");
    scanf("%d", &opcao1);
    while (opcao1 < 1 || opcao1 > 5) {
        printf("Opção inválida! Escolha um número entre 1 e 5: ");
        scanf("%d", &opcao1);
    }

    // Menu interativo para o segundo atributo (dinâmico)
    int opcao2;
    printf("\n=== Escolha o Segundo Atributo ===\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Digite sua escolha (diferente de %d): ", opcao1);
    scanf("%d", &opcao2);
    while (opcao2 < 1 || opcao2 > 5 || opcao2 == opcao1) {
        printf("Opção inválida ou já escolhida! Escolha um número diferente de %d: ", opcao1);
        scanf("%d", &opcao2);
    }

    // Atribuir valores e nomes dos atributos
    float valor1_atr1, valor2_atr1, valor1_atr2, valor2_atr2;
    char atributo1[50], atributo2[50];

    switch (opcao1) {
        case 1:
            sprintf(atributo1, "População");
            valor1_atr1 = populacao1;
            valor2_atr1 = populacao2;
            break;
        case 2:
            sprintf(atributo1, "Área (km²)");
            valor1_atr1 = area1;
            valor2_atr1 = area2;
            break;
        case 3:
            sprintf(atributo1, "PIB (bilhões de reais)");
            valor1_atr1 = pib1;
            valor2_atr1 = pib2;
            break;
        case 4:
            sprintf(atributo1, "Número de pontos turísticos");
            valor1_atr1 = pontosTuristicos1;
            valor2_atr1 = pontosTuristicos2;
            break;
        case 5:
            sprintf(atributo1, "Densidade demográfica (hab/km²)");
            valor1_atr1 = densidade1;
            valor2_atr1 = densidade2;
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    switch (opcao2) {
        case 1:
            sprintf(atributo2, "População");
            valor1_atr2 = populacao1;
            valor2_atr2 = populacao2;
            break;
        case 2:
            sprintf(atributo2, "Área (km²)");
            valor1_atr2 = area1;
            valor2_atr2 = area2;
            break;
        case 3:
            sprintf(atributo2, "PIB (bilhões de reais)");
            valor1_atr2 = pib1;
            valor2_atr2 = pib2;
            break;
        case 4:
            sprintf(atributo2, "Número de pontos turísticos");
            valor1_atr2 = pontosTuristicos1;
            valor2_atr2 = pontosTuristicos2;
            break;
        case 5:
            sprintf(atributo2, "Densidade demográfica (hab/km²)");
            valor1_atr2 = densidade1;
            valor2_atr2 = densidade2;
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    // Calcular somas considerando a regra de densidade demográfica
    float soma1 = (opcao1 == 5 ? -densidade1 : valor1_atr1) + (opcao2 == 5 ? -densidade1 : valor1_atr2);
    float soma2 = (opcao1 == 5 ? -densidade2 : valor2_atr1) + (opcao2 == 5 ? -densidade2 : valor2_atr2);

    // Exibir resultados
    printf("\n=== Resultado da Comparação ===\n");
    printf("Carta 1: %s\n", nomeCidade1);
    printf("Carta 2: %s\n\n", nomeCidade2);

    // Comparação do primeiro atributo com if-else aninhado
    printf("Atributo 1: %s\n", atributo1);
    printf("%s: %.2f\n", nomeCidade1, valor1_atr1);
    printf("%s: %.2f\n", nomeCidade2, valor2_atr1);
    if (opcao1 == 5) {
        if (valor1_atr1 == valor2_atr1) {
            printf("Vencedor em %s: Empate\n", atributo1);
        } else {
            if (valor1_atr1 < valor2_atr1) {
                printf("Vencedor em %s: %s\n", atributo1, nomeCidade1);
            } else {
                printf("Vencedor em %s: %s\n", atributo1, nomeCidade2);
            }
        }
    } else {
        if (valor1_atr1 == valor2_atr1) {
            printf("Vencedor em %s: Empate\n", atributo1);
        } else {
            if (valor1_atr1 > valor2_atr1) {
                printf("Vencedor em %s: %s\n", atributo1, nomeCidade1);
            } else {
                printf("Vencedor em %s: %s\n", atributo1, nomeCidade2);
            }
        }
    }

    // Comparação do segundo atributo com if-else aninhado
    printf("\nAtributo 2: %s\n", atributo2);
    printf("%s: %.2f\n", nomeCidade1, valor1_atr2);
    printf("%s: %.2f\n", nomeCidade2, valor2_atr2);
    if (opcao2 == 5) {
        if (valor1_atr2 == valor2_atr2) {
            printf("Vencedor em %s: Empate\n", atributo2);
        } else {
            if (valor1_atr2 < valor2_atr2) {
                printf("Vencedor em %s: %s\n", atributo2, nomeCidade1);
            } else {
                printf("Vencedor em %s: %s\n", atributo2, nomeCidade2);
            }
        }
    } else {
        if (valor1_atr2 == valor2_atr2) {
            printf("Vencedor em %s: Empate\n", atributo2);
        } else {
            if (valor1_atr2 > valor2_atr2) {
                printf("Vencedor em %s: %s\n", atributo2, nomeCidade1);
            } else {
                printf("Vencedor em %s: %s\n", atributo2, nomeCidade2);
            }
        }
    }

    // Soma dos atributos e vencedor da rodada com if-else aninhado
    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", nomeCidade1, soma1);
    printf("%s: %.2f\n", nomeCidade2, soma2);
    if (soma1 == soma2) {
        sprintf(Cidadevencedora, "Empate");
    } else {
        if (soma1 > soma2) {
            sprintf(Cidadevencedora, "%s", nomeCidade1);
        } else {
            sprintf(Cidadevencedora, "%s", nomeCidade2);
        }
    }
    printf("Vencedor da rodada: %s\n", Cidadevencedora);

    return 0;
}
    


