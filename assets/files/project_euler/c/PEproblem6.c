#include <stdio.h>

int suma(int n){
	int i,sum;
	sum=0;
	for(i=1;i<=n;i++) sum+=i;
	return sum;
}
int sumacuad(int n){
	int i,sum;
	sum=0;
	for(i=1;i<=n;i++) sum+=i*i;
	return sum;
}

int main(){
	int n=100;
	
	printf("La respuesta es:%d\n",suma(n)*suma(n)-sumacuad(n));
	return 0;
}
