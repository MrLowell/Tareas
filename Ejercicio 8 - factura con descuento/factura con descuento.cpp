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
    int descuento = 0;
    double calculoDescuento = 0;
    double calculoImpuesto = 0;
    
    
    
    
    cout << "Ingrese el subtotal de la factura : " << endl;
    cin >> subTotal;
    
    cout << "Ingrese el descuento (0, 10, 15, 20) : " << endl;
    cin >> descuento;
    
    
    calculoDescuento = (subTotal * descuento) / 100;
    calculoImpuesto = (subTotal - calculoDescuento) * 0.15;
	Total = subTotal  - calculoDescuento +  calculoImpuesto;
   
    cout << endl;
    cout << " total a pagar es: " << Total << endl;
   
    
   return 0;
}

