

#include<iostream>
#include<cmath>

using namespace std;

int sumar (int a, int b){
	
	return a + b;
	
}
int calculadora (int a, int b, char operador){
	
	if(operador == '+'){
		
		return sumar (a,b );
		
	}
	
	throw "EL OPERADOR NO EXISTE";
}


int main(int argc, char const *argv[])
{
   int n1 = 0;
   int n2 = 0;
   int resultado = 0;	
   char operador;
   
  cout << " Ingrese el valor de a ";
  cin >> n1;
  cout << " Ingrese el valor de b "; 
  cin >> n2;
  cout << " Ingrese el operador (+, -, *, /) ";
  cin >> operador;
  
  cout << endl;
  
  try
  {
  	
  	cout << calculadora (n1, n2, operador );
	cout << " El resultado de :" << n1 <<  " " << operador << " " << n2 << " es: ";
    cout << resultado;
  	
  	
  }
  catch(const char* error)
  {
    cout << error;
    
  }
  
  
  return 0;
}

