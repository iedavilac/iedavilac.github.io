//-----------------------------------------------------------------
//=================================================================
// Archivo : movparabolico.c
// Autor : Isai E. Davila Cuba
//-----------------------------------------------------------------
// Este programa simula el movimiento parabolico despreciando la 
// resistencia del aire. Se pide ingresar el angulo de lanzamiento,
// la velocidad del lanzamiento, el tiempo inicial ( no necesaria-
// mente 0), el tiempo final y el paso del tiempo.
//=================================================================
//-----------------------------------------------------------------
#include <stdio.h>
#include <math.h>

#define PI 3.1415926535897932
#define g 9.81					// Aceleracion de la gravedad

main()
{
	double x0,y0,x,y,t,t0,tf,dt,theta,vx,vy,v0,v0x,v0y;
	FILE *dat_proyectil;
	
	dat_proyectil=fopen("proyectil.dat","w");
	
	printf("\n Ingrese el angulo de lanzamiento (en grados) :");
	scanf("%lf",&theta);
	printf("\n Ingrese la velocidad inicial de lanzamiento (v0): ");
	scanf("%lf",&v0);
	printf("\n Ingrese t0,tf,el paso del tiempo dt:");
	scanf("%lf %lf %lf",&t0,&tf,&dt);
	
	v0x=v0*cos(theta*PI/180);
	v0y=v0*sin(theta*PI/180);
	
	printf("\n v0x=%lf\nv0y=%lf\ntheta=%.0lf\nt0=%lf\ntf=%lf\ndt=%lf",v0x,v0y,theta,t0,tf,dt);
	
	t=t0;
	while(t<=tf)
	{
		x=v0x*t;
		y=v0y*t-0.5*g*t*t;
		vx=v0x;
		vy=v0y-g*t;
		fprintf(dat_proyectil,"%lf\t%lf\t%lf\t%lf\t%lf\n",t,x,y,vx,vy);
		t+=dt;
	}
	return 0;
}
// CODIGOS PARA PLOTEAR EN GNUPLOT
//---------------------------------
// # PLOTEAR X Y EN FUNCION DEL TIEMPO
// > plot 'proyectil.dat' using 1:2 w l title 'x(t)'
// > replot 'proyectil.dat' using 1:3 w l title 'y(t)'

// # PLOTEAR EL VECTOR DESPLAZAMIENTO
// > plot 'proyectil.dat' using 2:3 w l title 'x-y'

// # PLOTEAR LAS COMPONENTES DE LA VELOCIDAD EN FUNCION DEL TIEMPO
// > plot 'proyectil.dat' using 1:4 w l title 'v_x(t)'
// > replot 'proyectil.dat' using 1:5 w l title 'v_y(t)'
