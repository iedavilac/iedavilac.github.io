#include <stdio.h>
#include <math.h>

main()
{
		int i,a,fact,fact2,r;
		long long n=600851475143;
		printf("\nFACTORES\n");
		
		while(n%2==0)
		{
			printf("2\n");
			n/=2;
		}
		for(i=3;i<=sqrt(n);i+=2)
		{
			while(n%i==0)
			{
				printf("%d\n",i);
				n=n/i;
			}
		}
		if(n>2) printf("%d\n",n);
		
		return 0;
}
//600851475143
