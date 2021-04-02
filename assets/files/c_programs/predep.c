#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//#include "gnuplot_i.h"

main()
{
	double a=0.4,b=0.37,c=0.3,d=0.05,co[6000],z[6000],h,t0=0,tn=100,t[6000];
	int i,n=5000;
	FILE *file;

//gnuplot_ctrl *h1;
//h1=gnuplot_init();
	
	file=fopen("datos.dat","w");
	//for(i=0;i<=n;i++) fprintf(file,"%d,%f\n",i,co[i]);
	h=(tn-t0)/n;
	co[0]=300;
	z[0]=100;
	
	for(i=0;i<=n;i++)
	{
		t[i]=i*h;
		co[i+1]=co[i]+h*co[i]*(a-c*z[i]);
		z[i+1]=z[i]+h*z[i]*(-b+d*co[i]);
		printf("%d \t %lf \t %lf \n",i,co[i],z[i]);
		fprintf(file,"%lf,%lf,%lf\n",t[i],co[i],z[i]);
	}
//gnuplot_setstyle(h1,"lines");
//gnuplot_plot_xy(h1,t,co,n,"presa");
//gnuplot_plot_xy(h1,t,z,n,"depredador");

//sleep(5);
//gnuplot_close(h1);
}
