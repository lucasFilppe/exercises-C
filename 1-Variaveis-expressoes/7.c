//conversao de temperatura
#include <stdio.h>

int main()
{
  float f;

  //lendo dados
  printf("Digite a temperautura em farenheit: ");
  scanf("%f", &f);

  //calcula conversao para celsius
  float c = 5.0 * (f - 32.0) / 9.0;

  //mostra saida
  printf("temperatura convertida em celsius: %.2f\n", c);
  return 0;
}