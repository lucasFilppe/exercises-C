//conversao de temperatura
#include <stdio.h>

int main()
{
  float k;

  //lendo dados
  printf("Digite a temperautura em Kelvin: ");
  scanf("%f", &k);

  //calcula conversao para celsius
  float c = k - 273.15;

  //mostra saida
  printf("temperatura convertida em celsius: %.2f\n", c);
  return 0;
}