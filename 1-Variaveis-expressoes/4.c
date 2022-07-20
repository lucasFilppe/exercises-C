#include <stdio.h>

int main()
{
   double num;

   printf("Digite um numero real para obter seu quadrado: ");
   scanf("%lf", &num);

   //calcula quadrado
   double quadrado = num * num;

   //mostrando saida
   printf("A quadrado desse numero eh: %.2lf\n", quadrado);

   return 0;
}