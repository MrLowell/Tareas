/*
    Prop?sito: Calcular la suma, resta, multiplicacion y divicion de dos numeros.
    Autor: Brian Josue Ramos Jeronimo
    Fecha: 27/ 01 / 2022
    Hora: 5:00 pm
*/
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Spanish");
    cout.precision(8);
    
    int PrimerNumero = 0, SegundoNumero = 0;
    int SumaNumero = 0, RestaNumero = 0, MultiplicacionNumero = 0, DivicionNumero = 0;
    
    cout << " CALCULAR LA SUMA, RESTA, MULTIPLICACION Y DIVICION DE DOS NUMEROS: " << endl;
	cout << " \ningrese el valor del primer numero: " << endl;
    cin  >> PrimerNumero;
    cout << " ingrese el valor del segundo numero: " << endl;
    cin  >> SegundoNumero;
    
    SumaNumero = PrimerNumero + SegundoNumero;
    RestaNumero = PrimerNumero - SegundoNumero;
    MultiplicacionNumero = PrimerNumero * SegundoNumero;
    DivicionNumero = PrimerNumero / SegundoNumero;
    
    cout << "\nLa suma de los numeros es: " << SumaNumero << endl;
    cout << "\nLa resta de los numeros es: " << RestaNumero << endl;
    cout << "\nLa multipicacion de los numeros es: " << MultiplicacionNumero << endl;
    cout << "\nLa divicion de los numeros es: " << DivicionNumero << endl;
    
   return 0;
}
