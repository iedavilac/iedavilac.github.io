#include <stdio.h>
#include <math.h>
main()
{
	int i,n=1000,s=0;
	for(i=1;i<n;i++)
	{
		if(i%3==0 || i%5==0) s+=i;
	}
	printf("%d \n",s);
}
