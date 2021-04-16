//----------------------------------------------------------------------------
// Archivo: PEproblem7.c
// Autor: Isai E. Davila Cuba
//----------------------------------------------------------------------------
// Problema 7 de Project Euler:
// El problema pide encontrar el 10001 avo primo.
//----------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int chk_prime(int num)
{
  int k;
  int c=0;
  if(num % 2 == 0) return 1;
  for(k=3;k<=round(sqrt(num));k+=2){  // Aumenta la velocidad dramáticamente!.
    if(num % k == 0) c+=1;
  }
  if(c==0) return 0;
  else return 1;
}

int main() {

  int num_act = 3;
  int counter = 1;

  while(counter < 10001){
    if(chk_prime(num_act)==0) counter +=1;
    num_act +=1;
  }
  printf("El %d primo es %d",counter,num_act-1); // Restamos uno porque al final del while cuando counter = 10001 pasa y num_act aumenta en 1.
  // 104743
  return 0;
}
