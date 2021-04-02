#include <stdio.h>
#include <math.h>
 
main(){
	int i,j,n;
	double a[30][30],b[30],x[30],tol,suma,xant;
	
	printf("Orden del sistema:_");
	scanf("%d",&n);
	printf("Ingresa la tolerancia:_");
	scanf("%lf",&tol);
	
	printf("\nIngresa los coeficientes\n");
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			printf("a[%d][%d]:_",i,j);
			scanf("%lf",&a[i][j]);
		}
	}
	
	printf("\nIngresa los terminos independientes\n");
	for(i=1; i<=n; i++){
		printf("b[%d]:_",i);
		scanf("%lf",&b[i]);
	}
	
	for(i=1;i<=n;i++)
		x[i]=0;		
	
	do{
		xant=x[n];
		for(i=1;i<=n;i++){
			suma=0;
			for(j=1;j<=n;j++){
				if(i!=j)
				suma=suma-((a[i][j]*x[j])/a[i][i]);
			}
			x[i]=b[i]/a[i][i]+suma;
		}
	}while( fabs((x[n]-xant)/x[n]*100) > tol );
	
	printf("\n\n El vector resultado es:\n");
	for(i=1;i<=n;i++)
		printf("x[%d]:%lf\n",i,x[i]);
 
	printf("\n\n");
}
