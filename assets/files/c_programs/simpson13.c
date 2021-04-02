#include <stdio.h>
#include <math.h>
float f(float x)
{
	return(0.2+25*x-200*pow(x,2)+675*pow(x,3)-900*pow(x,4)+400*pow(x,5));
}

main()
{
	float x[3],h,I;
	int i;
	printf("Ingrese los extremos:\n");
	for(i=0;i<=1;i++)
	{
		printf("x[%d]:",i);
		scanf("%f",&x[i]);
	}
	x[2]=(x[0]+x[1])/2;
	h=(x[1]-x[0])/2;
	I=(h/3)*(f(x[0])+4*f(x[2])+f(x[1]));
	printf("%f \t %f\n",h,x[2]);
	printf("Aprox. por Simpson 1/3=%f",I);
	
}
