//conversao de angulos
#include <stdio.h>

int main()
{
  float g;

  printf("Digite o valor do angulo em graus: ");
  scanf("%f", &g);

  float pi = 3.14;
  float r = g * pi / 180;

  printf("Valor em R: %.2f\n", r);
  return 0;
}