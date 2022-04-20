#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


extern void Puntuacion1 (int correcta);
extern void Puntuacion2 (int incorrecta);

void matematicas ()
{
    int pregunta;
    int precision = 0;
    char opcion1;
    int menor = 41, alto = 50;
    
	
	cout << "\n*** MATEMATICAS *** " << endl;
	
  while (true){
  	
  	srand(time(NULL));
	pregunta = (rand() % (alto - menor) + menor);
	
	if (pregunta == 41 != precision)
	{
		cout << "\n Que es un polinomio " << endl; 
        cout << " A: Una ecuacion canonica     B: Una ecuacion " << endl;
		cout << " C: Una ecuacion irracional   D: Es la suma-resta de un conjunto de monomios  " << endl;
		cin >> opcion1;
		
		if (opcion1 == 'D' || opcion1 == 'd')
		{
		   cout << " Acertaste  " << endl;
		   Puntuacion1 (1);
		   system ("pause");
           system("cls"); 
		   break;	
		
		}else {
		      cout << " Fallaste  " << endl;
			  Puntuacion2 (1);
		      system ("pause");
              system("cls");
              break;
              }
	}	
	if (pregunta == 42 != precision)
	{
		cout << "\n Que es un Dominio " << endl; 
        cout << " A: Someter a una persona a tu voluntad " << endl;
		cout << " B: Conjunto de valores de la variable independiente " << endl;
		cout << " C: Tener posesion de un objeto  " << endl;
		cout << " D: Conjunto de valores de la variable independiente para los cuales existe la funcion " << endl;
		cin >> opcion1;
		
		if (opcion1 == 'D' || opcion1 == 'd')
		{
		   cout << " Acertaste  " << endl;
		   Puntuacion1 (1);
		   system ("pause");
           system("cls");
		   break; 	
		
		}else 
		      if (opcion1 != 'D' || opcion1 != 'd'){
		      cout << " Fallaste  " << endl;
			  Puntuacion2 (1);
		      system ("pause");
              system("cls");
              break;
	          }
	}
	if (pregunta == 43 != precision)
	{
		cout << "\n Que es una incognita " << endl; 
        cout << " A: Un conjunto de numero que son divisibles entre 2 " << endl;
		cout << " B: Un numero del que conocemos su valor " << endl;
		cout << " C: ninguna" << endl;
	    cout << " D: Un numero del que desconocemos su valor" << endl;
		cin >> opcion1;
		
		if (opcion1 == 'D' || opcion1 == 'd')
		{
		   cout << " Acertaste  " << endl;
		   Puntuacion1 (1);
		   system ("pause");
           system("cls");
		   break; 	
		
		}else 
		      if (opcion1 != 'D' || opcion1 != 'd'){
			  cout << " Fallaste  " << endl;
			  Puntuacion2 (1);
		      system ("pause");
              system("cls");
              break;
	          }
	}
	if (pregunta == 44 != precision)
	{
		cout << "\n Que es una raiz de indice n " << endl; 
        cout << " A: Un numero que dividido por n da como resultado el radicando " << endl;
		cout << " B: Un numero multiplicado por otro que es primo " << endl;
		cout << " C: Un numero que elevado a n da como resultado el radicando  " << endl;
		cout << " D: Parte enterrada en el suelo de un arbol  " << endl;
		cin >> opcion1;
		
		if (opcion1 == 'C' || opcion1 == 'c')
		{
		   cout << " Acertaste  " << endl;
		   Puntuacion1 (1);
		   system ("pause");
           system("cls"); 
		   break;	
		
		}else 
		      if(opcion1 != 'C' || opcion1 != 'c'){
			  cout << " Fallaste  " << endl;
			  Puntuacion2 (1);
		      system ("pause");
              system("cls");
              break;
	          }
	}     
	if (pregunta == 45 != precision)
	{
		cout << "\n Que es un exponente " << endl; 
        cout << " A: Un numero que se expone a un alto riesgo " << endl;
		cout << " B: es el numero que expresa cuántas veces hay que dividir la base por si misma " << endl;
		cout << " C: Un numero que tiende a infinito   " << endl;
		cout << " D: es el numero que expresa cuantas veces hay que multiplicar la base por si misma  " << endl;
		cin >> opcion1;
		
		if (opcion1 == 'D' || opcion1 == 'd')
		{
		   cout << " Acertaste  " << endl;
		   Puntuacion1 (1);
		   system ("pause");
           system("cls");
		   break; 	
		
		}else 
		      if(opcion1 != 'D' || opcion1 != 'd'){
			  cout << " Fallaste  " << endl;
			  Puntuacion2 (1);
		      system ("pause");
              system("cls");
              break;
	          }
	}
	if (pregunta == 46 != precision)
	{
		cout << "\n Cual es la funcion inversa de y=sen.x " << endl; 
        cout << " A: y= 1/sen x    B:  y=cos x " << endl;
		cout << " C: y=arc. sen x  D: y=x/sen x  " << endl;
		cin >> opcion1;
		
		if (opcion1 == 'C' || opcion1 == 'c')
		{
		   cout << " Acertaste  " << endl;
		   Puntuacion1 (1);
		   system ("pause");
           system("cls");
		   break; 	
		
		}else 
		      if(opcion1 != 'C' || opcion1 != 'c'){
			  cout << " Fallaste  " << endl;
			  Puntuacion2 (1);
		      system ("pause");
              system("cls");
              break;
	          }
	}
	if (pregunta == 47 != precision)
	{
		cout << "\n Como se llaman los triangulos con dos los lados iguales y uno desigual " << endl; 
        cout << " A: Isosceles    B: Obtusangulo " << endl;
		cout << " C: Equilatero   D: Escaleno  " << endl;
		cin >> opcion1;
		
		if (opcion1 == 'A' || opcion1 == 'a')
		{
		   cout << " Acertaste  " << endl;
		   Puntuacion1 (1);
		   system ("pause");
           system("cls");
		   break; 	
		
		}else 
		      if(opcion1 != 'A' || opcion1 != 'a'){
			  cout << " Fallaste  " << endl;
			  Puntuacion2 (1);
		      system ("pause");
              system("cls");
              break;
              }
	}
	if (pregunta == 48 != precision)
	{
		cout << "\n Sabiendo las coordenadas A(5,2) y B(-1,4) obtenemos un vector " << endl; 
        cout << " A:  (4,6)    B:  (-6,2) " << endl;
		cout << " C:  (6,-2)   D:  (-4,2)  " << endl;
		cin >> opcion1;
		
		if (opcion1 == 'B' || opcion1 == 'b')
		{
		   cout << " Acertaste  " << endl;
		   Puntuacion1 (1);
		   system ("pause");
           system("cls"); 
		   break;	
		
		}else 
		      if(opcion1 != 'B' || opcion1 != 'b'){
			  cout << " Fallaste  " << endl;
			  Puntuacion2 (1);
		      system ("pause");
              system("cls");
              break;
	          }
	}
	if (pregunta == 49 != precision)
	{
		cout << "\n Que es un numero racional " << endl; 
        cout << " A: Una raiz " << endl;
	    cout << " B: Una suma " << endl;
		cout << " C: Es el que se puede expresar como como cociente de dos numeros enteros irreducibles " << endl;
		cout << " D: Cualquier fraccion  " << endl;
		cin >> opcion1;
		
		if (opcion1 == 'C' || opcion1 == 'c')
		{
		   cout << " Acertaste  " << endl;
		   Puntuacion1 (1);
		   system ("pause");
           system("cls");
		   break; 	
		
		}else 
		      if(opcion1 != 'C' || opcion1 != 'c'){
			  cout << " Fallaste  " << endl;
			  Puntuacion2 (1);
		      system ("pause");
              system("cls");
              break;
	          }
	}
	if (pregunta == 50 != precision)
	{
		cout << "\n Cual es el eje de ordenadas " << endl; 
        cout << " A: El eje de las x   B:  El eje de las y " << endl;
		cout << " C: El eje z          D: Ambos ejes juntos " << endl;
		cin >> opcion1;
		
		if (opcion1 == 'A' || opcion1 == 'a')
		{
		   cout << " Acertaste  " << endl;
		   Puntuacion1 (1);
		   system ("pause");
           system("cls"); 
		   break;	
		
		}else 
		      if(opcion1 != 'A' || opcion1 != 'a'){
			  cout << " Fallaste  " << endl;
			  Puntuacion2 (1);
		      system ("pause");
              system("cls");
              break;
              }
	}
	
	
  }	
  precision = pregunta;
  
  
  										
}


