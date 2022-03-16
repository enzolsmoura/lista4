/* Enunciado:
 * Desenvolva um programa capaz de ler os valores inteiros de duas
 * matrizes 3x3 e, a seguir, exiba a matriz resultante da multiplicação entre
 * elas.
 * 
 * Dica: talvez seja útil transpor a segunda matriz.
 * 
 * 
 * Exemplos:
 * 
 * 
 *    Digite a linha 0: 1 0 0
 *    Digite a linha 1: 0 1 0
 *    Digite a linha 2: 0 0 1
 *    Digite a linha 0: 1 1 1
 *    Digite a linha 1: 2 2 2
 *    Digite a linha 2: 3 3 3
 *    [[1, 1, 1],
 *    [2, 2, 2],
 *    [3, 3, 3]]
 * 
 *    
 */

#include <stdio.h>

#define ARRAY_MAX 3 // Valor máximo para o tamanho do array. Não modifique.

/* Protótipos */

int produto_escalar(int array[], int array2[]){
  int produto_escalar;
  int i;
  produto_escalar = 0;
  for(i=0;i<ARRAY_MAX;i++){
    produto_escalar += array[i]*array2[i];
  }
  return produto_escalar;
}

void exibe_array(int array[], int tam_array){
  int j;
  printf("[");
  for(j=0;j<tam_array-1;j++){
    printf("%i, ", array[j]);
  }
  printf("%i]",array[j]);
}

void multiplica_array(int array[][ARRAY_MAX], int array2[][ARRAY_MAX]){
  int i,j,soma,array_mult[ARRAY_MAX][ARRAY_MAX];
  soma = 0;
  for(i = 0; i<ARRAY_MAX ; i++){
    for(j = 0; j<ARRAY_MAX; j++){
      soma = 0;
      soma += produto_escalar(array[i],array2[j]);
      array_mult[i][j] = soma;
    }
  }
  printf("[");
  for(j=0;j<i-1;j++){
    exibe_array(array_mult[j],ARRAY_MAX);
    printf(",\n");
  }
  exibe_array(array_mult[j],ARRAY_MAX);
  printf("]");
}
    
int main (int argc, char *argv[])
{
  int i,j,array[ARRAY_MAX][ARRAY_MAX], array2[ARRAY_MAX][ARRAY_MAX];
  for(i=0;i<ARRAY_MAX;i++){
    printf("Digite a linha %i: ",i);
    for(j=0;j<ARRAY_MAX;j++){
      scanf("%i",&array[i][j]);
    }
  }
  for(i=0;i<ARRAY_MAX;i++){
    printf("Digite a linha %i: ",i);
    for(j=0;j<ARRAY_MAX;j++){
      scanf("%i",&array2[j][i]);
    }
  }
  multiplica_array(array,array2);
  return 0;
}
