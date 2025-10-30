#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países - Mestre
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Declarando as variáveis da carta 1
  char estado1;
  char codigo1[6];
  char nomeDaCidade1[70];
  unsigned long int populacao1; 
  float area1;
  float pib1;
  int pontosTuristicos1;
  float densidadePopulacional1;
  float pibPerCapta1;
  float superPoder1;

  // Declarando as variáveis da carta 2
  char estado2;
  char codigo2[6];
  char nomeDaCidade2[70];
  unsigned long int populacao2; 
  float area2;
  float pib2;
  int pontosTuristicos2;
  float densidadePopulacional2;
  float pibPerCapta2;
  float superPoder2;

  // COLETANDO OS DADOS DA CARTA 1
  printf( "Carta 1: \n");

  // Coletando o estado
  printf( "Digite o estado (Uma letra de 'A' a 'H'): \n");
  scanf(" %c", &estado1);

  // Coletando codigo
  printf( "Digite o código (Letra + número. Ex: A01): \n");
  scanf("%5s", codigo1);
  scanf("%*c");

  // Coletando o nome da cidade mesmo que seja composto
  printf( "Digite o nome da cidade: \n");
  fgets(nomeDaCidade1, 70, stdin);
  int len = strlen(nomeDaCidade1);
  if(len > 0 && nomeDaCidade1[len -1] == '\n') {
      nomeDaCidade1[len -1] = '\0';
  }

  // Coletando população
  printf( "Digite a população: \n");
  scanf("%lu", &populacao1);
  
  // Coletando a área
  printf( "Digite a área em km²: \n");
  scanf("%f", &area1);
  
  // Coletando PIB
  printf( "Digite o PIB em bilhões de reais: \n");
  scanf("%f", &pib1);
  
  // Coletando pontos turísticos
  printf( "Digite a quantidade de pontos turísticos: \n");
  scanf("%d", &pontosTuristicos1);
  
  // Calculando densidade populacional
  densidadePopulacional1 = (float) populacao1 / area1;

  // Calculando PIB per Capta
  pibPerCapta1 = pib1 * 1000000000;
  pibPerCapta1 /= (float) populacao1;

  // Calculando Super Poder
  superPoder1 = (float) populacao1 + area1 + pib1 + (float) pontosTuristicos1 + pibPerCapta1 - densidadePopulacional1; 
  
  // COLETANDO OS DADOS DA CARTA 2
  
  printf( "Carta 2: \n");
  
  // Coletando o estado
  printf( "Digite o estado (Uma letra de 'A' a 'H'): \n");
  scanf(" %c", &estado2);
  
  // Coletando codigo
  printf( "Digite o código (Letra + número. Ex: A01): \n");
  scanf("%5s", codigo2);
  scanf("%*c");
  
  // Coletando o nome da cidade mesmo que seja composto
  printf( "Digite o nome da cidade: \n");
  fgets(nomeDaCidade2, 70, stdin);
  int length = strlen(nomeDaCidade2);
  if(length > 0 && nomeDaCidade2[length -1] == '\n') {
      nomeDaCidade2[length -1] = '\0';
  }
  
  // Coletando população
  printf( "Digite a população: \n");
  scanf("%lu", &populacao2);
  
  // Coletando a área
  printf( "Digite a área em km²: \n");
  scanf("%f", &area2);
  
  // Coletando PIB
  printf( "Digite o PIB em bilhões de reais: \n");
  scanf("%f", &pib2);
  
  // Coletando pontos turísticos
  printf( "Digite a quantidade de pontos turísticos: \n");
  scanf("%d", &pontosTuristicos2);
  
  // Calculando densidade populacional
  densidadePopulacional2 = (float) populacao2 / area2;

  // Calculando PIB per Capta
  pibPerCapta2 = pib2 * 1000000000;
  pibPerCapta2 /= (float) populacao2;

  // Calculando Super Poder
  superPoder2 = (float) populacao2 + area2 + pib2 + (float) pontosTuristicos2 + pibPerCapta2 - densidadePopulacional2; 

  // EXIBINDO A CARTA 1
  printf( "A carta 1 é: \n");
  printf( "Estado: %c \n", estado1);
  printf( "Código: %s \n", codigo1);
  printf( "Nome da Cidade: %s \n", nomeDaCidade1);
  printf( "População: %lu hab. \n", populacao1);
  printf( "Área (km²): %f \n", area1);
  printf( "PIB: R$ %f \n", pib1);
  printf( "Pontos Turísticos: %d \n", pontosTuristicos1);
  printf( "Densidade Populacional: %f hab/km² \n", densidadePopulacional1);
  printf( "PIB per Capta: R$ %f \n", pibPerCapta1);
  printf( "Super Poder: %f \n", superPoder1);

  // EXIBINDO A CARTA 2
  printf( "A carta 2 é: \n");
  printf( "Estado: %c \n", estado2);
  printf( "Código: %s \n", codigo2);
  printf( "Nome da Cidade: %s \n", nomeDaCidade2);
  printf( "População: %lu hab. \n", populacao2); 
  printf( "Área (km²): %f \n", area2);
  printf( "PIB: R$ %f \n", pib2);
  printf( "Pontos Turísticos: %d \n", pontosTuristicos2);
  printf( "Densidade Populacional: %f hab/km² \n", densidadePopulacional2);
  printf( "PIB per Capta: R$ %f \n", pibPerCapta2);
  printf( "Super Poder: %f \n", superPoder2);

  // COMPARANDO CARTAS

  int populacao = populacao1 > populacao2;
  int area = area1 > area2;
  int pib = pib1 > pib2;
  int pontosTuristicos = pontosTuristicos1 >= pontosTuristicos2;
  int densidadePopulacional = densidadePopulacional1 < densidadePopulacional2;
  int pibPerCapta = pibPerCapta1 > pibPerCapta2;
  int superPoder = superPoder1 > superPoder2;

  printf( "Vamos ver qual é a melhor carta. '1' representa a carta 1 e '0' a carta 2 \n");
  printf( "População: %d \n", populacao);
  printf( "Área: %d \n", area);
  printf( "PIB: %d \n", pib);
  printf( "Pontos Turísticos: %d \n", pontosTuristicos);
  printf( "Densidade Populacional: %d \n", densidadePopulacional);
  printf( "PIB per Capta: %d \n", pibPerCapta);
  printf( "Super Poder: %d \n", superPoder);
  printf( "A melhor Carta é: %d\n", superPoder);

  return 0;
}
