#include <stdio.h>

int main()
{
  float produto;
  //ler vaolr do produto
  printf("Digite o valor do produto: ");
  scanf("%f", &produto);

  //calcular desconyo
  float porcem = (12 * produto) / 100;
  float desconto = produto - porcem;
  printf("Valor com desconto = %.2f\n", desconto);

  return 0;
}