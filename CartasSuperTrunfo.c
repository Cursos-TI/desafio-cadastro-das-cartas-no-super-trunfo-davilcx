#include <stdio.h>

// inicio do programa

int main () {

    // carta 1

    char estado1;
    char codigo1[4];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int PontosTuristicos1;

    // carta 2

    char estado2;
    char codigo2[4];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int PontosTuristicos2;

    float densidade1, pibpercapita1, superpoder1;
    float densidade2, pibpercapita2, superpoder2;



    // apresentação/introdução do game

    printf(" Bem-vindo ao Cadastro de Cartas do Super Trunfo de Cidades! \n\n");
    printf("Está pronto para criar sua primeira carta?\n");
    

    printf("\n==========================\n");
    printf("Cadastro da Carta 1\n");
    printf("==========================\n\n");

    //leitura dos dados da carta 1

    printf("Digite a letra do estado:\n");
    scanf(" %c", &estado1);

    printf("\nMuito bem! agora digite o código. ex: A01\n"); // interação com o jogador
    scanf("%s", codigo1);

    printf("\nÓtimo! agora escreva o nome da cidade:\n");
    scanf("%s", cidade1);

    printf("\nÓtima cidade! agora nos fale a população da cidade:\n");
    scanf("%d", &populacao1);

    printf("\nUau, magnífico! agora a área da cidade :\n");
    scanf(" %f", &area1);

    printf("\nIsso! agora digite o PIB:\n");
    scanf("%f", &pib1);

    printf("\nEstamos quase lá! nos fale quantos Pontos Turísticos existem na cidade\n:");
    scanf("%d", &PontosTuristicos1);

    //conclusão da carta 1

    printf("\nParabéns!! voce criou sua primeira carta, agora vamos criar a segunda carta!\n\n");

    printf("Agora que já sabe criá-las, é com você!\n");

    //inicio da carta 2

    printf("\n===================\n");
    printf("cadastro da carta 2\n");
    printf("====================\n\n");

    printf("\nDigite a letra do estado:\n");
    scanf(" %c", &estado2);

    printf("\nDigite o código: \n");
    scanf("%s", codigo2);

    printf("\nDigite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("\nDigite a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("\nDigite a área da cidade: \n");
    scanf(" %f", &area2);

    printf("\nDigite o PIB: \n");
    scanf(" %f", &pib2);

    printf("\nDigite quantos pontos turísticos existem: \n\n");
    scanf("%d", &PontosTuristicos2);

    char sim[4];    //interação com o jogador

    printf("\nMeus parabéns! você concluiu suas duas cartas.\n");  //conclusão da segunda carta

    // Cálculo da densidade populacional e PIB per capita da Carta 1

    densidade1 = populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000) / populacao1;     // PIB convertido de bilhões para reais


    // Cálculo da densidade populacional e PIB per capita da Carta 2

    densidade2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / populacao2;

    // Cálculo do super poder (quanto menor a densidade mais poder)

    superpoder1 = (float)populacao1 + area1 + pib1 + PontosTuristicos1 + pibpercapita1 + (1 / densidade1);
    superpoder2 = (float)populacao2 + area2 + pib2 + PontosTuristicos2 + pibpercapita2 + (1 / densidade2);



    printf("\nAqui estão seus resultados!:\n\n");

    

    //exibição dos dados da carta 1

    printf("\nCarta 1:\n\n");

    printf("letra do estado: %c\n\n", estado1);
    printf("codigo: %s\n\n", codigo1);
    printf("cidade: %s\n\n", cidade1);
    printf("população: %d\n\n", populacao1);
    printf("area: %.2f km2\n\n", area1);
    printf("PIB: %.2f Bilhões de Reais\n\n", pib1);
    printf("pontos turisticos: %d\n\n", PontosTuristicos1);
    printf("densidade populacional: %.2f hab/km2\n\n", densidade1);
    printf("pib per capita: %.2f Reais\n\n", pibpercapita1);
    printf("super poder: %.2f\n\n", superpoder1);

    //exibição de dados da carta 2:

    printf("Carta 2:\n\n");

    printf("letra do estado: %c\n\n", estado2);
    printf("codigo: %s\n\n", codigo2);
    printf("cidade: %s\n\n", cidade2);
    printf("população: %d\n\n", populacao2);
    printf("area: %.2f km2\n\n", area2);
    printf("PIB: %.2f Bilhões de Reais\n\n", pib2);
    printf("pontos turisticos: %d\n\n", PontosTuristicos2);
    printf("densidade populacional: %.2f hab/km2\n\n", densidade2);
    printf("pib per capita: %.2f Reais\n\n", pibpercapita2);
    printf("super poder: %.2f\n\n", superpoder2);

    //conclusão da carta 2

    //comparação das cartas

    printf("========================\n");
    printf("Comparação das cartas!\n");
    printf("=========================\n\n");

    printf("população: carta 1 venceu? (%d)\n\n", populacao1 > populacao2);
    printf("área: carta 1 venceu? (%d)\n\n", area1 > area2);
    printf("PIB: carta 1 venceu? (%d)\n\n", pib1 > pib2);
    printf("pontos turísticos: carta 1 venceu? (%d)\n\n", PontosTuristicos1 > PontosTuristicos2);
    printf("densidade populacional: carta 1 venceu? (%d)\n\n", densidade1 > densidade2);
    printf("pib per capita: carta 1 venceu? (%d)\n\n", pibpercapita1 > pibpercapita2);
    printf("super poder: carta 1 venceu? (%d)\n\n", superpoder1 > superpoder2);




    //agradecimentos

    printf("obrigado por participar do Super Trunfo :) volte sempre!!");

    


    return 0;
}
