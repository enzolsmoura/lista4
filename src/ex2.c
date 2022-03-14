/*
 * Enunciado:
 * Desenvolva um programa capaz de ler n valores inteiros e os insira em um
 * array. A leitura deve ser feita de acordo com o programa feito no ex1.
 * Após a leitura, desenvolva a função calcula_media e calcula_dvp
 * para calcular a média e o desvio padrão dos valores informados.
 * O programa principal deve receber os valores lidos pelo array e retornar a
 * média e o desvio padrão no seguinte formato: MÉDIA +- DVP
 *
 * Exemplos:
 *    Digite os valores para o array: 1 2 3 4 5 6 7 -100
 *    4.00 +- 1.7
 *
 *    Digite os valores para o array: 1 1 1 1 1 1 1 1 1 1 1 -100
 *    1.00 +- 0.0
 *
 *    Digite os valores para o array: 10 20 1 40 50 90 100 -100
 *    44.43 +- 29.8
 *
 */

#include <stdio.h>
#include <math.h> // A biblioteca math tem pow e sqrt

#define ARRAY_MAX 100 // Valor máximo para o tamanho do array. Não modifique.

/* Protótipos */



float calcula_media(int array[], int tam_array)
{
  float media,total;
  int i;
  total = 0.0;
  for(i=0;i<tam_array;i++){
    total += array[i];
  }
  media = total/tam_array;
  return media;
  
}

float calcula_dvp(int array[], int tam_array)
{
  float dvp,media,total;
  int i;
  total = 0.0;
  media = calcula_media(array,tam_array);
  for(i=0;i<tam_array;i++){
    total += pow((array[i]-media),2.0);
  }
  dvp = sqrt(total/tam_array);
  return dvp;
}

int main(int argc, char *argv[])
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
  printf("%.2f +- %.1f",calcula_media(array,i),calcula_dvp(array,i));

  return 0;
}



