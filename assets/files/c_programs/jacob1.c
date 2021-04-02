#include <stdio.h>
#include <math.h>
#include <conio.h>

void determinante(double *a,int n,double *det);
int bisect(double *x,double *xl,double *xu,int nb,double (*fun)(double));
double matriz(double x)
{
	int i,j,n=3;
	double det,a[]={2.3,6.7,7.8,
					6.7,3.5,1.5,
					7.8,1.5,2.2};
	
	for(i=0;i<n;i++) a[i*n+1]-=x;
	determinante(a,n,&det);
	return det;
}

void determinante(double *a,int n,double *det)
{
	int i,j,k;
	
	for(k=0;k<n-1;k++)
	for(i=k+1;i<n;i++)
	for(j=k+1;j<n;j++)
		a[i*n+j]=a[i*n+j]-(a[i*n+k]/a[k*n+k])*a[k*n+j];
	*det=1.;
	for(i=0;i<n;i++) (*det)*=a[i*n+i];
}

main()
{
	int i,n,stat,count=0,nb=10;
	double xmin,xmax,xl,xu,x,y1,y2,h;
	
	printf("Ingrese limite inferior: ");
	scanf("%lf",&xmin);
	printf("Ingrese limite superior: ");
	scanf("%lf",&xmax);
	printf("Ingrese numero de puntos: ");
	scanf("%d",&n);
	
	h=(xmax-xmin)/n;
	y1=matriz(xmin);
	for(i=1;i<=n;i++)
	{
		y2=matriz(xmin+i*h);
		if(y1*y2<=0)
		{
			xl=xmin+(i-1)*h;
			xu=xmin+i*h;
			
			stat=bisect(&x,&xl,&xu,nb,matriz);
			if(stat==1)
			{
				count++;
				printf("\nAutovalor %d:%10.10e",count,x);
			}
			else
			{
				printf("\nAutovalores no encontrados entre %lf y %lf",xl,xu);
			}
		}
		y1=y2;
	}
	getch();
}

int bisect(double *x,double *xl,double *xu,int nb,double (*fun)(double))
{
	int i;
	double fxl,fxu,fx;
	
	if(nb<0||nb>12) nb=12;
	fxl=fun(*xl);
	fxu=fun(*xu);
	
	if(fxl==0.)
	{
		*x=*xl;
		return 1;
	}
	else
	if(fxu==0.)
	{
		*x=*xu;
		return 1;
	}
	
	if(fxl>0.==fxu>0.)	return 0;
	
	for(i=0;i<nb;i++)
	{
		*x=((*xl)+(*xu))/2;
		fx=fun(*x);
		if(fx==0.) return 1;
		if(fx>0.==fxu>0.)
		{
			*xu=*x;
			fxu=fx;
		}
		else
		{
			*xl=*x;
			fxl=fx;
		}
	}
	*x=(fxu*(*xl)-fxl*(*xu))/(fxu-fxl);
	return 1;
}
