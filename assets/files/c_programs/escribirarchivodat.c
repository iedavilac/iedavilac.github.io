#include <stdio.h>
#include <math.h>
#include <stdlib.h>

main()
{
	FILE *fp;
	int i;
	
	fp=fopen("resultados.dat","w");
	if(fp==NULL)
	{
		printf("No se pudo abrir resultados.dat para escritura.\n");
		exit(0);
	}
	for(i=0;i<=10;i++) fprintf(fp, "%d, %d\n", i, i*i);
	
	//fclose(fp);
	
	return(0);
}
