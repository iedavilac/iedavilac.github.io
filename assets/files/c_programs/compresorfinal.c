#include <stdio.h>
#include <math.h>

#define k 1.17			//constante de gases adiabatico
#define Qc 800			//calor de entrega
#define Cv 20.8			//calor especifico a volumen constante
#define atm 1.05e5		//Definimos 1 atm
#define pso 0.211e6		//presion fija de entrada
#define pdo 1.275e6		//presion de salida
#define Pm 28.97

main()
{
	float i;
	float P,h;
	float Pa,Ta,Va;	
	float Pb,Tb,Vb;
	float Pc,Tc,Vc;
	float Pd,Td,Vd;
	FILE *dat;
	
	dat=fopen("datcomp.dat","w");

	
	Pa=pso/atm;			//Inicializamos la presion en atmosferas
	Va=20;
	Vb=3;
	h=0.1;
	
	// Primera fase: Compresion isentropica p=p0(V0/V)^(k)
	for(i=Va;i>=Vb+h;i-=h)
	{
		Pb=Pa*pow(i/(i-h),k);
		fprintf(dat,"%f\t%f\n",i-h,Pb);
		Pa=Pb;
	}
	// Segunda fase: El aire sale p=p0*(V0/V)
	h=4;
	Ta=293;							//Temperatura del gas en Kelvin
	Tb = Ta*pow(Va/Vb, k-1);
	Tc = Tb+Qc*Pm/Cv;
	Pc = Pb*Tc/Tb;
	Vc=Vb;
	for ( i=Tb+h; i<=Tc; i+=h) {
		Pc = Pb*i/(i-h);
		fprintf(dat,"%f\t%f\n",Vb,Pc );
		Pb = Pc;
	}
	//Tercera fase: Expansion isentropica
	h=0.1;
	Vd = Va;
	Td = Tc*pow(Vc/Vd, k-1);
	Pd = Pc*pow(Vc/Vd, k);
	for (i=Vc+h; i<=Vd; i+=h) {
		Pd = Pc*pow((i-h)/i, k);
		fprintf(dat,"%f\t%f\n",i,Pd);
		Pc = Pd;
	}
	//Cuarta fase:Ingresa aire de nuevo
	Va = Vd;
	Pa = Pd*Ta/Tb;
	h=4;
	for (i=Td-h; i>=Ta; i-=h) {
		Pa = Pd*i/(i+h);
		fprintf(dat,"%f\t %f\t \n",Va,Pa );
		Pd = Pa;
	}
	
}

