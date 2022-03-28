#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc,char const *argv[] )
{
    
    int Dado1 = 0;
    int Dado2 = 0;
    int Total = 0;
    
    cout << "Digite cualquier tecla para lanzar los dados: " << endl;
	system("pause"); 
	
	srand(time(NULL));
    
	Dado1 = rand() % 6 + 1;
	cout << endl;
    cout << " Primer Dado " << Dado1 << endl;
	Dado2 = rand() % 6 + 1;
    cout << " Segundo Dado " << Dado2 << endl;
    Total = Dado1 + Dado2;
    
    
    
	if (Total == 12)
	{
		cout << endl;
	    cout << "Sorprendente conseguiste un par de 6  " << endl;
		
	}else
	     if(Dado1 == Dado2)
		 {
	        cout << endl;
		    cout << "Felicidades has conseguido un par " << endl;	
		 }
	
	
	

   return 0;
}
