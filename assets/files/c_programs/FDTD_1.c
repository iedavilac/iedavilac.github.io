#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define KE 200 /*Numero de celdas que se usaran*/

main()
{
	float ex[KE],hy[KE],cb[KE];
	float ex_low_m1,ex_low_m2,ex_high_m1,ex_high_m2,freq_in;
	int n,k,kc,ke,NSTEPS,kstart;
	float T,ddx,dt,epsz,epsilon,sigma,eaf;
	float t0,spread,pulse;
	FILE *fp,*fopen();
	
	ddx=0.01; /*Tamaño de la celda en un 1cm*/
	dt=ddx/(2*3e8);	/*Tamaño de paso para el tiempo*/
	
	/*Parametros para la onda*/
	printf("Frecuencia de entrada (Mhz)--->");
	scanf("%f",&freq_in);
	freq_in=freq_in*1e6;
	printf("%8.0f \n",freq_in);
	
	for(k=1;k<=KE;k++){ cb[k]=0.5;
	}
	printf("El material dielectrico empieza en --->");
	scanf("%d",&kstart);
	printf("Epsilon---->");
	scanf("%f",&epsilon);
	printf("%d %6.2f \n",kstart,epsilon);
	
	for(k=kstart;k<=KE;k++){
		cb[k]=0.5/epsilon;
	}
	//for(k=1;k<=KE;k++){
	//	printf("%2d %4.2f\n",k,cb[k]);
	//}
	
	/*inicializamos*/
	for(k=1;k<KE;k++)
	{
		ex[k]=0;
		hy[k]=0;}

	
	kc=KE/2;	/*Centro del espacio de problemas*/
	t0=40.0;	/*Centro del pulso incidente*/
	spread=12;	/*ancho del pulso incidente*/
	T=0;
	NSTEPS=1;
	
	while(NSTEPS>0){
		printf("NSTEPS-->"); /*NSTEPS es el numero de iteraciones del bucle central*/
		scanf("%d",&NSTEPS);
		printf("%d \n",NSTEPS);
		n=0;
		
		for(n=1;n<=NSTEPS;n++)
		{
			T=T+1;
			/*Bucle principal FDTD*/
			for(k=1;k<KE;k++){
				ex[k]=ex[k]+cb[k]*(hy[k-1]-hy[k]);
			}
			
			/*Ponemos un pulso Gaussiano */
			
			pulse=sin(2*M_PI*freq_in*dt*T);
			ex[5]=ex[5]+pulse;
			//ex[kc+20]=pulse;	/*Poner dos fuentes en kc-20 y kc+20*/
			printf("%5.1f	%6.2f\n",t0-T,ex[kc]);
			
			/*Condiciones de absorcion en los bordes*/
			ex[0]=ex_low_m2;
			ex_low_m2=ex_low_m1;
			ex_low_m1=ex[1];
			
			ex[KE-1]=ex_high_m2;
			ex_high_m2=ex_high_m1;
			ex_high_m1=ex[KE-2];
			
			/*Calculo del campo magnetico Hy*/
			for(k=0;k<KE-1;k++)
			{
				hy[k]=hy[k]+0.5*(ex[k]-ex[k+1]);
			}
		}
	
		/*final del bucle principal*/
		
		/*Al final imprimir Ex y Hy*/
		for(k=1;k<=KE;k++)
		{
			printf("%3d	%6.2f	%6.2f\n",k,ex[k],hy[k]);
		}
	
		
		/*Escribimos el campo electrico en en un archivo Ex*/
		fp=fopen("Ex.dat","w");
		for(k=1;k<=KE;k++)
		{
			fprintf(fp,"%d\t%6.2f \n",k,ex[k]);
		}
		fclose(fp);
		/*Escribimos el campo magnetico en en un archivo Hy*/
		fp=fopen("Hy.dat","w");
		for(k=1;k<=KE;k++)
		{
			fprintf(fp,"%d\t%6.2f \n",k,hy[k]);
		}
		fclose(fp);
		
		printf("T=%5.0f\n",T);
	
	}
}

