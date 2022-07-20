#include <stdio.h>

int main()
{
  float salario;

  //ler salario
  printf("Digite o valor do salario: ");
  scanf("%f", &salario);

  //calcular aumento e novo salario
  float aumento = (25 * salario) / 100;
  float novoSalario = salario + aumento;

  //exibir saida
  printf("O novo salario eh %.2f\n", novoSalario);
  return 0;
}