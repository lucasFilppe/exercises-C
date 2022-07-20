//conversao de temperatura
#include <stdio.h>

int main()
{
  float m;

  //lendo dados
  printf("Digite a velocidade em milhas: ");
  scanf("%f", &m);

  //calcula conversao para km/h
  float k = 1.61 * m;

  //mostra saida
  printf("velocidade convertida em km/h: %.2f\n", k);
  return 0;
}