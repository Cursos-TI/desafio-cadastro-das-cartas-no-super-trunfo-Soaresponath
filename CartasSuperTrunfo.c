#include <stdio.h>

int main() {

    //Declaração de variáveis carta 1
    char carta1[04]; 
    char estado1;                   // letra referente ao estado de A a H
    char codigo1[10];               // codigo da carta 3 caracteres
    char nomedacidade1[50];         //nome da cidade com ate 20 caracteres
    int populacao1;                 // população da cidade
    float area1;                    // total da área da cidade em km²
    float pib1;                     // pib total da cidade
    int pontosturisticos1;          // número dos pontos turisticos da cidade
    float densidadepopulacional1;  // quantas pessoas vivem por quilômetro quadrado
    float pibpercapita1;            //valor médio agregado por pessoa 
                                    
    //Especificadores da carta 1

    printf("Carta 1:");
    scanf("%c",carta1);
   
    printf("Estado: ");
    scanf("%c",&estado1);
    
    printf("Código: ");
    scanf("%s",&codigo1);

    printf("Nome da cidade: ");
    scanf("%s", nomedacidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    //calculo da densidade demografica e PIB per capita
    densidadepopulacional1 = populacao1 / area1;
    pibpercapita1 = (pib1 / populacao1);


    //Declaração de variáveis carta 2
    char carta2[04];
    char estado2;                      // letra referente ao estado de A a H
    char codigo2[10];                  // codigo da carta 3 caracteres
    char nomedacidade2[50];            //nome da cidade com ate 20 caracteres
    int populacao2;                    // população da cidade
    float area2;                       // total da área da cidade em km²
    float pib2;                        // pib total da cidade
    int pontosturisticos2;             // número dos pontos turisticos da cidade
    float densidadepopulacional2;     // quantas pessoas vivem por quilômetro quadrado
    float pibpercapita2;               //valor médio agregado por pessoa 

    //Especificadores da carta 2

    printf("Carta 2:");
    scanf("%c",carta2);
   
    printf("Estado: ");
    scanf("%c",&estado2);
    
    printf("Código: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", &nomedacidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    //calculo da densidade demografica e PIB per capita

    densidadepopulacional2 = (populacao1 / area2);
    pibpercapita1 = pib2 / populacao2;

    //informações da carta 1

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", nomedacidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Pontos turísticos: %d \n", pontosturisticos1);
    printf("Densidade populacional: %.2f hab/km² \n", densidadepopulacional1);
    printf("PIB per capita: %.2f reais \n", pibpercapita1);

    //informações da carta 2

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nomedacidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Pontos turísticos: %d \n", pontosturisticos2);
    printf("Densidade populacional: %.2f hab/km² \n", densidadepopulacional2);
    printf("PIB per capita: %.2f reais \n", pibpercapita2);


    return 0;


}
