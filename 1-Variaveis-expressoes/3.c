#include <stdio.h>

int main()
{

  int a, b, c;

  printf("Usuario, digite tres numeros inteiros: ");
  scanf("%d %d %d", &a, &b, &c);

  //calcula soma dos tres numeros
  int soma = a + b + c;

  printf("A soma dos numeros eh %d\n", soma);
  return 0;
}