/*

*/

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Spanish");
    cout.precision(8);
    
   int opcion = 0;
   
   cout << "Ingrese una opcion : ";
   cin >> opcion;
   
   
   switch (opcion )
   {    
   case 1:
   { 
      cout << " escogiste 1 : " << endl;
      cout << " segunda linea opcion 1 : " << endl;
      break;
   }
   case 2:
   	   cout << " escogiste 2 : " << endl;
       break;
    case 3:
	   cout << " escogiste 3 : " << endl;   
       break;
    default:
	   cout << " escoja una opcion entre 1 y 3 : " << endl;   
       break;
    }   
       
   return 0;
}

