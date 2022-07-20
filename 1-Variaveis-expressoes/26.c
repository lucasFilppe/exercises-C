#include <stdio.h>

int main()
{
  float valorPremio;

  //ler valor
  printf("Digite o valor do premio: ");
  scanf("%f", &valorPremio);
  //calcular 1 premio 46%
  float ganhador1 = (46 * valorPremio) / 100;

  //calcular 2 premio 32%
  float ganhador2 = (32 * valorPremio) / 100;

  //calcular 3, restante
  float ganhador3 = valorPremio - ganhador1 - ganhador2;

  //exibindo saida
  printf("Primeiro ganhador: %.2f\n", ganhador1);
  printf("Segundo ganhador: %.2f\n", ganhador2);
  printf("Terceiro ganhador: %.2f\n", ganhador3);
  return 0;
}