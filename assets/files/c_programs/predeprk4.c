#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "gnuplot_i.h"

double f1(double x,double y)
{
	float a=0.4,c=0.3,b=0.37,d=0.05;
	return(a*x-c*x*y);
}
double f2(double x,double y)
{
	float b=0.37,d=0.05,a=0.4,c=0.3;
	return(-b*y+d*x*y);
}
main()
{
	double k1,k2,k3,k4,l1,l2,l3,l4,co[6000],z[6000],t[6000];
	double h;
	long int i,n=5000;
	FILE *fp;

gnuplot_ctrl *h1;
h1=gnuplot_init();
	
	fp=fopen("datrung.dat","w");
	
	co[0]=3000;
	z[0]=1000;
	h=0.02;
	for(i=0;i<=n;i++)
	{
		t[i]=i*h;
		k1=f1(co[i],z[i]);
		l1=f2(co[i],z[i]);
		k2=f1(co[i]+0.5*h*k1,z[i]+0.5*h*l1);
		l2=f2(co[i]+0.5*h*k1,z[i]+0.5*h*l1);
		k3=f1(co[i]+0.5*h*k2,z[i]+0.5*h*l2);
		l3=f2(co[i]+0.5*h*k2,z[i]+0.5*h*l2);
		k4=f1(co[i]+h*k3,z[i]+h*l3);
		l4=f2(co[i]+h*k3,z[i]+h*l3);
		co[i+1]=co[i]+(h/6)*(k1+2*k2+2*k3+k4);
		z[i+1]=z[i]+(h/6)*(l1+2*l2+2*l3+l4);
		printf("%d \t %f \t %f \t %f \n",i,i*h,co[i],z[i]);
		fprintf(fp,"%f,%f,%f\n",i*h,co[i],z[i]);
		
	}
gnuplot_setstyle(h1,"lines");
gnuplot_plot_xy(h1,co,z,n,"presa");
gnuplot_plot_xy(h1,t,z,n,"depredador");

sleep(15);
gnuplot_close(h1);
}
