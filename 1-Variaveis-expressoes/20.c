//media aritmetica de notas
#include <stdio.h>

int main()
{
  float n1, n2, n3, n4, n5;

  //ler notas
  printf("Digite o valor das 4 notas: ");
  scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);

  //calcular media aritmetica
  float mediaAritmetica = (n1 + n2 + n3 + n4 + n5) / 5;

  //exibir saida
  printf("A media aritimetica das notas eh %.2f\n", mediaAritmetica);
  return 0;
}