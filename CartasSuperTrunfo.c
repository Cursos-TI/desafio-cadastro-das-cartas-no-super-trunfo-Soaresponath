#include <stdio.h>

int main() {

    //Declaração de variáveis carta 1
    char estado1;                   // letra referente ao estado de A a H
    char codigo1[20];               // codigo da carta 3 caracteres
    char cidade1[50];               //nome da cidade com ate 20 caracteres
    unsigned long int populacao1;   // população da cidade
    float area1;                    // total da área da cidade em km²
    float pib1;                     // pib total da cidade
    int pontosturisticos1;          // número dos pontos turisticos da cidade
    float densidadepopulacional1;   // quantas pessoas vivem por quilômetro quadrado
    float pibPerCapita1;            //valor médio agregado por pessoa 
    float superPoder1;             
                                    
    //Especificadores da carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Informe o Estado (A-H): ");
    scanf("%c", &estado1);

    printf("Informe o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("Informe a Populacao: ");
    scanf("%lu", &populacao1);

    printf("Informe a Area (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

     printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosturisticos1);

    //calculo da densidade demografica e PIB per capita
    densidadepopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosturisticos1 + pibPerCapita1 + (1.0 / densidadepopulacional1);

    //Declaração de variáveis carta 2
    char estado2;                      // letra referente ao estado de A a H
    char codigo2[10];                  // codigo da carta 3 caracteres
    char cidade2[50];                  //nome da cidade com ate 20 caracteres
    unsigned long int populacao2;      // população da cidade
    float area2;                       // total da área da cidade em km²
    float pib2;                        // pib total da cidade
    int pontosturisticos2;             // número dos pontos turisticos da cidade
    float densidadepopulacional2;      // quantas pessoas vivem por quilômetro quadrado
    float pibpercapita2;               //valor médio agregado por pessoa 
    float superPoder2;

    //Especificadores da carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Informe o Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    
    printf("Informe a Populacao: ");
    scanf("%lu", &populacao2);

    printf("Informe a Area (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosturisticos2);

    //calculo da densidade demografica e PIB per capita

    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000.0) / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1.0 / densidadepopulacional2);

    printf("\n===== Comparacao de Cartas =====\n");

    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosturisticos1 > pontosturisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadepopulacional1 < densidadepopulacional2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibpercapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);



    return 0;


}
