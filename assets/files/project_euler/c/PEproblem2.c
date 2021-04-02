#include <stdio.h>
#include <math.h>

main()
{
	int sig,ant=0,seg=1,s=0;
	int i,n=4000000;
	
	//F[1]=1;
	
	while(sig<n)
	{
		sig=ant+seg;
		//printf("%d\n",sig);
		ant=seg;
		seg=sig;
		if(sig % 2==0) s+=sig;
	}
	
	printf("La suma es %d",s);
}
