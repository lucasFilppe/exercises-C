//soma dos quadrados

#include <stdio.h>

int main(){
  
  int num1, num2, num3;

  //le tres numeros inteiros
  printf("Digite tres numeros: ");
  scanf("%d %d %d", &num1, &num2, &num3);

  //calcular a soma dos quadrados
  int somaquadrados = ((num1 * num1) + (num2 * num2) + (num3 * num3));

  //exibir saida
  printf("Soma dos quadrados = %d\n", somaquadrados);

  return 0;
}