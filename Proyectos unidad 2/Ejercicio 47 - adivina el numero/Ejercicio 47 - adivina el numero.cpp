#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc,char const *argv[] )
{
    
    int miNumero = 0;
    int numeroSecreto = 0;
    
    srand(time(NULL));
    numeroSecreto = rand() % 10 + 1;
    
    do
	{
		cout << " Adivina el numero entre 1 a 10: " << endl;
		cin >> miNumero;
		
		if(numeroSecreto < miNumero)
		{
			
		  cout << " El numero secreto puede ser menor: " << endl;	
			
		}else
		     {
		     	if (numeroSecreto > miNumero)
                    {
                    	
                     cout << " El numero secreto puede ser mayor: " << endl;		
                    	
					}		     	
		     	
			 }
		
	}while(numeroSecreto != miNumero);
    
    cout << endl;
    cout << endl;
    cout << " Adivinaste! ";

   
   return 0;
}
