#include <stdio.h>

int main() {
    // Carta 1
    char estado1, codigo1[5], nome1[40];
    unsigned long int pop1;
    double pib1, super1;
    int pontos1;
    float area1, dens1, pibpc1;

    // Carta 2
    char estado2, codigo2[5], nome2[40];
    unsigned long int pop2;
    double pib2, super2;
    int pontos2;
    float area2, dens2, pibpc2;

    // Entrada da Carta 1
    printf("Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Nome: ");
    scanf(" %[^\n]", nome1);
    printf("População: ");
    scanf("%lu", &pop1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%lf", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos1);

    // Cálculos da Carta 1
    dens1 = pop1 / area1;
    pibpc1 = pib1 / pop1;
    super1 = pop1 + area1 + pib1 + pontos1 + dens1 + pibpc1;

    // Entrada da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Nome: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%lu", &pop2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%lf", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos da Carta 2
    dens2 = pop2 / area2;
    pibpc2 = pib2 / pop2;
    super2 = pop2 + area2 + pib2 + pontos2 + dens2 + pibpc2;

    // Exibir Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %lu\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f hab/km²\n", dens1);
    printf("PIB per capita: R$ %.2f\n", pibpc1);
    printf("Super Poder: %.2f\n", super1);

    // Exibir Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %lu\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f hab/km²\n", dens2);
    printf("PIB per capita: R$ %.2f\n", pibpc2);
    printf("Super Poder: %.2f\n", super2);
   
    // Comparação geral dos atributos
    printf("\nComparação completa de atributos:\n");

    (pop1 > pop2) && printf("População: Carta 1 vence\n");
    (pop2 > pop1) && printf("População: Carta 2 vence\n");
    (pop1 == pop2) && printf("População: Empate\n");

    (area1 > area2) && printf("Área: Carta 1 vence\n");
    (area2 > area1) && printf("Área: Carta 2 vence\n");
    (area1 == area2) && printf("Área: Empate\n");

    (pib1 > pib2) && printf("PIB: Carta 1 vence\n");
    (pib2 > pib1) && printf("PIB: Carta 2 vence\n");
    (pib1 == pib2) && printf("PIB: Empate\n");

    (pontos1 > pontos2) && printf("Pontos turísticos: Carta 1 vence\n");
    (pontos2 > pontos1) && printf("Pontos turísticos: Carta 2 vence\n");
    (pontos1 == pontos2) && printf("Pontos turísticos: Empate\n");

    (dens1 < dens2) && printf("Densidade populacional: Carta 1 vence\n");
    (dens2 < dens1) && printf("Densidade populacional: Carta 2 vence\n");
    (dens1 == dens2) && printf("Densidade populacional: Empate\n");

    (pibpc1 > pibpc2) && printf("PIB per capita: Carta 1 vence\n");
    (pibpc2 > pibpc1) && printf("PIB per capita: Carta 2 vence\n");
    (pibpc1 == pibpc2) && printf("PIB per capita: Empate\n");

    (super1 > super2) && printf("Super Poder: Carta 1 vence\n");
    (super2 > super1) && printf("Super Poder: Carta 2 vence\n");
    (super1 == super2) && printf("Super Poder: Empate\n");

    // Escolha de critério
    int escolha;
    printf("\nEscolha o critério de comparação:\n");
    printf("1 - Densidade populacional (menor vence)\n");
    printf("2 - PIB per capita\n");
    printf("3 - Pontos turísticos\n");
    printf("4 - Super Poder\n");
    printf("Opção: ");
    scanf("%d", &escolha);

    // Mostrar critério escolhido
    printf("\nResultado da comparação: ");
    (escolha == 1) && printf("(Critério: Densidade populacional)\n");
    (escolha == 2) && printf("(Critério: PIB per capita)\n");
    (escolha == 3) && printf("(Critério: Pontos turísticos)\n");
    (escolha == 4) && printf("(Critério: Super Poder)\n");
    ((escolha < 1 || escolha > 4)) && printf("(Critério inválido)\n");

    // Lógica de comparação
    float v1 = (escolha==1)*dens1 + (escolha==2)*pibpc1 + (escolha==3)*pontos1 + (escolha==4)*super1;
    float v2 = (escolha==1)*dens2 + (escolha==2)*pibpc2 + (escolha==3)*pontos2 + (escolha==4)*super2;

    int r1 = (escolha==1)*(v1<v2) + (escolha!=1)*(v1>v2);
    int r2 = (escolha==1)*(v2<v1) + (escolha!=1)*(v2>v1);
    int empate = (v1==v2);
    int invalido = (escolha<1 || escolha>4);

    r1 && printf("Carta 1 vence\n");
    r2 && printf("Carta 2 vence\n");
    empate && printf("Empate\n");
    invalido && printf("Opção inválida\n");


    return 0;
}
