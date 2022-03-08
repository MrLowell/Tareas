#include <iostream>

using namespace std;

double impuesto;
double subTotal;
string listaProductos;



void agregarProducto (string descripcion, int cantidad, double precio)
{
	
	listaProductos = listaProductos + descripcion + '\n';
	subTotal = subTotal + (cantidad * precio);
	impuesto = precio * 0.15;
    subTotal = subTotal + impuesto;	
}


void imprimirFactura()
{
	
	system("cls");
	cout << " ******** " << endl;
	cout << " FACTURA " << endl;
	cout << " ******** " << endl;
	cout << endl;
	
	cout << " PRODUCTOS " << endl;
	cout << listaProductos;
	
	cout << endl;
	cout << " SUBTOTAL: " << subTotal << ":Impuesto del 15% incluido " << endl;
	system("pause");
	
}
