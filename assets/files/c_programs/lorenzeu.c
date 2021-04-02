#include <stdio.h>
#include <math.h>
#include<stdlib.h>
#include "gnuplot_i.h"

double f1(double t,double x,double y,double z)
{
	float s=10,r=28,b=2.666667;
	return s*(-x+y);
}
double f2(double t,double x,double y,double z)
{
	float s=10,r=28,b=2.666667;
	return r*x-y-x*z;
}
double f3(double t,double x,double y,double z)
{
	float s=10,r=28,b=2.666667;
	return -b*z+x*y;
}
main()
{
	int n=5000,i;	
	double x[n],y[n],z[n],h,t[n];
	FILE *fp;
	
	fp=fopen("lorenzeudat.dat","w");

gnuplot_ctrl *h1;
h1=gnuplot_init();

h=0.004;
x[0]=y[0]=z[0]=5;
for(i=0;i<=n;i++)
{
	t[i]=i*h;
	x[i+1]=x[i]+f1(t[i],x[i],y[i],z[i])*h;
	y[i+1]=y[i]+f2(t[i],x[i],y[i],z[i])*h;
	z[i+1]=z[i]+f3(t[i],x[i],y[i],z[i])*h;
	printf("%d \t %lf \t %lf \t %lf \t %lf \n",i,t[i],x[i],y[i],z[i]);
	fprintf(fp,"%f\t%f\t%f\t%f",t[i],x[i],y[i],z[i]);
}
gnuplot_setstyle(h1,"lines");
gnuplot_plot_xy(h1,t,x,n,);

sleep(15);
gnuplot_close(h1);
} 
