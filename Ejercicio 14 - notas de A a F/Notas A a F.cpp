/*
    Prop?sito: MOSTRAR LA NOTA OBTENIDA

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
    
    int nota = 0;
    
    cout << "MOSTRAR LA NOTA OBTENIDA" << endl;
	cout << "\nIngrese la nota que obtuvo " << endl;
    cin >> nota;
    
   if (nota > 100 || nota  < 0)
   {   cout << "Ingrese una nota entre 0 y 100 " << endl;
   
       return 0;
   }
   
  
  if (nota >= 95 && nota <= 100) 
   {   cout << "Obtuviste una A " ; 
   }
   else
       if (nota >= 85 && nota <= 94) 
           {cout << "Obtuviste una B " << endl; 
           }
           else
               if (nota >= 75 && nota <= 94) 
                   {   cout << "Obtuviste una C " << endl; 
                   }
                   else
                       if (nota >= 65 && nota <= 74) 
                           {   cout << "Obtuviste una D " << endl; 
                           }
                        else
                            if (nota >= 60 && nota <= 64) 
                               {   cout << "Obtuviste una E " << endl; 
                               }
                            else   
                                if (nota >= 0 && nota <= 60) 
                                   {   cout << "Obtuviste una F " << endl; 
                                   }
                                else
                                    cout << "Ingrese una nota entre 0 y 100 "; 
 
   
   
   
   return 0;
}

