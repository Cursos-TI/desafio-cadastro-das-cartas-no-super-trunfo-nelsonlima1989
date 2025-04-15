#include <stdio.h>

int main(){

    //carta1
    char estado1;
    char codigo1[5];
    char nome_cidade1[40];
    int populacao1;
    float area1;
    float pib1;
    int pontos_tur1;
    float desnspop1;
    float pibpc1;
    //carta2
    char estado2;
    char codigo2[5];
    char nome_cidade2[40];
    int populacao2;
    float area2;
    float pib2;
    int pontos_tur2;
    float desnspop2;
    float pibpc2;


    printf("Bem vindo ao super-trunfo!!\n Preencha a seguir os dados da carta 1!! \n");
    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Codigo: ");
    scanf("%s", &codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", &nome_cidade1); // " %[^\n]" Lê string com espaço até enter

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_tur1);

    printf("\n\nAgora vamos preencher os dados da seugunda carata!!\n\n\n");
    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%s", &codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", &nome_cidade2); // " %[^\n]" Lê string com espaço até enter

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_tur2);

    desnspop1 = (populacao1/area1);
    pibpc1 = (pib1/populacao1);
    desnspop2 = (populacao2/area2);
    pibpc2 = (pib2/populacao2);

    //carta1
    printf("\n\nCarta 1: \n Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2fkm\u00B2\n", area1); //\u00B2\n mostra km²
    printf("PIB: %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontos_tur1);
    printf("Densidade populacional: %.2f\n", desnspop1);
    printf("PIB per capta: %.2f\n\n\n", pibpc1);
    

 //carta2
    printf("\nCarta 2: \n Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2fkm\u00B2\n", area2); //\u00B2\n mostra km²
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontos_tur2);
    printf("Densidade populacional: %.2f\n", desnspop2);
    printf("PIB per capta: %.2f\n", pibpc2);

    return 0;

}