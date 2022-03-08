
#include<iostream>
#include<cmath>

using namespace std;

string nombreCompleto (string nombre, string apellido){
	
	return nombre + " " + apellido;
	
}


int main(int argc, char const *argv[])
{
 	
     string primerNombre = " ";
     string primerApellido = " "; 

     cout << " Ingrese su nombre: ";
     cin >> primerNombre;
     cout << " Ingrese su apellido: ";
     cin >> primerApellido;
     
     

      cout << endl;
      
      
      cout << " Su nombre completo es: " << nombreCompleto (primerNombre, primerApellido);

}
