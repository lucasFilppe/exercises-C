//conversao de temperatura
#include <stdio.h>

int main()
{
  float k;

  //lendo dados
  printf("Digite a velocidade em km/h: ");
  scanf("%f", &k);

  //calcula conversao para metros por segundo
  float m = k / 3.6;

  //mostra saida
  printf("velocidade convertida em metros/segundo: %.2f\n", m);
  return 0;
}