#include <iostream>

using namespace std;

extern void agregarProducto (string descripcion, int cantidad, double precio);


 void producto(int opcion)
 {
	
	
	system("cls");
	
	int opcionProducto = 0;
	
	
	switch (opcion)
	{
		
	case 1:	
	{
	
	
		cout << " Bebidas Calientes " << endl;
		cout << " ******** "<< endl;
	   	cout << " 1 - Capuccino " << endl;
		cout << " 2 - Expresso " << endl;
		cin >> opcionProducto;
		
		   switch (opcionProducto)
		   {
		     case 1:	
		   	    agregarProducto ("Capuccino", 1 , 40);
		   	    break;
		   	 case 2:	
		   	    agregarProducto ("Expresso", 1 , 30);
		   	    break;
		   
             default:
		        {
				  cout << " Opcion no valida ";
			     return;
				 break;
		        }
			}  
	
	    cout << endl;
		cout << " Producto agregado " << endl << endl;
		system("pause");
	
		break; 
	}		
	case 2:	
	{
		cout << " Bebidas frias " << endl;
		cout << " ******** "<< endl;
		system("pause");
		break;
	}		
    case 3:	
	{
		cout << " Reposteria " << endl;
		cout << " ******** "<< endl;
		system("pause");
		break;		
	default:
	    break;	
		
		
		
	}
	

}	

}
