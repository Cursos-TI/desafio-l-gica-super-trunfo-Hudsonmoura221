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
  unsigned int superpodercarta1, superpodercarta2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    
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
  printf ("Super Poder: %d\n", superpodercarta1);


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
  printf ("Super Poder: %d\n", superpodercarta2);


//Area comparação de cartas

//Area
if (area1 > area2)
{
    printf ("Cidade 1 tem Area maior **VITORIA** \n");
}else{
    printf("Cidade 2 tem area maior **VITORIA** \n");
};


//Pib
if (pib1 > pib2)
{
    printf ("Cidade 1 tem Pib maior **VITORIA** \n");
}else{
    printf("Cidade 2 tem Pib maior **VITORIA** \n");
};


//População
if (populacao1 > populacao2)
{
    printf ("Cidade 1 tem Populacao maior **VITORIA** \n");
}else{
    printf("Cidade 2 tem Populacao maior **VITORIA** \n");
};


//Pontos Turisticos
if (pontos_turisticos1 > pontos_turisticos2)
{
    printf ("Cidade 1 tem mais Pontos turisticos **VITORIA** \n");
}else{
    printf("Cidade 2 tem mais pontos turisticos **VITORIA** \n");
};


//Pib per-capita
if (pib_per_capita1 > pib_per_capita2)
{
    printf ("Cidade 1 tem Pib per-capita maior **VITORIA** \n");
}else{
    printf("Cidade 2 tem Pib per-capita maior **VITORIA** \n");
};


//Densidade
if (densidade1 < densidade2)
{
    printf ("Cidade 1 tem densidade menor **VITORIA** \n");
}else{
    printf("Cidade 2 tem densidade menor **VITORIA** \n");
};


//Super-Poder
if (superpodercarta1 > superpodercarta2)
{
    printf ("Cidade 1 tem um superpoder maior **VITORIA** \n");
}else{
    printf("Cidade 2 tem um superpoder maior **VITORIA** \n");
};


    return 0;
}
