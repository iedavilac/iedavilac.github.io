#include <stdio.h>
#include <math.h>

float f(float x)
{
	return(2*x);
}

main()
{
	float h,a,b,sum=0,I,x[100],et,vv=3.5;
	int i,n;
	printf("Ingrese el numero de iteraciones:\n");
	scanf("%d",&n);
	printf("Ingrese los extremos:\n");
	scanf("%f",&x[0]);
	scanf("%f",&x[n]);
	
	h=(x[n]-x[0])/n;
	
	for(i=1;i<=n-1;i++)
	{
		x[i]=x[0]+i*h;
		sum=sum+f(x[i]);
		I=(h/2)*(f(x[0])+2*sum+f(x[n]));
		printf("%d \t %f \t %f \n",i,x[i],I,et);
		x[i]=x[0]+i*h;
	}
}
