#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Spanish");
    cout.precision(8);
    
   int opcion = 0;
   
  while (true){
  
   cout << endl; 
   cout << "1 - Cafe y Granitas " << endl; 
   cout << "2 - Reposteria" << endl; 
   cout << "0 - Salir" << endl; 
   
   
   cout << "Ingrese una opcion del menu:";
   cin >> opcion;
   
   if (opcion == 0) {
      break;
   } 
      
   
   switch (opcion)
   { 
   
       case 1:
       {
	   system ("cls");
       cout << "Esta en el menu Cafe y Granitas:" << endl;
	   system ("pause");
	   break;
	  
       }
       case 2: {
     	
       system ("cls");
       cout << "Esta en el menu de Reposteria:" << endl; 
	   system ("pause");
	 
	   break;
	   }	
     	
	 
    default:{
		
	   
	   cout << "Ingrese una opcion validad (0 , 1, 2) :" << endl; 
	   system ("pause");
	   break;
	   }
     	
      
   } 
   
     
   }	 
	 cout << endl; 
     cout << "Saliste del sistema:";
	 
	 return 0; 
   }
   
