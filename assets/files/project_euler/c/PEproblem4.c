//Project Euler problema 4: Encuentre el palindromo mas grande
//que es multiplicacion de dos numeros de 3 cifras.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))

int palindromo(int nro)
{
    char n[12],a[12];
    int m;
    sprintf(n,"%d",nro);

    strcpy(a,n);
    strrev(a);
    if(strcmp(n,a)==0) m=0;
    else m=1;
    return m;
}

main()
{
    int a,b,i,n;
    int v[3];
    int m;

    printf("Ingrese el numero de cifras: ");
    scanf("%d",&n);


    for(a=pow(10,n-1);a<pow(10,n);a++)
        for(b=pow(10,n-1);b<pow(10,n);b++)
        {
            if(a!=b) m=a*b;
            //printf("%d\n",m);
            if(palindromo(m)==0)
            {
                v[0]=a;
                v[1]=b;
                v[2]=m;
            }
        }
    printf("\n El mayor palindromo que se forma del producto de dos numeros de %d cifras es: \n",n);
    printf("%d x %d = %d\n",v[0],v[1],v[2]);


}
