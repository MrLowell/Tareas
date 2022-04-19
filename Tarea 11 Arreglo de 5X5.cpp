#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc,char const *argv[] )
{
    
   int A;
   int Totalsuma = 0;
   srand(time(NULL));
   A = rand() % 50 + 1;
   
   int arregloAleatorio [5][5];
  
       arregloAleatorio [0][0] = A;
       A = rand() % 50 + 1;
       Totalsuma = Totalsuma + A;
       
	   arregloAleatorio [1][0] = A;
       A = rand() % 50 + 1;
       Totalsuma = Totalsuma + A;
       
	   arregloAleatorio [2][0] = A;
       A = rand() % 50 + 1;
       Totalsuma = Totalsuma + A;
       
	   arregloAleatorio [3][0] = A;
       A = rand() % 50 + 1;
       Totalsuma = Totalsuma + A;
       
	   arregloAleatorio [4][0] = A;
       A = rand() % 50 + 1;
       Totalsuma = Totalsuma + A;
       
	   arregloAleatorio [0][1] = A;
       A = rand() % 50 + 1;
       Totalsuma = Totalsuma + A;
       
	   arregloAleatorio [1][1] = A;
       A = rand() % 50 + 1;
       Totalsuma = Totalsuma + A;
       
	   arregloAleatorio [2][1] = A;
       A = rand() % 50 + 1;
       Totalsuma = Totalsuma + A;
       
	   arregloAleatorio [3][1] = A;
       A = rand() % 50 + 1;
       Totalsuma = Totalsuma + A;
       
	   arregloAleatorio [4][1] = A;
       A = rand() % 50 + 1;
       Totalsuma = Totalsuma + A;
       
	   arregloAleatorio [0][2] = A;
       A = rand() % 50 + 1;
       Totalsuma = Totalsuma + A;
       
	   arregloAleatorio [1][2] = A;
       A = rand() % 50 + 1;
       Totalsuma = Totalsuma + A;
       
	   arregloAleatorio [2][2] = A;
       A = rand() % 50 + 1;
       Totalsuma = Totalsuma + A;
       
	   arregloAleatorio [3][2] = A;
       A = rand() % 50 + 1;
       Totalsuma = Totalsuma + A;
       
	   arregloAleatorio [4][2] = A;
       A = rand() % 50 + 1;
       Totalsuma = Totalsuma + A;
       
	   arregloAleatorio [0][3] = A;
       A = rand() % 50 + 1;
       Totalsuma = Totalsuma + A;
       
	   arregloAleatorio [1][3] = A;
       A = rand() % 50 + 1;
       Totalsuma = Totalsuma + A;
       
	   arregloAleatorio [2][3] = A;
       A = rand() % 50 + 1;
       Totalsuma = Totalsuma + A;
       
	   arregloAleatorio [3][3] = A;
       A = rand() % 50 + 1;
       Totalsuma = Totalsuma + A;
       
	   arregloAleatorio [4][3] = A;
       A = rand() % 50 + 1;
       Totalsuma = Totalsuma + A;
       
	   arregloAleatorio [0][4] = A;
       A = rand() % 50 + 1;
       Totalsuma = Totalsuma + A;
       
	   arregloAleatorio [1][4] = A;
       A = rand() % 50 + 1;
       Totalsuma = Totalsuma + A;
       
	   arregloAleatorio [2][4] = A;
       A = rand() % 50 + 1;
       Totalsuma = Totalsuma + A;
       
	   arregloAleatorio [3][4] = A; 
       A = rand() % 50 + 1;
       Totalsuma = Totalsuma + A;
       
	   arregloAleatorio [4][4] = A;
	   A = rand() % 50 + 1;
	   Totalsuma = Totalsuma + A;
       
  
    
   for ( int i = 0; i < 5; i++)
    {
	 cout << arregloAleatorio [i][0] << endl;
	 cout << arregloAleatorio [i][1] << endl;
	 cout << arregloAleatorio [i][2] << endl;
	 cout << arregloAleatorio [i][3] << endl;
	 cout << arregloAleatorio [i][4] << endl;
	 
	 
   	}
    
   cout << "La suma Total es :" << Totalsuma << endl;
   
   return 0;
}
