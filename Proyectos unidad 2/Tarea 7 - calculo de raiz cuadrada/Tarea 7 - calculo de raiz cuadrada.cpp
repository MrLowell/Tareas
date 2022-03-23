#include <iostream>
#include <math.h>

using namespace std;


int main(int argc, char const *argv[])
{

	double raiz = 0, resultado = 0;
	
	cout << "CALCULAR LA RAIZ CUADRADA " << endl;
	cout << "\nIngrese el numero a calcular: " << endl;
	cin >> raiz;
	
	resultado = sqrt(raiz);
	
	system("cls");
	cout << "\nLa raiz cuadrada es: " << resultado << endl;
	
   return 0;
	
}	
