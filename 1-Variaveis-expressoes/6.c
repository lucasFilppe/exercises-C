//conversao de temperatura
#include <stdio.h>

int main()
{
  float celsius;

  //lendo dados
  printf("Digite a temperautura em celsius: ");
  scanf("%f", &celsius);

  //calcula conversao para farenheit
  float farenheit = (celsius * ((9 / 5) + 32));

  //mostra saida
  printf("temperatura convertida em farenheit: %.2f\n", farenheit);
  return 0;
}