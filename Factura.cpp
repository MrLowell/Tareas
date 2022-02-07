/*
    Prop?sito: Factura con descuento con o sin exedente.

    Autor: Brian Josue Ramos Jeronimo
    Fecha: 09 / 02 / 2022
    Hora: 5:00 pm

*/

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Spanish");
    cout.precision(8);
    
    float subTotal = 0, Total = 0;
    float descuento = 0;
    float calculoDescuento = 0, calculoImpuesto = 0;
    char estaExenta = 0;
    
    cout << "Factura con descuento con o sin exedente " << endl;
    cout << "Digite el subtotal " << endl;
    cin >> subTotal;
    cout << "Digite el descuento (0,10%, 15% ,20% )" << endl;
    cin >> descuento;
    cout << "es una factura exenta? s/n " << endl;
    cin >> estaExenta;
    
    calculoDescuento = (subTotal * descuento) / 100;
    subTotal =  subTotal - calculoDescuento;
    
	if (estaExenta == 'N' || estaExenta == 'n')
        calculoImpuesto = (subTotal * 0.15 );
        
    Total = calculoImpuesto + subTotal;    

    cout << "\n El total a pagar es :  " << Total << endl;
    

   return 0;
}

