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
		cout << " 3 - Late " << endl;
		cout << endl;
		
		cout << " Ingrese una opcion ";
		cin >> opcionProducto;
		
		   switch (opcionProducto)
		   {
		     case 1:	
		   	    agregarProducto ("1 - Capuccino - L 40.00", 1 , 40);
		   	    break;
		   	 case 2:	
		   	    agregarProducto ("1 - Expresso - L 30.00", 1 , 30);
		   	    break;
		     case 3:
		     	agregarProducto ("1 - Expresso - L 25.00", 1 , 25);
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
		cout << " 1 - Jugo de naranja " << endl;
		cout << " 2 - Refresco de cola " << endl;
		cout << " 3 - Agua mineral " << endl;
		cout << endl;
		
		cout << " Ingrese una opcion ";
		cin >> opcionProducto;
		
		switch (opcionProducto)
		{
		     case 1:	
		   	    agregarProducto ("1 - Jugo de naranja - L 20.00", 1 , 20);
		   	    break;
		   	 case 2:	
		   	    agregarProducto ("1 - Refresco de cola - L 24.00", 1 , 24);
		   	    break;
		     case 3:
		     	agregarProducto ("1 - Agua mineral - L 15.00", 1 , 15);
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
    case 3:	
	{
		cout << " Reposteria " << endl;
		cout << " ******** "<< endl;
		cout << " 1 - Pastel " << endl;
		cout << " 2 - Pan de platano " << endl;
		cout << " 3 - Biscocho de fresa " << endl;
		cout << endl;
		
		
		cout << " Ingrese una opcion ";
		cin >> opcionProducto;
		
		switch (opcionProducto)
	   {
		     case 1:	
		   	    agregarProducto ("1 - Pastel - L 120.00", 1 , 120);
		   	    break;
		   	 case 2:	
		   	    agregarProducto ("1 - Pan de platano - L 80.00", 1 , 80);
		   	    break;
		     case 3:
		     	agregarProducto ("1 - Biscocho de fresa - L 100.00", 1 , 100);
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
				
	}default:
	    break;	
		
		
	

}	

}
