/* Enunciado:
 *  Desenvolva um programa capaz de ler os valores de uma matriz m x n. 
 *  A leitura deve ser feita em uma linha para cada linha da matriz (ver ex1).
 *  A condição de parada para a leitura das linhas é uma linha vazia
 *  (apenas com -100). O programa deve assumir que a quantidade de colunas
 *  da primeira linha define a dimensão da matriz, ou seja, qualquer linha 
 *  subsequente que não tenha a mesma quantidade de linhas da linha inicial
 *  deve causar um erro e o encerramento do programa. Após a leitura da matriz,
 *  ela deve ser exibida seguindo o padrão mostrado nos exemplos a seguir.
 *
 *  Exemplos:
 *
 *   Linha 0: 1 1 1 -100
 *   Linha 1: 2 2 2 -100
 *   Linha 2: 3 3 3 -100
 *   Linha 3: -100
 *   [[1, 1, 1],
 *   [2, 2, 2],
 *   [3, 3, 3]]
 *
 *   Linha 0: 1 1 1 1 1 -100
 *   Linha 1: 1 2 3 -100
 *   Número de colunas incompatível. Saindo...
 *
 *   Linha 0: 1 2 3 4 5 6 7 8 -100
 *   Linha 1: 8 7 6 5 4 3 2 1 -100
 *   Linha 2: -100
 *   [[1, 2, 3, 4, 5, 6, 7, 8],
 *   [8, 7, 6, 5, 4, 3, 2, 1]]
 *
 */

#include <stdio.h>

#define ARRAY_MAX 100 // Valor máximo para o tamanho do array. Não modifique.

/* Protótipos */

int main (int argc, char *argv[])
{
  int array[ARRAY_MAX][ARRAY_MAX],tamanho[ARRAY_MAX],i,j,a;
  j = 0;


 
  for(i=0;i<ARRAY_MAX;i++){
    printf("Linha %i: ", i);
    for(j=0;j<ARRAY_MAX;j++){
      scanf("%i",&a);
      if(a==-100){
        break;
      }
      array[i][j] = a;
    }
    tamanho[i] = j; // armazena o numero de elementos no array de tamanhos

    if(j==0&&a==-100){
      break;
    }

    if(tamanho[i-1]!=tamanho[i]){
      printf("Número de colunas incompatível. Saindo...");
      break;
    }
     
    
  }
  




  return 0;
}
