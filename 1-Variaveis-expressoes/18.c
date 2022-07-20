//conversao de volume
#include <stdio.h>

int main()
{
  float m;

  printf("Digite o valor do volume em metros cubico: ");
  scanf("%f", &m);

  float l = 1000 * m;

  printf("O valor desse volume em litros eh %.2lf\n", l);
  return 0;
}