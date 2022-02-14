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
    
   int ciclos = 0;
   
   
   while (ciclos < 1000000) {
    cout << "*";
    
   
    ciclos = ciclos + 1;
   
   }
 
   cout << endl;
   cout << "saliste del ciclo : ";
   
   return 0;
}

