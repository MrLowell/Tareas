#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc,char const *argv[] )
{
    
    int numero = 0;
    
    srand(time(NULL));
    
    numero = rand() % 10 + 1;
    cout << " Primer numero al azar " << numero << endl;
    numero = rand() % 10 + 1;
    cout << " Segundo numero al azar " << numero << endl;

   return 0;
}
