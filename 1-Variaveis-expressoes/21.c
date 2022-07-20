//cotação do dolar
#include <stdio.h>

int main()
{
  float real;

  //ler valor em real
  printf("Digite o valor em real: ");
  scanf("%f", &real);

  //calcular cotação do dolar
  float dollar = real / 5.39;

  //exibir saida em dolar
  printf("O valor convertido em dolar eh: %.2f\n", dollar);
  return 0;
}