/* Enunciado:
 *  Desenvolva um programa capaz de ler dois vetores com três elementos
 *  inteiros cada. A leitura deve ser feita em uma única linha para cada vetor,
 *  com os elementos separados por espaços. Após a leitura, o programa
 *  deve exibir o produto escalar entre os vetores digitados no formato
 *  exemplificado abaixo. O cálculo do produto escalar deve obrigatoriamente
 *  ser feito pela função produto_escalar, que recebe como referência os
 *  dois arrays e retorna um valor inteiro referente ao resultado do produto
 *  escalar.
 *
 *  Exemplos:
 *      Digite o primeiro array: 1 2 3
 *      Digite o segundo array: 3 2 1
 *      [1, 2, 3] . [3, 2, 1] = 10
 *
 *      Digite o primeiro array: 10 20 30
 *      Digite o segundo array: -10 2 5
 *      [10, 20, 30] . [-10, 2, 5] = 90
 *
 */

#include <stdio.h>
#include <math.h>

#define ARRAY_MAX 3 // Valor máximo para o tamanho do array. Não modifique.

/* Protótipos */
int produto_escalar(int array[], int array2[]);

int produto_escalar(int array[], int array2[])
{
  int produto_escalar;
  int i;
  produto_escalar = 0;
  for (i = 0; i < ARRAY_MAX; i++)
  {
    produto_escalar += array[i] * array2[i];
  }
  return produto_escalar;
}

int main(int argc, char *argv[])
{
  int a, i;
  int array[ARRAY_MAX], array2[ARRAY_MAX];
  printf("Digite o primeiro array: ");
  for (i = 0; i < ARRAY_MAX; i++)
  {
    scanf("%i", &a);
    array[i] = a;
  }
  printf("Digite o segundo array: ");
  for (i = 0; i < ARRAY_MAX; i++)
  {
    scanf("%i", &a);
    array2[i] = a;
  }

  printf("[");
  for (i = 0; i < ARRAY_MAX - 1; i++)
  {
    printf("%i, ", array[i]);
  }
  printf("%i] . [", array[i]);

  for (i = 0; i < ARRAY_MAX - 1; i++)
  {
    printf("%i, ", array2[i]);
  }
  printf("%i] = %i", array2[i], produto_escalar(array, array2));

  return 0;
}
