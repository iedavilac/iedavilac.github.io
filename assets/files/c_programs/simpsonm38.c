#include <stdio.h>
#include <math.h>

float f(float x)
{
	return(0.2+25*x-200*pow(x,2)+675*pow(x,3)-900*pow(x,4)+400*pow(x,5));
}

main()
{
	float I,x[5],sum1=0,sum2=0,sum3=0,h;
	int i,j,k,n;
	
	printf("Ingrese n:\n");
	scanf("%d",&n);
	printf("Ingrese los extremos\n");
	scanf("%f",&x[0]);
	scanf("%f",&x[n]);
	
	
	h=(x[n]-x[0])/n;
	
	for(i=1;i<=n-2;i=i+3)
	{
		x[i]=x[0]+i*h;
		sum1=sum1+f(x[i]);
	}
	for(j=2;j<=n-1;j=j+3)
	{
		x[j]=x[0]+j*h;
		sum2=sum2+f(x[j]);
	}
	for(k=3;k<=n-3;k=k+3)
	{
		x[k]=x[0]+k*h;
		sum3=sum3+f(x[k]);
	}
	
	I=(3/8)*h*(f(x[0])+3*sum1+3*sum2+2*sum3+f(x[n]));
	printf("Aprox. por Simpson 3/8 multiple =%f",I);
	
}
