#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Declarando as variáveis da carta 1
  char estado1;
  char codigo1[6];
  char nomeDaCidade1[70];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;

  // Declarando as variáveis da carta 2
  char estado2;
  char codigo2[6];
  char nomeDaCidade2[70];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;

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
  scanf("%d", &populacao1);

  // Coletando a área
  printf( "Digite a área em km²: \n");
  scanf("%f", &area1);

  // Coletando PIB
  printf( "Digite o PIB em bilhões de reais: \n");
  scanf("%f", &pib1);

  // Coletando pontos turísticos
  printf( "Digite a quantidade de pontos turísticos: \n");
  scanf("%d", &pontosTuristicos1);

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
  scanf("%d", &populacao2);

  // Coletando a área
  printf( "Digite a área em km²: \n");
  scanf("%f", &area2);

  // Coletando PIB
  printf( "Digite o PIB em bilhões de reais: \n");
  scanf("%f", &pib2);

  // Coletando pontos turísticos
  printf( "Digite a quantidade de pontos turísticos: \n");
  scanf("%d", &pontosTuristicos2);

  // EXIBINDO A CARTA 1
  printf( "A carta 1 é: \n");
  printf( "Estado: %c \n", estado1);
  printf( "Código: %s \n", codigo1);
  printf( "Nome da Cidade: %s \n", nomeDaCidade1);
  printf( "População: %d hab. \n", populacao1);
  printf( "Área (km²): %f \n", area1);
  printf( "PIB: R$ %f \n", pib1);
  printf( "Pontos Turísticos: %d \n", pontosTuristicos1);

  // EXIBINDO A CARTA 2
  printf( "A carta 2 é: \n");
  printf( "Estado: %c \n", estado2);
  printf( "Código: %s \n", codigo2);
  printf( "Nome da Cidade: %s \n", nomeDaCidade2);
  printf( "População: %d hab. \n", populacao2);
  printf( "Área (km²): %f \n", area2);
  printf( "PIB: R$ %f \n", pib2);
  printf( "Pontos Turísticos: %d \n", pontosTuristicos2);

return 0;
} 
