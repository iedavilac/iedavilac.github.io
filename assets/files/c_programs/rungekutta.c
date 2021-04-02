#include <stdio.h>
#include <math.h>

float f(float t,float y){return(1+pow(y-t,2));}

main()
{
	float Lk1,Lk2,Lk3,Lk4,h=0.025,N=10,tk,yk;
	int k;
tk=0;
yk=0.5;
	
	for(k=0;k<=N;k++)
	 {
	 	tk=k/N;
	 	Lk1=f(tk,yk);
	 	Lk2=f(tk+h/2,yk+(h*Lk1)/2);
	 	Lk3=f(tk+h/2,yk+(h*Lk2)/2);
	 	Lk4=f(tk+h,yk+h*Lk3);
	 	yk=yk+(h/6)*(Lk1+2*Lk2+2*Lk3+Lk4);
	 	printf("%d \t %f \t yk= %f\n",k,tk,yk);
	}
}

