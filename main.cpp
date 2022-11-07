#include <iostream>
/* Programa que determina si un numero ingresado por el usuario es perfecto o no */

/*
Los numeros perfectos son aquellos que son iguales a la suma de sus divisiores, por ejemplo el numero 6
donde sus divisores 1,2,3  al sumarlos dan 6. Lo mismo pasa con el numero 28, donde la suma de sus divisores
es 28.
*/

using namespace std;
int main(int argc, char** argv) {
	int num, i, acum = 0;
	
	cout<<"Programa que determina si un numero ingresado por el usuario es perfecto o no"<<endl<<endl;

	cout<<"Ingresa el numero: ";
	cin>>num;
	
	for(i = 1; i < num; i++){
		if(num % i == 0)
		acum += i;
	}
	
	if(num == acum)
	cout<<"El numero "<<num<<" es perfecto"<<endl;
	else
	cout<<"El numero "<<num<<" no es perfecto"<<endl;
	
	system("PAUSE");
	return 0;
}
