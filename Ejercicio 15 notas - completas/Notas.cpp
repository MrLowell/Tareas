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
   {   cout << "valor no valido " << endl;
   
       return 0;
   }
   
   if (nota == 100) 
   {   cout << "Obtuviste una A++ "; 
   }
   
  if (nota >= 95 && nota <= 99) 
   {   cout << "Obtuviste una A+ " ; 
   }
   
   if (nota >= 90 && nota <= 94) 
   {   cout << "Obtuviste una A " << endl; 
   }
   
   if (nota >= 85 && nota <= 89) 
   {   cout << "Obtuviste una A- " << endl; 
   }
   
   if (nota >= 80 && nota <= 84) 
   {   cout << "Obtuviste una B+ " << endl; 
   }
   
   if (nota >= 75 && nota <= 79) 
   {   cout << "Obtuviste una B " << endl; 
   }
   
   if (nota >= 70 && nota <= 74) 
   {   cout << "Obtuviste una B- " << endl; 
   }
   
   if (nota >= 65 && nota <= 69) 
   {   cout << "Obtuviste una B- " << endl; 
   }
   
   if (nota >= 60 && nota <= 64) 
   {   cout << "Obtuviste una C " << endl; 
   }
   
   if (nota >= 55 && nota <= 59) 
   {   cout << "Obtuviste una C- " << endl; 
   }
   
   if (nota >= 50 && nota <= 54) 
   {   cout << "Obtuviste una D+ " << endl; 
   }
   
   if (nota >= 45 && nota <= 49) 
   {   cout << "Obtuviste una D " << endl; 
   }
   
   if (nota >= 40 && nota <= 44) 
   {   cout << "Obtuviste una D- " << endl; 
   }
   
   if (nota >= 35 && nota <= 39) 
   {   cout << "Obtuviste una E+ " << endl; 
   }
   
   if (nota >= 30 && nota <= 34) 
   {   cout << "Obtuviste una E " << endl; 
   }
   
   if (nota >= 25 && nota <= 29) 
   {   cout << "Obtuviste una E- " << endl; 
   }
   
   if (nota >= 20 && nota <= 24) 
   {   cout << "Obtuviste una F+ " << endl; 
   }
   
   if (nota >= 15 && nota <= 19) 
   {   cout << "Obtuviste una F " << endl; 
   }
   
   if (nota >= 10 && nota <= 14) 
   {   cout << "Obtuviste una F " << endl; 
   }
   
   if (nota >= 5 && nota <= 9) 
   {   cout << "Obtuviste una F- " << endl; 
   }
   
   if (nota >= 0 && nota <= 4) 
   {   cout << "Obtuviste una F-- " << endl; 
   }
   
   
   
   return 0;
}

