#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    
    //variaveis carta 01

      char estado1, codigo1[4], cidade1[30];
      int populacao1, pontosTuristicos1;
      float pib1, area1, densidadePopulacional, pibPerCapta1;

    //variaveis carta 02
      
      char estado2, codigo2[10], cidade2[30];
      int populacao2, pontosTuristicos2;
      float pib2, area2, densidadePopulaciona2, pibPerCapta2;

  // Regras e orientações do jogo!!

   printf("*-*-*-*-*-* Bem vindo ao jogo de cartas Super Trunfo *-*-*-*-*-*-* \n\n\n\n");
   printf(" Vamos as regras!!\n");
   printf(" Você deverá cadastrar duas cartas, cada uma contendo:\n\n");
   printf(" o Estado (uma letra de A a H)\n");
   printf(" O código da carta (a primeira letra do estado seguido de um numero 01 a 04. ex: A01)\n");
   printf(" O nome da cidade\n");
   printf(" A população\n");
   printf(" A área (em km2)\n");
   printf(" O PIB (produto interno bruto da cidade)\n");
   printf(" E os pontos turísticos\n");
   printf(" O objetivo do jogo é comparar as cartas e descobrir qual cidade é a melhor em cada categoria!!\n");
   printf(" Vamos começar?\n\n\n\n\n");

   printf("*********** Obs: Não adicione pontos nem espaços em branco nos campos. ***************\n\n\n\n\n");


  // Area para coleta dos dados
 
    // Coleta dos dados da carta 01
   printf("Digite os dados da carta 01: \n\n");
   
   printf("Digite a letra do Estado: ");
   scanf("%c", &estado1);

   printf("Digite o código: ");
   scanf("%s", codigo1);

   printf("Digite o nome da cidade: ");
   scanf("%s", cidade1);

   printf("Digite a população da cidade: ");
   scanf("%i", &populacao1);

   printf("Digite a área da cidade (em km2): ");
   scanf("%f", &area1);

   printf("Digite o PIB da cidade: ");
   scanf("%f", &pib1);

    printf("Digite os pontos turísticos da cidade: ");
    scanf("%i", &pontosTuristicos1);




   // Coleta dos dados da carta 02

    printf("\nDigite os dados da carta 02: \n\n\n");
   
    printf("digite a letra do Estado: ");
    scanf("\n%c", &estado2);

    printf("Digite o código: ");
    scanf("\n%s", codigo2); 

    printf("Digite o nome da cidade: ");
    scanf("\n%s", cidade2);

    printf("Digite a populacao da cidade: ");
    scanf("\n%i", &populacao2);

    printf("Digite a área da cidade (em km2): ");
    scanf("\n%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("\n%f", &pib2);

    printf("Digite os pontos turísticos da cidade: ");
    scanf("\n%i", &pontosTuristicos2);

    // Área para calculos automaticos 

      // Carta 1:

      densidadePopulacional = populacao1 / area1; // calculo da densidade populacional da carta 2

      pibPerCapta1 = pib1 / populacao1;  // calculo do PIB Per Capta da carta 2

      // Carta 2:

      densidadePopulaciona2 = populacao2 / area2; // calculo da densidade populacional da carta 2

      pibPerCapta2 = pib2 / populacao2;  // calculo do PIB Per Capta da carta 2


   // Área para exibição dos dados da cidade


    //Exibição dos dados da carta 01
   printf("\n\n\n\nDados da carta 01: \n\n");
   printf("Estado: %c\n", estado1);
   printf("Código da carta: %s\n", codigo1);
   printf("Nome da cidade: %s\n", cidade1);
   printf("População: %i\n", populacao1);
   printf("Área: %2.f km²\n", area1);
   printf("PIB: %2.f Bilhões de reais\n", pib1);
   printf("Pontos turísticos: %i\n", pontosTuristicos1);
   printf("Densidade populacional: %f hab/km²\n", densidadePopulacional);
   printf("PIB Per Capta: %f reais\n", pibPerCapta1);

   //Exibição dos dados da carta 02
   printf("\n\n\n\nDados da carta 02: \n\n");
   printf("Estado: %c\n", estado2);
   printf("Código da carta: %s\n", codigo2);
   printf("Nome da cidade: %s\n", cidade2);
   printf("População: %i\n", populacao2);
   printf("Área: %2.f km²\n", area2);
   printf("PIB: %2.f Bilhões de reais\n", pib2);
   printf("Pontos turísticos: %i\n", pontosTuristicos2);
   printf("Densidade populacional: %f hab/km²\n", densidadePopulaciona2);
   printf("PIB Per Capta: %f reais\n\n\n\n\n\n\n\n\n\n\n\n\n\n", pibPerCapta2);

   return 0;
} 
