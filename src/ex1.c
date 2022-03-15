/* Enunciado: Desenvolva um programa capaz de ler n valores inteiros e os
 *  insira em um array. A leitura deve ser feita em uma única linha, separando 
 *  os valores por espaço. A leitura deve ser encerrada quando um 
 *  valor -100 é lido. Após a leitura ser realizada, o programa deve utilizar 
 *  o procedimento exibe_array para exibir o array em uma única linha 
 *  e entre colchetes.
 *
 *  Exemplos:
 *    Digite os valores para o array: 1 2 3 4 5 6 7 8 -100
 *    [1, 2, 3, 4, 5, 6, 7, 8]
 *
 *    Digite os valores para o array: 1 2 3 4 -100
 *    [1, 2, 3, 4]
 *
 */

#include <stdio.h>

#define ARRAY_MAX 100 // Valor máximo para o tamanho do array. Não modifique.

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
  int array[ARRAY_MAX];
  int i;
  int a;
  i = 0;
  a = 0;
  printf("Digite os valores para o array: ");
  do{
    scanf("%i",&a);
    if(a==-100){
      break;
    }
    array[i] = a;
    i += 1;
  }while(i<ARRAY_MAX);
  exibe_array(array, i);
  return 0;
}
