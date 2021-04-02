//====================================================================
//--------------------------------------------------------------------
// Archivo : anisotropic_oscilator.c
// Autor : Isai E. Davila Cuba
//--------------------------------------------------------------------
// Este programa simula el comportamiento de un oscilador anisotropico
// con frecuencias 1 y 2. Como se sabe el grafico del desplazamiento
// son las conocidas figuras de Lissajous. Se pide ingresar las fre-
// cuencias del oscilador, t0, tf y dt.
//--------------------------------------------------------------------
//====================================================================

#include <stdio.h>
#include <math.h>

#define PI 3.1415926535897932

main()
{
	double omega1,omega2,x0,y0,x,y,t0,tf,t,vx,vy,dt;
	double T1,T2;
	FILE *dat_oscilador;
	
	dat_oscilador=fopen("osciladorani.dat","w");
	
	printf("Oscilador harmonico anisotropico\n");
	
	printf("\n Ingrese frecuencia angular 1: ");
	scanf("%lf",&omega1);
	printf("\n Ingrese frecuencia angular 2: ");
	scanf("%lf",&omega2);
	printf("\n Ingrese t0,tf,dt: ");
	scanf("%lf %lf %lf",&t0,&tf,&dt);
	
	T1=2*PI/omega1;
	T2=2*PI/omega2;
	printf("\n DATOS ESPECIFICADOS:");
	printf("\n o1=%lf \n o2=%lf \n t0=%lf \n tf=%lf \n dt=%lf",omega1,omega2,t0,tf,dt);
	printf("\n T1=%lf \n T2=%lf",T1,T2);
	
	t=t0;
	
	while(t<=tf)
	{
		x=cos(omega1*t);
		y=sin(omega2*t);
		vx=-omega1*sin(omega1*t);
		vy=omega2*cos(omega2*t);
		fprintf(dat_oscilador,"%lf\t%lf\t%lf\t%lf\t%lf\n",t,x,y,vx,vy);
		t+=dt;
	}
	return 0;
}
// CODIGOS PARA GRAFICAR EN GNUPLOT
// # GRAFICAR X(t):
//  > plot 'osciladorani.dat' using 1:2 w l title 'x(t)'
// # GRAFICAR Y(t):
//  > replot 'osciladorani.dat' using 1:3 w l title 'y(t)'
// # GRAFICAR X-Y (FIGURAS DE LISSAJOUS):
//  > set xrange [-1.1:1.1]; set yrange [-1.1:1.1]
//  > plot 'osciladorani.dat' using 2:3 w l title 'x-y'
