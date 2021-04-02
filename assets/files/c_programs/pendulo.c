//-------------------------------------------------------------------
//===================================================================
// Archivo : pendulo.c
// Autor : Isai E. Davilo Cuba
//-------------------------------------------------------------------
// Este programa simula es movimiento de un pendulo para angulos pe-
// queños. Se pide ingresar la longitud de la 
// cuerda, t0, tf, el paso para el tiempo y el angulo inicial.
//===================================================================
//-------------------------------------------------------------------
#include <stdio.h>
#include <math.h>

#define PI 3.1415926535897932
#define g 9.81						// aceleracion de la gravedad

main()
{
	double omega,theta_0,x,y,vx,vy,l,theta,dtheta,t0,tf,t,dt;
	FILE *dat_pend;
	
	dat_pend=fopen("pendulo.dat","w");
	
	printf("\n Ingrese la longitud de la cuerda (l):");
	scanf("%lf",&l);
	printf("\n Ingrese t0,tf,dt:");
	scanf("%lf %lf %lf",&t0,&tf,&dt);
	printf("\n Ingrese el angulo inicial (en radianes):");
	scanf("%lf",&theta_0);
	
	if(theta_0>1) printf("Valor incorrecto para angulo inicial.\n Recuerda theta<1.");
	
	t=t0;
	omega=sqrt(g/l);
	
	printf("\n Velocidad angular:%lf",omega);
	printf("\n T=%lf",2.0*PI/omega);
	
	while(t<=tf)
	{
		theta=theta_0*cos(omega*(t-t0));
		dtheta=-omega*theta_0*sin(omega*(t-t0));
		
		x=l*sin(theta);
		y=-l*cos(theta);
		vx=l*dtheta*cos(theta);
		vy=l*dtheta*sin(theta);
		
		fprintf(dat_pend,"%lf \t %f \t %lf \t %lf \t %lf \t %lf \n",t,x,y,vx,vy,theta);
		t+=dt;
	}
	return 0;
}
