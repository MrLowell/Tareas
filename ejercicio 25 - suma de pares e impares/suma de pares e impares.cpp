/*

*/

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Spanish");
    cout.precision(8);
    

   int pares = 0;
   int impares = 0;
   int total = 0;
   
   for (int i = 1; i <= 10; i++)
   {
   
      if (i % 2 == 0 ){
	      pares = pares + i;
		  
		}
         else  
	          impares = impares + i;
	  
	  
	  
	    total = total + i;
  
        cout << i << " ";
   }
   
   
        cout << endl;
        cout << endl;
        cout << "Total pares: " << pares;
        cout << endl;
		cout << "Total impares: " << impares;
        cout << endl;
        cout << "Total: " << total;
        
   return 0;
}

