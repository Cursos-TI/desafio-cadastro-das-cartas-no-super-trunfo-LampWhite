#include <stdio.h>

int main() {
    printf("Cartas Super Trunfo\n");
    printf("\n");
}

int main() {
    char codigo[50], estado[50], nome[50];
    int pontos, populacao;
    float area, pib;

    char codigo2[50], estado2[50], nome2[50];
    int pontos2, populacao2;
    float area2, pib2;
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    printf("Carta 1:\n");
    printf("Estado: \n");
    scanf("%s", &estado);
    printf("Código: \n");
    scanf("%s", &codigo);
    printf("Nome da cidade: \n");
    scanf("%s", &nome);
    printf("Populaçao: \n");
    scanf("&d", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos);
    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: \n");
    scanf("%s", &estado2);
    printf("Código: \n");
    scanf("%s", &codigo2);
    printf("Nome da cidade: \n");
    scanf("%s", &nome2);
    printf("Populaçao: \n");
    scanf("&d", &populacao2);
    printf("Área: \n");
    scanf("%f", &area2);
    printf("PIB: \n");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos2);
    printf ("\n");
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Carta 1:");
    printf("Estado: %c\n", estado);
    printf("Código: %c\n", codigo);
    printf("Nome da Cidade: %c\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Tusrísticos: %d\n", pontos);
    printf("\n");

    printf("Carta 2:");
    printf("Estado: %c\n", estado2);
    printf("Código: %c\n", codigo2);
    printf("Nome da Cidade: %c\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Tusrísticos: %d\n", pontos2);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
