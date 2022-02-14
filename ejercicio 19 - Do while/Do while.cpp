/*

*/

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Spanish");
    cout.precision(8);
    
   int a = 2;
   int b = 10;
   
   while (a > b )
   {    cout << " (while) a > b :" << endl;
	    break;	
   }
   
   do{ 
       cout << " (while) a > b :" << endl;
       break;
   
   }while (a > b );
   
   return 0;
}

