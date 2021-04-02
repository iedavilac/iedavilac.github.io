#include <stdio.h>
#include <math.h>

float f(float x,float y){return(-2*pow(x,3)+12*pow(x,2)-20*x+8.5);}
float vv(float x){return(-0.5*pow(x,4)+4*pow(x,3)-10*x*x+8.5*x+1);}


main()
{
	float x[100],y[100],h,et;
	int n,i;
	printf("Ingrese n:");
	scanf("%d",&n);
	printf("Ingrese los extremos:\n");
	scanf("%f",&x[0]);
	scanf("%f",&x[n]);

y[0]=1;	
h=(x[n]-x[0])/n;
for(i=0;i<=n;i++)
{
	x[i]=x[0]+i*h;
	y[i+1]=y[i]+f(x[i],y[i])*h;
	et=100*(y[i]-vv(x[i]))/vv(x[i]);
	if(i==0) printf("%d \t %f \t %f \t %f\n",i,x[i],vv(x[i]),y[i]);
	else printf("%d \t %f \t %f \t %f \t %f\n",i,x[i],vv(x[i]),y[i],et);
	y[i]=y[i+1];
	
}
}

