#include <stdio.h>

int main()
{
  int num;

  //ler numero
  printf("Digite um numero inteiro: ");
  scanf("%d", &num);

  //se numro for par
  if (num % 2 == 0)
  {
    printf("Numero par\n");
  }

  else
  {
    printf("Numeor impar\n");
  }

  return 0;
}