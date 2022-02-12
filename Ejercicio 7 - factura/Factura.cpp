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
    
    double subTotal = 0;
    double Total = 0;
    double impuesto = 0.15;
    
    cout << "Ingrese el subtotal de la factura : " << endl;
    cin >> subTotal;
    
    
    
	Total = subTotal  + (subTotal * 0.15);
   
    cout << endl;
    cout << " total a pagar es: " << Total << endl;
   
    
   return 0;
}

