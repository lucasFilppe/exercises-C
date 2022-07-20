//conversao de comprimentos
#include <stdio.h>

int main()
{
  float p;

  printf("Digite o valor do comprimentop em polegadas: ");
  scanf("%f", &p);

  float c = p * 2.54;

  printf("Valor convertido em centimetro: %.2f\n", c);
  return 0;
}