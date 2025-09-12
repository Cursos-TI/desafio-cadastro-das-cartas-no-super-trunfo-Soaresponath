#include <stdio.h>

int main() {

    char carta1[04];
    char estado1; // letra referente ao estado de A a H
    char codigo1[10]; // codigo da carta 3 caracteres
    char nomedaCidade1[50]; //nome da cidade com ate 20 caracteres
    int populacao1; // população da cidade
    float area1; // total da área da cidade em km²
    float pib1; // pib total da cidade
    int pontosTuristicos1; // número dos pontos turisticos da cidade

    
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

    return 0;


}
