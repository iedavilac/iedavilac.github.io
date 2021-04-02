//-----------------------------------------------------------------
// Autor: Isai E. Davila Cuba
// Archivo: problema1.cpp
//-----------------------------------------------------------------
// Problema 1 de Project Euler
// Encuentre la suma de todos los multiplos de 3 y 5 menores a 1000
//-----------------------------------------------------------------
using namespace std;
#include <iostream>

int main()
{
	int i,s,n;
	
	n=1000;
	s=0;
	for(i=1;i<n;i++)
	{
		if(i%3==0 || i%5==0) s+=i;
	}
	cout << "La suma es: "<<s<<""<< endl;
	
}


