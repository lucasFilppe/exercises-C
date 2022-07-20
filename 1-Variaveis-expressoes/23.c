#include <stdio.h>

int main()
{
  //ler raio
  float raio;
  float pi = 3.141592;
  printf("Digite o valor do raio do circulo: ");
  scanf("%f", &raio);

  //calcular area do circulo
  float area = pi * (raio * raio);

  //exibir area
  printf("A area do circulo eh %.2f\n", area);
  return 0;
}