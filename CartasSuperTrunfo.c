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

    // apresentação/introdução do desafio CartasSuperTrunfo

    printf(" Bem-vindo ao Cadastro de Cartas do Super Trunfo de Cidades! \n\n");
    printf("Esta pronto para criar sua primeira carta?\n");
    printf("obs: não utilize pontos .");

    printf("\n==========================\n");
    printf("Cadastro da Carta 1\n");
    printf("==========================\n\n");

    //leitura dos dados da carta 1

    printf("Digite a letra do estado:\n");
    scanf(" %c", &estado1);

    printf("\nmuito bem! agora digite o codigo. ex: A01\n"); // interação com o jogador
    scanf("%s", codigo1);

    printf("\nOtimo! agora escreva o nome da cidade:\n");
    scanf("%s", cidade1);

    printf("\nOtima cidade! agora nos fale a população da cidade:\n");
    scanf("%d", &populacao1);

    printf("\nUau, magnifico! agora a area da cidade :\n");
    scanf(" %f", &area1);

    printf("\nisso! agora digite o PIB:\n");
    scanf("%f", &pib1);

    printf("\nEstamos quase lá! nos fale quantos Pontos Turisticos extistem na cidade\n:");
    scanf("%d", &PontosTuristicos1);

    //conclusão da carta 1

    printf("\nParabéns!! voce criou sua primeira carta, agora vamos criar a segunda carta!\n\n");

    printf("agora que já sabe crialas, agora é com você!\n");

    //inicio da carta 2

    printf("\n===================\n");
    printf("cadastro da carta 2\n");
    printf("====================\n\n");

    printf("\ndigite a letra do estado:\n");
    scanf(" %c", &estado2);

    printf("\ndigite o codigo: \n");
    scanf("%s", codigo2);

    printf("\ndigite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("\ndigite a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("\ndigite a area da cidade: \n");
    scanf(" %f", &area2);

    printf("\ndigite o PIB: \n");
    scanf(" %f", &pib2);

    printf("\ndigite quantos pontos turisticos existem: \n\n");
    scanf("%d", &PontosTuristicos2);

    char sim[4];    //interação com o jogador

    printf("\nmeus parabéns! voce concluiu suas duas cartas.\n");  //concusão da segunda carta

    printf("\ndigite Sim para ver os resultados:\n\n");    //interação com o jogador

    scanf("%s", sim);

    //exibição dos dados da carta 1

    printf("\nCarta 1:\n\n");

    printf("letra do estado: %c\n\n", estado1);
    printf("codigo: %s\n\n", codigo1);
    printf("cidade: %s\n\n", cidade1);
    printf("população: %d\n\n", populacao1);
    printf("area: %.2f\n\n", area1);
    printf("PIB: %.2f\n\n", pib1);
    printf("pontos turisticos: %d\n\n", PontosTuristicos1);

    //exibição de dados da carta 2:

    printf("Carta 2:\n\n");

    printf("letra do estado: %c\n\n", estado2);
    printf("codigo: %s\n\n", codigo2);
    printf("cidade: %s\n\n", cidade2);
    printf("população: %d\n\n", populacao2);
    printf("area: %.2f\n\n", area2);
    printf("PIB: %.2f\n\n", pib2);
    printf("pontos turisticos: %d\n\n", PontosTuristicos2);

    //conclusão da carta 2

    //agradecimentos

    printf("obrigado por participar do super trunfo :) volte sempre!!");

    


    return 0;
}
