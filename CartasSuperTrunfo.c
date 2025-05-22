#include <stdio.h>

int main() {
    printf("Desafio Cartas Super Trunfo: \n\n");

    //Dados Carta 1 - (Pernambuco)
    char estado1 = 'A';
    char codigo1[4] ="A01";
    char cidade1[50] = "Recife";  
    int populacao1 = 1488920;
    float area1 = 218.843;
    float pib1 = 48.58;
    int pontosTuristicos1 = 30;

    //Dados Carta 2 - (Alagoas)
    char estado2 = 'B';
    char codigo2[4] = "B02";
    char cidade2[50] = "Maceio";
    int populacao2 = 1029129;
    float area2 = 509.32;
    float pib2 = 21.70;
    int pontosTuristicos2 = 25;

    //Entrada Carta 1
    printf("Digite os dados da Carta 1 (Pernambuco):\n\n");

    printf("Digite o Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01, B02): ");
    scanf("%s", codigo1);

    printf("Digite a cidade: ");
    scanf("%s", cidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area (em km²): ");
    scanf("%f", &area1);

    printf("Digite o pib: ");
    scanf("%f", &pib1);

    printf("Digite os Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    //Entrada Carta 2
    printf("\nDigite os dados da Carta 2 (Maceió): \n\n");

    printf("Digite o Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: A01, B03): ");
    scanf("%s", codigo2);

    printf("Digite a cidade: ");
    scanf("%s", cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area (em km²): ");
    scanf("%f", &area2);

    printf("Digite o pib: ");
    scanf("%f", &pib2);

    printf("Digite os Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    //Saída de dados Carta 1
    printf("\nCarta 1:\n\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    //Saída de dados Carta 2
    printf("\nCarta 2:\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
