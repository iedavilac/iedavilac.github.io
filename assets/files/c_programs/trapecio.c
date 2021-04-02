#include <stdio.h>
#include <math.h>

float f(float x)
{
	return(sin(x));
}

main()
{
	float a,b,I;
	printf("Ingrese los limites de integracion a y b:\n");
	scanf("%f",&a);
	scanf("%f",&b);
	
	I=(b-a)*(f(a)-f(b))/2;
	printf("Aprox. por metodo del trapecio es:%f \n",I);
}
