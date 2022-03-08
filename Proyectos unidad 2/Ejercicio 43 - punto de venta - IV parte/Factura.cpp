#include <iostream>

using namespace std;


double subTotal;
string listaProductos;



void agregarProducto (string descripcion, int cantidad, double precio)
{
	
	listaProductos = listaProductos + descripcion + '\n';
	subTotal = subTotal + (cantidad * precio );
		
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
	cout << " SUBTOTAL: " << subTotal << endl;
	system("pause");
	
}
