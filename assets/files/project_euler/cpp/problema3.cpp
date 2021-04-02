//----------------------------------------------------------------------
// Archivo: Problema3.cpp
// Autor. Isai E. Davila Cuba
//----------------------------------------------------------------------
// Problema 3 de Project Euler:
// Este problema pide hallar el factor primo mas grande de 600851475143
//----------------------------------------------------------------------
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int i;
	long long n;
	
	n=600851475143;
	
	while(n%2==0)
	{
		cout << "2" << endl;
		n/=2;
	}
	for(i=3;i<=sqrt(n);i+=2)
	{
		while(n%i==0)
		{
			cout << "" << i << endl;
			n=n/i;
		}
	}
	if(n>2) cout << "" << n <<endl;
}
