/*
    

*/

#include<iostream>
#include<cmath>

using namespace std;

int main(int argc,char const *argv[] )
{
    setlocale(LC_CTYPE, "Spanish");
    cout.precision(8);
    
    bool valorboolean;
    valorboolean = true;
    
    int valorentero = 15;
    double valordouble = 20.99;
    string valorstring = "Hola como estas ";
    char valorchar = 'B';
    
    cout << "valorboolean : " << valorboolean << endl;
    cout << "valorentero : " << valorentero << endl;
    cout << "valordouble : " << valordouble << endl;
    cout << "valorstring: " << valorstring << endl;
    cout << "valorchar : " << valorchar << endl;
    
   return 0;
}

