#include <stdio.h>
int main() {
    char estado1, estado2;
    char codigo1[10], codigo2[10], cidade1[50], cidade2[50];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;

    //Cadastro da primeira carta
    printf("*** Bem-vindo ao Super Trunfo em C ***");
    printf("Insira os dados da primeira carta. \n");
    printf("Digite o Estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o Codigo: \n");
    scanf("%s", codigo1);

    printf("Digite o Nome da cidade: \n");
    scanf(" %[^\n]", cidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área (em km2): \n");
    scanf("%f", &area1);

    printf("Digite o pib (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Digite o Número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos1);

    //cadastro da segunda carta
    printf("Insira os dados da segunda carta. \n");
    printf("Digite o Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o Codigo: \n");
    scanf("%s", codigo2);

    printf("Digite o Nome da cidade: \n");
    scanf(" %[^\n]", cidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área (em km2): \n");
    scanf("%f", &area2);

    printf("Digite o pib (em bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Digite o Número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da Densidade populacional e do pib per capta
    float densidade1, densidade2;
    float PIB_Per_Capita1, PIB_Per_Capita2;
 
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;
    PIB_Per_Capita1 = (pib1 * 1000000000) / populacao1;
    PIB_Per_Capita2 = (pib2 * 1000000000)  / populacao2;

    //impressão dos dados
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("Populacao: %d \n", populacao1);
    printf("Area: %.2f km² \n", area1);
    printf("PIB: %.2f bilhoes de reais \n", pib1);
    printf("Numero de pontos turisticos: %d \n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km2 \n", densidade1);
    printf("PIB per Capita: %.2f reais \n", PIB_Per_Capita1);

    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("Populacao: %d \n", populacao2);
    printf("Area: %.2f km² \n", area2);
    printf("PIB: %.2f bilhoes de reais \n", pib2);
    printf("Numero de pontos turisticos: %d \n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km2 \n", densidade2);
    printf("PIB per Capita: %.2f reais \n", PIB_Per_Capita2);

    return 0;
}
