#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
  
  float area1, area2 ;
  float pib1, pib2 ;
  unsigned long int populacao1, populacao2 ;
  int pontos_turisticos1, pontos_turisticos2 ;
  char estado1 [20];
  char estado2 [20];
  char codigo1 [20];
  char codigo2 [20];
  char cidade1 [20];
  char cidade2 [20];
  float densidade1;
  float densidade2;
  float pib_per_capita1;
  float pib_per_capita2;
  float superpodercarta1, superpodercarta2;
  int escolhaswitch;
  char escolhacomparacao1;
  char escolhacomparacao2;
  int resultado_comparacao_area;
  int resultado_comparacao_pib;
  int resultado_comparacao_populacao;
  int resultado_comparacao_pontos_turisticos;
  int resultado_comparacao_pib_per_capita;
  int resultado_comparacao_densidade;
  int resultado_comparacao_superpoder;
  int jogador1_pontos = 0;
  int jogador2_pontos = 0;



    
    printf("Escolha uma das opcoes \n");
    printf("1 . Iniciar Jogo \n");
    printf("2 . Ver Regras \n");
    printf("3. Sair \n");
    scanf("%d", &escolhaswitch);

    
  switch (escolhaswitch)
  {
  case 1:
  
  
  
  // Cadastro das Cartas:
    
  printf (" **** Digite os dados da carta 1 **** \n");
  
  printf("Digite o estado 1:\n"); 
  scanf("%s", estado1);
 
  printf("Digite o codigo da carta:\n");
  scanf("%s", codigo1);
  
  printf("Digite a cidade:\n");
  scanf("%s", cidade1);
 
  printf("Digite a area da cidade:\n");
  scanf("%f", &area1);
 
  printf("Digite o pib da cidade:\n");
  scanf("%f", &pib1);
  
  printf("Digite a população da cidade:\n");
  scanf("%lu", &populacao1);
 
  printf("Digite quantos pontos turisticos tem:\n");
  scanf("%d", &pontos_turisticos1);

  // Carta 2
  
  printf(" **** Digite os dados da carta 2 **** \n");
  
  printf("Digite o estado :\n");
  scanf("%s", estado2);

  printf("Digite o codigo da carta:\n");
  scanf("%s", codigo2 );

  printf("Digite a cidade:\n");
  scanf("%s", cidade2 );

  printf("Digite a area da cidade:\n");
  scanf("%f", &area2 );

  printf("Digite o pib da cidade:\n");
  scanf("%f", &pib2 );

  printf("Digite a população da cidade:\n");
  scanf("%lu", &populacao2 );

  printf("Digite quantos pontos turisticos tem:\n");
  scanf("%d", &pontos_turisticos2 );


   //Area para calcular densidade demografica

  densidade1 = (populacao1 / area1);
  densidade2 = (populacao2 / area2);
 
 
  //Area para calcular PIB per capita

  pib_per_capita1 = ((float) pib1 / (float)populacao1);
  pib_per_capita2 = ((float) pib2 / (float)populacao2);
 
 
//Area Superpoder

  superpodercarta1 = area1 + pib1 + (float)populacao1 + (float)pontos_turisticos1 + densidade1 + pib_per_capita1;
  superpodercarta2 = area2 + pib2 + (float)populacao2 + (float)pontos_turisticos2 + densidade2 + pib_per_capita2;
 

  // Área para exibição dos dados da cidade
  
  // Carta 1
  
  printf ("CARTA 1\n");
  printf ("Estado: %s\n", estado1);
  printf ("Codigo: %s\n", codigo1);
  printf ("Cidade: %s\n", cidade1);
  printf ("Area: %0.2f\n", area1);
  printf ("Pib: %0.2f\n", pib1);
  printf ("População: %lu\n", populacao1);
  printf ("Pontos Turisticos: %d\n:", pontos_turisticos1);
  printf ("Pib per capita: %0.2f\n", pib_per_capita1);
  printf ("Densidade Demográfica: %0.2f\n", densidade1);
  printf ("Super Poder: %0.2f\n", superpodercarta1);


  // Carta 2

  printf ("CARTA 2\n");
  printf ("Estado: %s\n", estado2);
  printf ("Codigo: %s\n", codigo2);
  printf ("Cidade: %s\n", cidade2);
  printf ("Area: %0.2f\n", area2);
  printf ("Pib: %0.2f\n", pib2);
  printf ("População: %lu\n", populacao2);
  printf ("Pontos Turisticos: %d\n:", pontos_turisticos2);
  printf ("Pib per capita: %0.2f\n", pib_per_capita2);
  printf ("Densidade Demográfica: %0.2f\n", densidade2);
  printf ("Super Poder: %0.2f\n", superpodercarta2);


printf("Escolha o atributo de comparacao \n");
printf("A. Area \n");
printf("B. Pib \n");
printf("C. Populacao \n");
printf("D. Pontos Turisticos \n");
printf("E. Pib Per-Capita \n");
printf("F. Densidade Demografica \n");
printf("G. SuperPoder \n");
scanf(" %c", &escolhacomparacao1);

//Area comparação de cartas


switch (escolhacomparacao1)
{
case 'A':

//Area

printf("Cidade 1 : %s\n", cidade1);
printf("Cidade 2 : %s\n", cidade2);
printf("Comparacao escolhida: Area\n");
printf("Valor da carta 1: %f\n", area1);
printf("Valor da carta 2: %f\n", area2);


resultado_comparacao_area = (area1 > area2) ? 1:0;
if (resultado_comparacao_area == 1)
{
  jogador1_pontos++;
    printf ("Cidade 1 tem Area maior **VITORIA** \n");
}else if (resultado_comparacao_area == 0)
 {
    jogador2_pontos++;
    printf("Cidade 2 tem area maior **VITORIA** \n");
}else{
    (area1 == area2);
    printf("Empate! Ambas as cidades tem a mesma area **EMPATE** \n");
};
break;

case 'B':

//Pib

printf("Cidade 1 : %s\n", cidade1);
printf("Cidade 2 : %s\n", cidade2);
printf("Comparacao escolhida: Pib\n");
printf("Valor da carta 1: %f\n", pib1);
printf("Valor da carta 2: %f\n", pib2);


resultado_comparacao_pib = (pib1 > pib2) ? 1:0;
if (resultado_comparacao_pib == 1)
{
    jogador1_pontos++;
    printf ("Cidade 1 tem Pib maior **VITORIA** \n");
}else if (resultado_comparacao_pib == 0)
{
    jogador2_pontos++;
    printf("Cidade 2 tem Pib maior **VITORIA** \n");
}else{
    (pib1 == pib2);
    printf("Empate! Ambas as cidades tem o mesmo Pib **EMPATE** \n");
};
break;

case 'C':

//População

printf("Cidade 1 : %s\n", cidade1);
printf("Cidade 2 : %s\n", cidade2);
printf("Comparacao escolhida: Populacao\n");
printf("Valor da carta 1: %lu\n", populacao1);
printf("Valor da carta 2: %lu\n", populacao2);


resultado_comparacao_populacao = (populacao1 > populacao2) ? 1:0;
if (resultado_comparacao_populacao == 1)
{
    jogador1_pontos++;
    printf ("Cidade 1 tem Populacao maior **VITORIA** \n");
}else if (resultado_comparacao_populacao == 0)
{ 
    jogador2_pontos++;
    printf("Cidade 2 tem Populacao maior **VITORIA** \n");
}else{
    (populacao1 == populacao2);
    printf("Empate! Ambas as cidades tem a mesma Populacao **EMPATE** \n");
};

break;

case 'D':

//Pontos Turisticos

printf("Cidade 1 : %s\n", cidade1);
printf("Cidade 2 : %s\n", cidade2);
printf("Comparacao escolhida: Pontos Turisticos\n");
printf("Valor da carta 1: %d\n", pontos_turisticos1);
printf("Valor da carta 2: %d\n", pontos_turisticos2);


resultado_comparacao_pontos_turisticos = (pontos_turisticos1 > pontos_turisticos2) ? 1:0;
if (resultado_comparacao_pontos_turisticos == 1)
{
    jogador1_pontos++;
    printf ("Cidade 1 tem mais Pontos turisticos **VITORIA** \n");
}else if (resultado_comparacao_pontos_turisticos == 0)
{ 
    jogador2_pontos++;
    printf("Cidade 2 tem mais pontos turisticos **VITORIA** \n");
}else{
    (pontos_turisticos1 == pontos_turisticos2);
    printf("Empate! Ambas as cidades tem a mesma quantidade de pontos turisticos **EMPATE** \n");
};
break;

case 'E':

//Pib per-capita

printf("Cidade 1 : %s\n", cidade1);
printf("Cidade 2 : %s\n", cidade2);
printf("Comparacao escolhida: Pib per-capita\n");
printf("Valor da carta 1: %f\n", pib_per_capita1);
printf("Valor da carta 2: %f\n", pib_per_capita2);


resultado_comparacao_pib_per_capita = (pib_per_capita1 > pib_per_capita2) ? 1:0;
if (resultado_comparacao_pib_per_capita == 1)
{
    jogador1_pontos++;
    printf ("Cidade 1 tem Pib per-capita maior **VITORIA** \n");
}else if (resultado_comparacao_pib_per_capita == 0){
    jogador2_pontos++;
    printf("Cidade 2 tem Pib per-capita maior **VITORIA** \n");
}else{
    (pib_per_capita1 == pib_per_capita2);
    printf("Empate! Ambas as cidades tem o mesmo Pib per-capita **EMPATE** \n");
};
break;

case 'F':

//Densidade

printf("Cidade 1 : %s\n", cidade1);
printf("Cidade 2 : %s\n", cidade2);
printf("Comparacao escolhida: Densidade Demografica\n");
printf("Valor da carta 1: %f\n", densidade1);
printf("Valor da carta 2: %f\n", densidade2);


resultado_comparacao_densidade = (densidade1 < densidade2) ? 1:0;
if (resultado_comparacao_densidade == 1)
{
    jogador1_pontos++;
    printf ("Cidade 1 tem densidade menor **VITORIA** \n");
}else if (resultado_comparacao_densidade == 0){
    jogador2_pontos++;
    printf("Cidade 2 tem densidade menor **VITORIA** \n");
}else{
    (densidade1 == densidade2);
    printf("Empate! Ambas as cidades tem a mesma densidade **EMPATE** \n");
};
break;

case 'G':

//Super-Poder

printf("Cidade 1 : %s\n", cidade1);
printf("Cidade 2 : %s\n", cidade2);
printf("Comparacao escolhida: Super Poder\n");
printf("Valor da carta 1: %0.2f\n", superpodercarta1);
printf("Valor da carta 2: %0.2f\n", superpodercarta2);


resultado_comparacao_superpoder = (superpodercarta1 > superpodercarta2) ? 1:0;
if (resultado_comparacao_superpoder == 1)
{
    jogador1_pontos++;
    printf ("Cidade 1 tem um superpoder maior **VITORIA** \n");
}else if (resultado_comparacao_superpoder == 0){
    jogador2_pontos++;
    printf("Cidade 2 tem um superpoder maior **VITORIA** \n");
}else{
    (superpodercarta1 == superpodercarta2);
    printf("Empate! Ambas as cidades tem o mesmo superpoder **EMPATE** \n");
};

  break;
}


printf("Escolha o segundo atributo de comparacao \n");
printf("A. Area \n");
printf("B. Pib \n");
printf("C. Populacao \n");
printf("D. Pontos Turisticos \n");
printf("E. Pib Per-Capita \n");
printf("F. Densidade Demografica \n");
printf("G. SuperPoder \n");
scanf("%c", &escolhacomparacao2);

    if (escolhacomparacao2 == escolhacomparacao1)
    {
        printf("Voce ja escolheu esse atributo! Por favor, escolha um atributo diferente.\n");
    }else{
        switch (escolhacomparacao2)
        {
case 'A': 

    //Area

printf("Cidade 1 : %s\n", cidade1);
printf("Cidade 2 : %s\n", cidade2);
printf("Comparacao escolhida: Area\n");
printf("Valor da carta 1: %f\n", area1);
printf("Valor da carta 2: %f\n", area2);


resultado_comparacao_area = (area1 > area2) ? 1:0;
if (resultado_comparacao_area == 1)
{
    jogador1_pontos++;
    printf ("Cidade 1 tem Area maior **VITORIA** \n");
}else if (resultado_comparacao_area == 0)
 {
    jogador2_pontos++;
    printf("Cidade 2 tem area maior **VITORIA** \n");
}else{
    (area1 == area2);
    printf("Empate! Ambas as cidades tem a mesma area **EMPATE** \n");


};
break;

case 'B':

//Pib

printf("Cidade 1 : %s\n", cidade1);
printf("Cidade 2 : %s\n", cidade2);
printf("Comparacao escolhida: Pib\n");
printf("Valor da carta 1: %f\n", pib1);
printf("Valor da carta 2: %f\n", pib2);


resultado_comparacao_pib = (pib1 > pib2) ? 1:0;
if (resultado_comparacao_pib == 1)
{
    jogador1_pontos++;
    printf ("Cidade 1 tem Pib maior **VITORIA** \n");
}else if (resultado_comparacao_pib == 0)
{
    jogador2_pontos++;
    printf("Cidade 2 tem Pib maior **VITORIA** \n");
}else{
    (pib1 == pib2);
    printf("Empate! Ambas as cidades tem o mesmo Pib **EMPATE** \n");
};
break;

case 'C':
//População

printf("Cidade 1 : %s\n", cidade1);
printf("Cidade 2 : %s\n", cidade2);
printf("Comparacao escolhida: Populacao\n");
printf("Valor da carta 1: %lu\n", populacao1);
printf("Valor da carta 2: %lu\n", populacao2);


resultado_comparacao_populacao = (populacao1 > populacao2) ? 1:0;
if (resultado_comparacao_populacao == 1)
{
   jogador1_pontos++;
    printf ("Cidade 1 tem Populacao maior **VITORIA** \n");
}else if (resultado_comparacao_populacao == 0)
 {
    jogador2_pontos++;
    printf("Cidade 2 tem populacao maior **VITORIA** \n");
}else{
    (populacao1 == populacao2);
    printf("Empate! Ambas as cidades tem a mesma populacao **EMPATE** \n");
};
break;

case 'D':
//Pontos Turisticos

printf("Cidade 1 : %s\n", cidade1);
printf("Cidade 2 : %s\n", cidade2);
printf("Comparacao escolhida: Pontos Turisticos\n");
printf("Valor da carta 1: %d\n", pontos_turisticos1);
printf("Valor da carta 2: %d\n", pontos_turisticos2);

resultado_comparacao_pontos_turisticos = (pontos_turisticos1 > pontos_turisticos2) ? 1:0;
if (resultado_comparacao_pontos_turisticos == 1)
{
    jogador1_pontos++;
    printf ("Cidade 1 tem mais Pontos turisticos **VITORIA** \n");
}else if (resultado_comparacao_pontos_turisticos == 0)
{
    jogador2_pontos++;
    printf("Cidade 2 tem mais Pontos turisticos **VITORIA** \n");
}else{
    (pontos_turisticos1 == pontos_turisticos2);
    printf("Empate! Ambas as cidades tem a mesma quantidade de Pontos turisticos **EMPATE** \n");
};
break;

case 'E':
//Pib per-capita

printf("Cidade 1 : %s\n", cidade1);
printf("Cidade 2 : %s\n", cidade2);
printf("Comparacao escolhida: Pib per-capita\n");
printf("Valor da carta 1: %f\n", pib_per_capita1);
printf("Valor da carta 2: %f\n", pib_per_capita2);

resultado_comparacao_pib_per_capita = (pib_per_capita1 > pib_per_capita2) ? 1:0;
if (resultado_comparacao_pib_per_capita == 1)
{
    jogador1_pontos++;
    printf ("Cidade 1 tem Pib per-capita maior **VITORIA** \n");
}else if (resultado_comparacao_pib_per_capita == 0)
{
    jogador2_pontos++;
    printf("Cidade 2 tem Pib per-capita maior **VITORIA** \n");
}else{
    (pib_per_capita1 == pib_per_capita2);
    printf("Empate! Ambas as cidades tem o mesmo Pib per-capita **EMPATE** \n");
};
break;

case 'F':
//Densidade

printf("Cidade 1 : %s\n", cidade1);
printf("Cidade 2 : %s\n", cidade2);
printf("Comparacao escolhida: Densidade Demografica\n");
printf("Valor da carta 1: %f\n", densidade1);
printf("Valor da carta 2: %f\n", densidade2);

resultado_comparacao_densidade = (densidade1 <  densidade2) ? 1:0;
if (resultado_comparacao_densidade == 1)
{
    jogador1_pontos++;
    printf ("Cidade 1 tem densidade menor **VITORIA** \n");
}else if (resultado_comparacao_densidade == 0){
    jogador2_pontos++;
    printf("Cidade 2 tem densidade menor **VITORIA** \n");
}else{
    (densidade1 == densidade2);
    printf("Empate! Ambas as cidades tem a mesma densidade **EMPATE** \n");
};
break;

case 'G':
//Super-Poder

printf("Cidade 1 : %s\n", cidade1);
printf("Cidade 2 : %s\n", cidade2);
printf("Comparacao escolhida: Super Poder\n");
printf("Valor da carta 1: %0.2f\n", superpodercarta1);
printf("Valor da carta 2: %0.2f\n", superpodercarta2);

resultado_comparacao_superpoder = (superpodercarta1 > superpodercarta2) ? 1:0;
if (resultado_comparacao_superpoder == 1)
{
    jogador1_pontos++;
    printf ("Cidade 1 tem um superpoder maior **VITORIA** \n");
}else if (resultado_comparacao_superpoder == 0){
    jogador2_pontos++;
    printf("Cidade 2 tem um superpoder maior **VITORIA** \n");
}else{
    (superpodercarta1 == superpodercarta2);
    printf("Empate! Ambas as cidades tem o mesmo superpoder **EMPATE** \n");
}

break;
}


//Resultado final da partida


    if (jogador1_pontos > jogador2_pontos)  {
        printf("Jogador 1 venceu a partida com %d pontos!\n", jogador1_pontos);
    }else if (jogador2_pontos > jogador1_pontos)
    {
        printf("Jogador 2 venceu a partida com %d pontos!\n", jogador2_pontos);
    }else{
        printf("A partida terminou empatada com ambos os jogadores tendo %d pontos!\n", jogador1_pontos);
};
break;


case 2:
printf("Regras do Jogo:\n");
printf("1. Cada jogador deve cadastrar os dados de uma cidade em sua carta.\n");
printf("2. Os jogadores escolhem um atributo para comparar suas cartas.\n");
printf("3. O jogador com o valor mais alto no atributo escolhido vence a rodada.\n");
printf("4. Em caso de empate, ambos os jogadores empatam a rodada.\n");

break;

case 3:
printf("Saindo do jogo. Obrigado por jogar!\n");
break;



  default:
    printf("Opcao invalida! Por favor, escolha uma opcao valida.\n");
    
    break;
        }
    }

    return 0;
}