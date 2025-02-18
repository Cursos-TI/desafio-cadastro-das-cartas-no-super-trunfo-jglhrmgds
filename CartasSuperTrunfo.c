#include <stdio.h>
int main() {
    char estado1, estado2;
    char codigo1[10], codigo2[10], cidade1[50], cidade2[50];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;

    //Cadastro da primeira carta
    printf("Insira os dados da primeira carta. \n");
    printf("Digite o Estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o Codigo: \n");
    scanf("%s", codigo1);

    printf("Digite o Nome da cidade: \n");
    scanf(" %[^\n]", cidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o pib: \n");
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

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o pib: \n");
    scanf("%f", &pib2);

    printf("Digite o Número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    //impressão dos dados
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("Populacao: %d \n", populacao1);
    printf("Area: %f km² \n", area1);
    printf("PIB: %f bilhoes de reais \n", pib1);
    printf("Numero de pontos turisticos: %d \n", pontos_turisticos1);

    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("Populacao: %d \n", populacao2);
    printf("Area: %f km² \n", area2);
    printf("PIB: %f bilhoes de reais \n", pib2);
    printf("Numero de pontos turisticos: %d \n", pontos_turisticos2);

    return 0;
}
