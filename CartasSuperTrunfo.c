#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    
    // variaveis global

     unsigned long int resultadoPopulacao, resultadoArea, resultadoPib, resultadoPontosTuristicos, resultadoDensidadePopulacional, resultadoPibPerCapta, resultadoSuperPoder;


    //variaveis carta 01

      char estado1, codigo1[4], cidade1[30];
      int populacao1, pontosTuristicos1;
      float pib1, area1, densidadePopulacional, pibPerCapta1, superPoder1;


    //variaveis carta 02
      
      char estado2, codigo2[10], cidade2[30];
      unsigned long int populacao2, pontosTuristicos2;
      float pib2, area2, densidadePopulaciona2, pibPerCapta2, superPoder2;

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
   scanf("%lu", &populacao1);

   printf("Digite a área da cidade (em km2): ");
   scanf("%f", &area1);

   printf("Digite o PIB da cidade: ");
   scanf("%f", &pib1);

    printf("Digite os pontos turísticos da cidade: ");
    scanf("%lu", &pontosTuristicos1);




   // Coleta dos dados da carta 02

    printf("\nDigite os dados da carta 02: \n\n\n");
   
    printf("digite a letra do Estado: ");
    scanf("\n%c", &estado2);

    printf("Digite o código: ");
    scanf("\n%s", codigo2); 

    printf("Digite o nome da cidade: ");
    scanf("\n%s", cidade2);

    printf("Digite a populacao da cidade: ");
    scanf("\n%lu", &populacao2);

    printf("Digite a área da cidade (em km2): ");
    scanf("\n%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("\n%f", &pib2);

    printf("Digite os pontos turísticos da cidade: ");
    scanf("\n%lu", &pontosTuristicos2);

    // Área para calculos automaticos 

      // Carta 1:

      densidadePopulacional = populacao1 / area1; // calculo da densidade populacional da carta 2

      pibPerCapta1 = pib1 / populacao1;  // calculo do PIB Per Capta da carta 2

      superPoder1 = (float) (populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapta1 + (1 / densidadePopulacional)); // calculo do super poder da carta 1, somando todas as categorias

      // Carta 2:

      densidadePopulaciona2 = populacao2 / area2; // calculo da densidade populacional da carta 2

      pibPerCapta2 = pib2 / populacao2;  // calculo do PIB Per Capta da carta 2
    
      superPoder2 = (float) (populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapta2 + (1 / densidadePopulaciona2)); // calculo do super poder da carta 2, somando todas as categorias

  
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
   printf("Super Poder: %f\n\n", superPoder1);

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
   printf("PIB Per Capta: %f reais\n", pibPerCapta2);
    printf("Super Poder: %f\n\n", superPoder2);

  // local para comparação das cartas

    resultadoPopulacao = (populacao1 > populacao2) ? 1 : (populacao1 < populacao2) ? 2 : 0; // comparação da população das cartas
    resultadoArea = (area1 > area2) ? 1 : (area1 < area2) ? 2 : 0; // comparação da área das cartas
    resultadoPib = (pib1 > pib2) ? 1 : (pib1 < pib2) ? 2 : 0; // comparação do PIB das cartas 
    resultadoPontosTuristicos = (pontosTuristicos1 > pontosTuristicos2) ? 1 : (pontosTuristicos1 < pontosTuristicos2) ? 2 : 0; // comparação dos pontos turísticos das cartas
    resultadoDensidadePopulacional = ((1.0 / densidadePopulacional) > (1.0 / densidadePopulaciona2)) ? 1 : ((1.0 / densidadePopulacional) < (1.0 / densidadePopulaciona2)) ? 2 : 0; // comparação da densidade populacional das cartas
    resultadoPibPerCapta = (pibPerCapta1 > pibPerCapta2) ? 1 : (pibPerCapta1 < pibPerCapta2) ? 2 : 0; // comparação do PIB Per Capta das cartas
    resultadoSuperPoder = (superPoder1 > superPoder2) ? 1 : (superPoder1 < superPoder2) ? 2 : 0; // comparação do super poder das cartas  
    
  // exibição dos resultados da comparação

    printf("\n\n\n\nResultados da comparação das cartas: \n\n");

    printf("populaçao: Carta %d venceu\n", resultadoPopulacao); // exibição do resultado da comparação da população, onde 1 é a carta 1, 2 é a carta 2 e 0 é empate
    printf("área: Carta %d venceu\n", resultadoArea); // exibição do resultado da comparação da área, onde 1 é a carta 1, 2 é a carta 2 e 0 é empate
    printf("PIB: Carta %d venceu\n", resultadoPib); // exibição do resultado da comparação do PIB, onde 1 é a carta 1, 2 é a carta 2 e 0 é empate
    printf("pontos turísticos: Carta %d venceu\n", resultadoPontosTuristicos); // exibição do resultado da comparação dos pontos turísticos, onde 1 é a carta 1, 2 é a carta 2 e 0 é empate
    printf("densidade populacional: Carta %d venceu\n", resultadoDensidadePopulacional); // exibição do resultado da comparação da densidade populacional, onde 1 é a carta 1, 2 é a carta 2 e 0 é empate
    printf("PIB Per Capta: Carta %d venceu\n", resultadoPibPerCapta); // exibição do resultado da comparação do PIB Per Capta, onde 1 é a carta 1, 2 é a carta 2 e 0 é empate
    printf("super poder: Carta %d venceu\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n", resultadoSuperPoder); // exibição do resultado da comparação do super poder, onde 1 é a carta 1, 2 é a carta 2 e 0 é empate

   return 0;
} 
