//---------------------------------------------------------------------------
// Archivo: Problema2.cpp
// Autor: Isai E. Davila Cuba
//---------------------------------------------------------------------------
// Este problema pide hallar la suma de los terminos pares de la serie de 
// Fibonacci menores que 4 millones
//---------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
	int i,n,actual,anterior1,anterior2,suma;
	
	n=4000000;
	anterior1=1;
	anterior2=1;
	actual=0;
	suma=0;
	while(actual<n)
	{
		actual=anterior1+anterior2;
		anterior1=anterior2;
		anterior2=actual;
		if(actual%2==0) suma+=actual;
	}
	cout<<"La suma es: "<< suma << endl;
}
