#include <stdio.h>
#include<math.h>
int main()
{
  float num;

  //le numero real
  printf("Digite um numero real: ");
  scanf("%f", &num);

  //se numero for positivo
  if(num >= 0)
    //calcular raiz quadrada
    printf("A raiz quadrada eh %f\n", sqrt(num));
  //se nao
    else
    {
       //exibir comando invalido
       printf("Nao existe raiz negativa\n");   
    }
    
   
  return 0;
}