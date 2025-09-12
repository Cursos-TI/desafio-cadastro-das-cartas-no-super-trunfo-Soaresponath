#include <stdio.h>

int main() {

    //Declaração de variáveis carta 1

    char carta1[04];
    char estado1; // letra referente ao estado de A a H
    char codigo1[10]; // codigo da carta 3 caracteres
    char nomedaCidade1[50]; //nome da cidade com ate 20 caracteres
    int populacao1; // população da cidade
    float area1; // total da área da cidade em km²
    float pib1; // pib total da cidade
    int pontosTuristicos1; // número dos pontos turisticos da cidade

    //Especificadores da carta 1

    printf("Carta 1:");
    scanf("%c",carta1);
   
    printf("Estado: ");
    scanf("%c",&estado1);
    
    printf("Código: ");
    scanf("%s",&codigo1);

    printf("Nome da cidade: ");
    scanf("%s", &nomedaCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);


    //Declaração de variáveis carta 2

    char carta2[04];
    char estado2; // letra referente ao estado de A a H
    char codigo2[10]; // codigo da carta 3 caracteres
    char nomedaCidade2[50]; //nome da cidade com ate 20 caracteres
    int populacao2; // população da cidade
    float area2; // total da área da cidade em km²
    float pib2; // pib total da cidade
    int pontosTuristicos2; // número dos pontos turisticos da cidade

    //Especificadores da carta 2

    printf("Carta 2:");
    scanf("%c",carta2);
   
    printf("Estado: ");
    scanf("%c",&estado2);
    
    printf("Código: ");
    scanf("%s",&codigo2);

    printf("Nome da cidade: ");
    scanf("%s", &nomedaCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);






    return 0;


}
