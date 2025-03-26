#include <stdio.h>

int main() {
    printf("Cartas Super Trunfo\n");
    printf("\n");

    char codigo[20]; 
    char estado[20];
    char nome[20];
    int pontos, populacao;
    float area, pib;
    
    printf("Carta 1:\n");
    printf("Estado: \n");
    scanf("%s", &estado);
    printf("Código: \n");
    scanf("%s", &codigo);
    printf("Nome da cidade: \n");
    scanf("%s", &nome);
    printf("Populaçao: \n");
    scanf("%d", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos);

    char codigo2[20];
    char estado2[20];
    char nome2[20];
    int pontos2, populacao2;
    float area2, pib2;

    printf("Carta 2:\n");
    printf("Estado: \n");
    scanf("%s", &estado2);
    printf("Código: \n");
    scanf("%s", &codigo2);
    printf("Nome da cidade: \n");
    scanf("%s", &nome2);
    printf("Populaçao: \n");
    scanf("%d", &populacao2);
    printf("Área: \n");
    scanf("%f", &area2);
    printf("PIB: \n");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos2);

    
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos);
    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);


    return 0;
}
