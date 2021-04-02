#include <stdio.h>
#include <math.h>
//#include "gnuplot_i.h"

double f1(double t,double x,double y,double z)
{
	float s=10,r=20,b=8/3;
	return s*(-x+y);
}
double f2(double t,double x,double y,double z)
{
	float s=10,r=20,b=8/3;
	return r*x-y-x*z;
}
double f3(double t,double x,double y,double z)
{
	float s=10,r=20,b=8/3;
	return -b*z+x*y;
}

main()
{
	int n=5000,i;	
	double x[n],y[n],z[n],h,t[n],k1,k2,k3,k4,l1,l2,l3,l4,m1,m2,m3,m4;
	//FILE *f;
	
	//f=fopen("lorenzrk4.dat","w");

//gnuplot_ctrl *h1;
//h1=gnuplot_init();

h=0.004;

x[0]=y[0]=z[0]=5;
for(i=0;i<=n;i++)
{
	t[i]=i*h;
	k1=f1(t[i],x[i],y[i],z[i]);
	l1=f2(t[i],x[i],y[i],z[i]);
	m1=f3(t[i],x[i],y[i],z[i]);
	k2=f1(t[i]+0.5*h,x[i]+0.5*h*k1,y[i]+0.5*h*l1,z[i]+0.5*h*m1);
	l2=f2(t[i]+0.5*h,x[i]+0.5*h*k1,y[i]+0.5*h*l1,z[i]+0.5*h*m1);
	m2=f3(t[i]+0.5*h,x[i]+0.5*h*k1,y[i]+0.5*h*l1,z[i]+0.5*h*m1);
	k3=f1(t[i]+0.5*h,x[i]+0.5*h*k2,y[i]+0.5*h*l2,z[i]+0.5*h*m2);
	l3=f2(t[i]+0.5*h,x[i]+0.5*h*k2,y[i]+0.5*h*l2,z[i]+0.5*h*m2);
	m3=f3(t[i]+0.5*h,x[i]+0.5*h*k2,y[i]+0.5*h*l2,z[i]+0.5*h*m2);
	k4=f1(t[i]+0.5*h,x[i]+h*k3,y[i]+h*l3,z[i]+h*m3);
	l4=f2(t[i]+0.5*h,x[i]+h*k3,y[i]+h*l3,z[i]+h*m3);
	m4=f3(t[i]+0.5*h,x[i]+h*k3,y[i]+h*l3,z[i]+h*m3);
	x[i+1]=x[i]+(h/6)*(k1+2*k2+2*k3+k4);
	y[i+1]=y[i]+(h/6)*(l1+2*l2+2*l3+l4);
	z[i+1]=z[i]+(h/6)*(m1+2*m2+2*m3+m4);
	//fprintf(f,"%.6f \t %.6f \t %.6f",x[i],y[i],z[i]);
	printf("%d \t %f \t %f \t %f \t %f \n",i,t[i],x[i],y[i],z[i]);
}
//gnuplot_setstyle(h1,"lines");
//gnuplot_plot_xy(h1,t,x,n);

//sleep(10);
//gnuplot_close(h1);
}
