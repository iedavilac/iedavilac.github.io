//------------------------------------------------------+
//======================================================+
// Archivo : circulo.c									
// Autor : Isai E. Davila Cuba							
//------------------------------------------------------+
// Este programa simula un movimiento circular con velo-
// cidad angular constante. Se pide ingresar la veloci- 
// dad angular, las posiciones iniciales (x0,y0), el ra-
// dio, t0, tf, y el paso del tiempo (dt).				
//======================================================+
//------------------------------------------------------+
#include <stdio.h>
#include <math.h>		// Necesarias para funciones seno y coseno

#define PI 3.1415926535897932

main()
{
	double x0,y0,R,x,y,vx,vy,t,t0,tf,dt;
	double theta,omega;
	FILE *dat_circ;
	
	dat_circ=fopen("circulo.dat","w");
	
	printf("\n Ingrese la velocidad angular (omega):");
	scanf("%lf",&omega);
	printf("\n Ingrese el centro del circulo (x0,y0):");
	scanf("%lf %lf",&x0,&y0);
	printf("\n Ingrese el radio R:");
	scanf("%lf",&R);
	printf("\n Ingrese t0,tf,dt:");
	scanf("%lf %lf %lf",&t0,&tf,&dt);
	
	if(R<0) printf("\n Valor no permitido para el radio!!!");
	if(omega<0) printf("\n Valor no permitido para velocidad angular!!!");
	
	printf("periodo T=%lf",2.0*PI/omega);
	
	t=t0;		// Inicializamos el tiempo en t0
	// Calculos del movimiento circular
	while(t<=tf)
	{
		theta=omega*(t-t0);
		x=x0+R*cos(theta);
		y=y0+R*sin(theta);
		vx=-omega*R*sin(theta);
		vy=omega*R*cos(theta);
		fprintf(dat_circ,"%lf \t %lf \t %lf \t %lf \t %lf \t %lf \n",t,x,y,theta,vx,vy);
		t+=dt;
	}
	return 0;		// Exito en el calculo
}

// CODIGOS PARA PLOTEAR EN GNUPLOT:
// cd 'C:\Users\ISAI\Desktop\isai\PROGRAMACION\C'
// plot 'circulo.dat' using 1:2 with  lines title 'x(t)'
// replot 'circulo.dat' using 1:3 with lines title 'y(t)'

// help atan2
// x0=1;y0=1
// plot 'circulo.dat' using 1:(atan2($3-y0,$2-x0)) with lines title \
// 'theta(t)',pi,-pi

// plot 'circulo.dat' using 1:4 title 'v_x(t)' with lines
// replot 'circulo.dat' using 1:5 title 'v_y(t)' with lines
// plot 'circulo.dat' using 2:3 title 'r(t)' with lines
