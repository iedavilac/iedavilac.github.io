//----------------------------------------------------------------------------
// Archivo: PEproblem4.c
// Autor: Isai E. Davila Cuba
//----------------------------------------------------------------------------
// Problema 4 de Project Euler:
// El problema pide encontrar el numero mas grande que sea palindromo resul-
// tante de la multiplicacion de dos numeros de tres cifras.
//----------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

int chk_palindrome(int num_act)
{
	int resto,reversed=0,n_temp;

	n_temp = num_act;

	while(n_temp != 0){
		resto = n_temp % 10;
		reversed = reversed*10+resto;
		n_temp /= 10;
	}
	if (num_act == reversed) return 0;
	else return 1;
}

main()
{
	int i,j,n,numero_actual,x,itemp,jtemp,ans=0;
	int palindromes[3000];

	for(i=100;i<=999;i++)
	{
		for(j=100;j<=999;j++){
			numero_actual = i*j;
			if(chk_palindrome(numero_actual)==0 && numero_actual>ans){
				//printf("%d\n",numero_actual);
				ans = numero_actual;
				//printf("%d\n",k);
			}
		}
	}
	printf("%d",ans);
}
