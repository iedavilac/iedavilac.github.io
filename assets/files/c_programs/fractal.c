#include<stdio.h>
#include <math.h>
#include <stdlib.h>

float f(float x)
{
	return cos(x);
}
main()
{
	int i,n=1000;
	float frac,a,x[n],y[n];
	FILE *fp;
	
	fp=fopen("fractal.dat","w");
	x[0]=0;
	y[0]=0;
	for(i=0;i<=n;i++) 
	{
		x[i+1]=pow(x[i],2)-pow(y[i],2)-0.32125897;
		y[i+1]=2*x[i]*y[i]+0.55;
		//frac=pow(f(a),2)+2;
		//a=frac;
		printf("%f\t %f\n",x[i],y[i]);
		fprintf(fp,"%f\t%f\n",x[i],y[i]);
	}

}
