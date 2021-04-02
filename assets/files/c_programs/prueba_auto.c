#include <stdio.h>
#include <math.h>
#include <conio.h>
            

main()
{
	int i,j;
	double vec1[200],vec2[200],vec3[200],vec4[200],mat[200][200];
	
	
	FILE *dat;

dat=fopen("iris_3_2.data","r");

if(dat==NULL) printf("No se pudo leer el archivo\n");


// Guardamos cada columna de iris en un vector
for(i=0;i<150;i++)
{
	
	fscanf(dat,"%lf %lf %lf %lf ",&vec1[i],&vec2[i],&vec3[i],&vec4[i]);
	//printf("%.1f\t%.1f\t%.1f\t%.1tf\n",vec1[i],vec2[i],vec3[i],vec4[i]);
	//printf("\n");
}
//.....................................................
// Promediamos los valores de cada columna
printf("\nPROMEDIOS\n");
double sum1=0,sum2=0,sum3=0,sum4=0;
double prom1,prom2,prom3,prom4;
for(i=0;i<150;i++) sum1+=vec1[i];
for(i=0;i<150;i++) sum2+=vec2[i];
for(i=0;i<150;i++) sum3+=vec3[i];
for(i=0;i<150;i++) sum4+=vec4[i];

prom1=sum1/150;
prom2=sum2/150;
prom3=sum3/150;
prom4=sum4/150;
printf("%f\t%f\t%f\t%f\n",prom1,prom2,prom3,prom4);

//.....................................................
// Centramos los datos
printf("DATOS CENTRADOS\n");
for(i=0;i<150;i++)
{
	vec1[i]=vec1[i]-prom1;
	vec2[i]=vec2[i]-prom2;
	vec3[i]=vec3[i]-prom3;
	vec4[i]=vec4[i]-prom4;
	printf("%f\t%f\t%f\t%f\n",vec1[i],vec2[i],vec3[i],vec4[i]);
}
//....................................................
// Guardamos estos vectores en mat[i][j]
printf("MATRIZ DE 150x4\n");
for(i=0;i<150;i++)
{
	mat[i][0]=vec1[i];
	mat[i][1]=vec2[i];
	mat[i][2]=vec3[i];
	mat[i][3]=vec4[i];
}
for(i=0;i<150;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%.3lf\t",mat[i][j]);
		}
		printf("\n");
	}
//.....................................................
// Hallamos la transpuesta de la matriz mat[i][j]
printf("MATRIZ TRANSPUESTA\n");
double m_transp[200][200];
for(j=0;j<4;j++)
	{
		for(i=0;i<150;i++)
		{
			m_transp[j][i]=mat[i][j];
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<150;j++)
		{
			printf("%.3lf\t",m_transp[i][j]);
		}
		printf("\n");
	}
//....................................................
//Hallamos la matriz de covarianza
printf("MATRIZ DE COVARIANZA (solo se imprimen 10x10)\n");
double C[200][200],sum=0;
int k;
for(i=0;i<150;i++)
{

	for(j=0;j<150;j++)
	{
	for (k=0;k<4;k++)
	{
 		sum+=mat[i][k]*m_transp[k][j];	


	}
	C[i][j]=sum/149;
	sum=0;
}
}
for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("%.3lf\t",C[i][j]);
		}
		printf("\n");
	}	
	
// CALCULO DE LOS AUTOVALORES

	int n=150,r=0;
    float x[200],z[200],e[200],zmax,emax,lambda[200];
	x[0]=0;
	for(i=1;i<n;i++) x[i]=1;
    
    while(emax>0.001);
    {
	
        for(i=0; i<n; i++)
        {
            z[i]=0;
            lambda[i]=0;
            for(j=0; j<n; j++)
            {
                z[i]=z[i]+C[i][j]*x[j];
            }
        }
        lambda[r]=fabs(z[0]);
        for(i=1; i<n; i++)
        {
            if((fabs(z[i]))>lambda[k])
                lambda[r]=fabs(z[i]);
        }
        for(i=0; i<n; i++)
        {
            z[i]=z[i]/zmax;
        }
        for(i=0; i<n; i++)
        {
            e[i]=0;
            e[i]=fabs((fabs(z[i]))-(fabs(x[i])));
        }
        emax=e[0];
        for(i=1; i<n; i++)
        {
            if(e[i]>emax)
                emax=e[i];
        }
        for(i=0; i<n; i++)
        {
            x[i]=z[i];
        }
        r++;
    }
    
    //printf("\n El autovalor mas grande es : %f",zmax);
    for(i=0;i<n;i++)
	printf("%f\n",lambda[i]);
    
    getch();
    

return 0;
}
