/* Enunciado:
 * Desenvolva um programa capaz de ler os valores inteiros de uma matriz 3x3 
 * e, a seguir, exiba a sua forma transposta
 *
 * Exemplos: 
 *
 *
 *    Digite a linha 0: 1 2 3
 *    Digite a linha 1: 4 5 6
 *    Digite a linha 2: 7 8 9
 *    [[1, 4, 7],
 *    [2, 5, 8],
 *    [3, 6, 9]]
 *    
 *    Digite a linha 0: 1 0 0
 *    Digite a linha 1: 0 1 0
 *    Digite a linha 2: 0 0 1
 *    [[1, 0, 0],
 *    [0, 1, 0],
 *    [0, 0, 1]]
 *    
 */

#include <stdio.h>

#define ARRAY_MAX 3 // Valor máximo para o tamanho do array. Não modifique.

/* Protótipos */
void exibe_array(int array[], int tam_array){
  int j;
  printf("[");
  for(j=0;j<tam_array-1;j++){
    printf("%i, ", array[j]);
  }
  printf("%i]",array[j]);
}

int main (int argc, char *argv[])
{
  int i,j,array[ARRAY_MAX][ARRAY_MAX];
  for(i=0;i<ARRAY_MAX;i++){
    printf("Digite a linha %i: ",i);
    for(j=0;j<ARRAY_MAX;j++){
      scanf("%i",&array[j][i]);
    }
  }
  printf("[");
  for(j=0;j<i-1;j++){
    exibe_array(array[j],ARRAY_MAX);
    printf(",\n");
  }
  exibe_array(array[j],ARRAY_MAX);
  printf("]");
  return 0;
}
