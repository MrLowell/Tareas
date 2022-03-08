#include<iostream>
#include<cmath>

using namespace std;

void imprimirCaracter(char caracter , int ciclos){
	
      for(int i = 0; i < ciclos; i++)
	  {
	  	
	  	cout << caracter;
	  }
     
       cout << endl;
	
}


int main(int argc, char const *argv[]){
	
    	
	imprimirCaracter('@', 10);
	imprimirCaracter ('#',5);
	cout << " hola mundo " << endl;
	imprimirCaracter ('*',1000);
	
	return 0;	
	
}
