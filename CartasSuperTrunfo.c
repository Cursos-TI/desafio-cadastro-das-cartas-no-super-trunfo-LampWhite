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
    scanf("%s", estado);
    printf("Código: \n");
    scanf("%s", codigo);
    printf("Nome da cidade: \n");
    scanf("%s", nome);
    printf("Populaçao: \n");
    scanf("%d", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos);

    float resultado;
    resultado = (float)(populacao / area);
    float reais;
    reais = (float)(populacao / pib);

    char codigo2[20];
    char estado2[20];
    char nome2[20];
    int pontos2, populacao2;
    float area2, pib2;

    printf("Carta 2:\n");
    printf("Estado: \n");
    scanf("%s", estado2);
    printf("Código: \n");
    scanf("%s", codigo2);
    printf("Nome da cidade: \n");
    scanf("%s", nome2);
    printf("Populaçao: \n");
    scanf("%d", &populacao2);
    printf("Área: \n");
    scanf("%f", &area2);
    printf("PIB: \n");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos2);

    float resultado2;
    resultado2 = (float)(populacao2 / area2);
    float reais2;
    reais2 = (float)(pib2 / populacao2);

    
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos);
    printf("Densidade Populacional: %f hab/km²\n", resultado);
    printf("PIB per Capita: %f reais\n", reais);
    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %f hab/km²\n", resultado2);
    printf("PIB per Capita: %f reais\n", reais2);


    return 0;
}
