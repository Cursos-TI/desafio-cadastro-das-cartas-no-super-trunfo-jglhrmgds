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

    // Calculo do super poder

    float super_poder1, super_poder2;

    super_poder1 = (float) populacao1 + area1 + (float) pontos_turisticos1 + PIB_Per_Capita1 + (1 / densidade1);
    super_poder2 = (float) populacao2 + area2 + (float) pontos_turisticos2 + PIB_Per_Capita2 + (1 / densidade2);

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
    printf("Super Poder: %.2f \n", super_poder1);

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
    printf("Super Poder: %.2f \n", super_poder2);


   //Menu interativo
    int escolha1;
    printf("### Agora, é hora de batalhar para ver qual carta sai vitoriosa ### \n");
    printf("Atenção as regras: A carta que possuir o maior atributo sai vitoriosa! com excessão da densidade demografica, que vale a que possuir o menor valor\n");
    printf("Escolha o primeiro atributo que deverá ser avaliado no combate.\n");
    printf("1. População \n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Numero de pontos turisticos\n");
    printf("5. Densidade demografica\n");
    scanf("%d", &escolha1);

    int escolha2;

    printf("Agora, escolha o segundo atributo que deverá ser avaliado no combate.\n");
    printf("1. População \n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Numero de pontos turisticos\n");
    printf("5. Densidade demografica\n");
    scanf("%d", &escolha2);

    //Impressão dos resultados e comparação dos dados
    printf("%s vs %s \n", cidade1, cidade2);
    printf("primeiro atributo usado: ");

    //comparação do atributo 1
    int resultado1, resultado2;

    switch (escolha1)
    {
    case 1:
        printf("Populacao \n");
        printf("Carta 1: %d habitantes vs carta 2: %d habitantes \n", populacao1, populacao2);
        
        if (populacao1 > populacao2)
        {
            resultado1 = 1;
        } else{
            resultado1 = 0;
        }

        break;

    case 2:
        printf("Area \n");
        printf("Carta 1: %.2f km2 vs carta 2: %.2f km2 \n", area1, area2);
        if (area1 > area2)
        {
            resultado1 = 1;
        } else{
            resultado1 = 0;
        }
        break;

    case 3:
        printf("PIB \n");
        printf("Carta 1: %.2f Bilhoes vs carta 2: %.2f Bilhoes \n", pib1, pib2);
        if (pib1 > pib2)
        {
            resultado1 = 1;
        } else{
            resultado1 = 0;
        }
        break;

    case 4:
        printf("Pontos turisticos \n");
        printf("Carta 1: %d Bilhoes vs carta 2: %d Bilhoes \n", pontos_turisticos1, pontos_turisticos2);
        if (pontos_turisticos1 > pontos_turisticos2)
        {
            resultado1 = 1;
        } else{
            resultado1 = 0;
        }
        break;

    case 5:
        printf("Densidade demografica \n");
        printf("Carta 1: %.2f hab/km vs carta 2: %.2f hab/km \n", densidade1, densidade2);
        if (densidade1 < densidade2)
        {
            resultado1 = 1;
        } else{
            resultado1 = 0;
        }
        break;
    
    default:
        printf("Opcao invalida!");
        break;
    }

    //Comparação do atributo 2
    printf("segundo atributo usado: ");

    if (escolha1 == escolha2)
    {
        printf("Escolha atributos diferentes.");
    } else{
        switch (escolha2)
        {
        case 1:
            printf("Populacao \n");
            printf("Carta 1: %d habitantes vs carta 2: %d habitantes \n", populacao1, populacao2);
            
            if (populacao1 > populacao2)
            {
                resultado2 = 1;
            } else{
                resultado2 = 0;
            }
    
            break;
    
        case 2:
            printf("Area \n");
            printf("Carta 1: %.2f km2 vs carta 2: %.2f km2 \n", area1, area2);
            if (area1 > area2)
            {
                resultado2 = 1;
            } else{
                resultado2 = 0;
            }
            break;
    
        case 3:
            printf("PIB \n");
            printf("Carta 1: %.2f Bilhoes vs carta 2: %.2f Bilhoes \n", pib1, pib2);
            if (pib1 > pib2)
            {
                resultado2 = 1;
            } else{
                resultado2 = 0;
            }
            break;
    
        case 4:
            printf("Pontos turisticos \n");
            printf("Carta 1: %d Bilhoes vs carta 2: %d Bilhoes \n", pontos_turisticos1, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2)
            {
                resultado2 = 1;
            } else{
                resultado2 = 0;
            }
            break;
    
        case 5:
            printf("Densidade demografica \n");
            printf("Carta 1: %.2f hab/km vs carta 2: %.2f hab/km \n", densidade1, densidade2);
            if (densidade1 < densidade2)
            {
                resultado2 = 1;
            } else{
                resultado2 = 0;
            }
            break;
        
        default:
            printf("Opcao invalida!");
            break;
        }
    }
    
        if (resultado1 && resultado2 == 1)
        {
            printf("A Carta vitoriosa foi %s\n", cidade1);
        } else if (resultado1 != resultado2)
        {
            printf("Houve um empate!");
        }else{
            printf("A carta vitoriosa foi %s\n", cidade2);
        }
        
        

    return 0;
}
