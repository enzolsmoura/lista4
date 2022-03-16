/* Enunciado:
 *   Desenvolva um programa capaz de ler os valores inteiros de uma matriz 3x3
 *   e, a seguir, calcule e exiba sua determinante. O cálculo da determinante
 *   deve ser feito pela função determinante, que recebe por referência uma
 *   matriz 3x3 e retorna o valor inteiro referente à determinante.
 *
 *   Exemplos:
 *     Digite a linha 0: 2 3 4
 *     Digite a linha 1: 1 3 4
 *     Digite a linha 2: 5 6 7
 *     -3
 *
 *     Digite a linha 0: 1 0 0
 *     Digite a linha 1: 0 1 0
 *     Digite a linha 2: 0 0 1
 *     1
 *
 */

#include <stdio.h>

#define ARRAY_MAX 3 // Valor máximo para o tamanho do array. Não modifique.

/* Protótipos */
int determinante(int matriz[ARRAY_MAX][ARRAY_MAX])
{
  int det;
  det = matriz[0][0] * matriz[1][1] * matriz[2][2] + matriz[0][1] * matriz[1][2] * matriz[2][0] + matriz[0][2] * matriz[2][1] * matriz[1][0] - matriz[2][0] * matriz[1][1] * matriz[0][2] - matriz[2][1] * matriz[1][2] * matriz[0][0] - matriz[2][2] * matriz[0][1] * matriz[1][0];
  return det;
}

int main(int argc, char *argv[])
{
  int i, j, matriz[ARRAY_MAX][ARRAY_MAX];
  for (i = 0; i < ARRAY_MAX; i++)
  {
    printf("Digite a linha %i: ", i);
    for (j = 0; j < ARRAY_MAX; j++)
    {
      scanf("%i", &matriz[i][j]);
    }
  }
  printf("%i", determinante(matriz));

  return 0;
}
