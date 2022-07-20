//conversao de angulos
#include <stdio.h>

int main()
{
  float r;

  printf("Digite o valor do angulo em radianos: ");
  scanf("%f", &r);

  float pi = 3.14;
  float g = r * 180 / pi;

  printf("Valor em graus: %.2f\n", g);
  return 0;
}