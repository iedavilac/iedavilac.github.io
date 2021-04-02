//Este programa encuentra todas la combinaciones posibles de pares que suman a una numero


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int Ale_Ent(int p) /* Genera Num. Aleatorios Enteros */
{
	int pp;
	pp=p*(float)rand()/(RAND_MAX+1.0);
	return pp;

}

main()
{
	int x[2],i,n=10,p=0,j,tem;
	
	srand(time(NULL));
	
for(i=1;i<n;i++)
{
	x[i]=i;
}
for(j=0;j<n-1;j++) 
	for(i=j;i<n;i++) 
	if ((x[i]+x[j])==n)
	{
		printf("%d\t%d\n",x[j],x[i]);
	}
//for(i=1;i<n;i++)  printf("%d\n",x[i]);
}
