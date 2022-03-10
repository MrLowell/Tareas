#include <iostream>

using namespace std;

double impuesto;
double subTotal;
double Total;
string listaProductos;



void agregarProducto (string descripcion, int cantidad, double precio)
{
	
	listaProductos = listaProductos + descripcion + '\n';
	Total = Total + (cantidad * precio );
	subTotal = subTotal + (cantidad * precio );
	impuesto = impuesto + (precio * 0.15);
	Total = subTotal + impuesto;	
	
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
	cout << " SUBTOTAL: " << subTotal  << endl;
	cout << " EL IMPUESTO ES: " << impuesto  << endl;
	cout << " TOTAL: " << Total << " Lp: Impuesto del 15% incluido"  << endl;
	system("pause");
	
}
