/*
    

*/

#include<iostream>
#include<cmath>

using namespace std;

int main(int argc,char const *argv[] )
{
    setlocale(LC_CTYPE, "Spanish");
    cout.precision(8);
    
    bool valorboolean;
    valorboolean = true;
    
    int a = 0;
    int b = 0;
    int resultado = 0;
    
    cout << "Ingrese el valor a : " << endl;
    cin >> a;
    
    cout << "Ingrese el valor b : " << endl;
    cin >> b;
    
	resultado = a + b;
    
    cout << " la suma de a + b es : " << resultado << endl;
   
    
   return 0;
}

