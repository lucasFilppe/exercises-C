//exibir maior numero
#include <stdio.h>

int main()
{
  int a, b;

  //le dois numeros
  printf("digite dois numeros inteiros: ");
  scanf("%d %d", &a, &b);

  int maior = a;

  if (b > a)
  {
    maior = b;
    printf("%d eh maior\n", maior);
  }

  else
  {
    printf("%d eh maior\n", a);
  }

  //exibir maior
  return 0;
}
