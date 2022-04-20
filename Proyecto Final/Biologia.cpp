#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

extern void Puntuacion1 (int correcta);
extern void Puntuacion2 (int incorrecta);
	
void biologia ()
{
    int pregunta;
    int precision = 0;
    char opcion1 = 0; 
    int menor = 61, alto = 70;
    
	
	cout << "\n*** BIOLOGIA *** " << endl;
	
  while (true){
  	
  	srand(time(NULL));
	pregunta = (rand() % (alto - menor) + menor);
   	
	
	if (pregunta == 61 != precision)
	{
		cout << "\n Son un conjunto de membranas que protegen al sistema nervioso " << endl; 
        cout << " A: neuronas     B: tejido " << endl;
		cout << " C: meninjes     D: liquido cefalo raquideo  " << endl;
		cin >> opcion1;
		
		if (opcion1 == 'C' || opcion1 == 'c')
		{
		   cout << " Acertaste  " << endl;
		   Puntuacion1 (1);
		   system ("pause");
           system("cls");
           break;
		   	
		
		}else 
		      if (opcion1 != 'C' || opcion1 != 'c'){
			  cout << " Fallaste  " << endl;
			  Puntuacion2 (1);
		      system ("pause");
              system("cls");
              break;
              }
	}	
	if (pregunta == 62 != precision)
	{
		cout << "\n Los organos que forman  el encefalo son " << endl; 
        cout << " A: cerebro       B: bulbo raquideo " << endl;
		cout << " C: cerebelo      D: todas las anteriores " << endl;
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
	if (pregunta == 63 != precision)
	{
		cout << "\n Coordina los movimientos y postura del cuerpo " << endl; 
        cout << " A: medula espinal     B: bulbo raquideo " << endl;
		cout << " C: cerebro            D: cerebelo " << endl;
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
	if (pregunta == 64 != precision)
	{
		cout << "\n Es una hormona que estimula la produccion de leche materna " << endl; 
        cout << " A: tiroxina       B: prolactina " << endl;
		cout << " C: oxitocina      D: luteinizante  " << endl;
		cin >> opcion1;
		
		if (opcion1 == 'B' || opcion1 == 'b')
		{
		   cout << " Acertaste  " << endl;
		   Puntuacion1 (1);
		   system ("pause");
           system("cls"); 
		   break;	
		
		}else 
		     if (opcion1 != 'B' || opcion1 != 'b'){
			  cout << " Fallaste  " << endl;
			  Puntuacion2 (1);
		      system ("pause");
              system("cls");
              break;
              }
	}
	if (pregunta == 65 != precision)
	{
		cout << "\n Tiene funcion endocrina" << endl; 
        cout << " A: hipotalamo   B: amigdala cerebral " << endl;
		cout << " C: cerebro      D: sistema limbico  " << endl;
		cin >> opcion1;
		
		if (opcion1 == 'A' || opcion1 == 'a')
		{
		   cout << " Acertaste  " << endl;
		   Puntuacion1 (1);
		   system ("pause");
           system("cls"); 
		   break;	
		
		}else 
		      if (opcion1 != 'A' || opcion1 != 'a'){
			  cout << " Fallaste  " << endl;
			  Puntuacion2 (1);
		      system ("pause");
              system("cls");
              break;
              }
	}
	if (pregunta == 66 != precision)
	{
		cout << "\n Las bases nitrogenadas del ARN son " << endl; 
        cout << " A: adenina ,guanina, citosina y timina     B: ninguna " << endl;
		cout << " C: adenina,timina, citosina y uracilo      D: adenina,guanina,citosina y uracilo  " << endl;
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
	if (pregunta == 67 != precision)
	{
		cout << "\n El elemento mas idoneo para constituir los esqueletos estructurales de la materia viva es el: " << endl; 
        cout << " A: sodio       B: calcio " << endl;
		cout << " C: carbon      D: oxigeno  " << endl;
		cin >> opcion1;
		
		if (opcion1 == 'B' || opcion1 == 'b')
		{
		   cout << " Acertaste  " << endl;
		   Puntuacion1 (1);
		   system ("pause");
           system("cls");
		   break;	
		
		}else 
		      if (opcion1 != 'B' || opcion1 != 'b'){
			  cout << " Fallaste  " << endl;
			  Puntuacion2 (1);
		      system ("pause");
              system("cls");
              break;
	          } 
	}
	if (pregunta == 68 != precision)
	{
		cout << "\n Una de las siguientes funciones NO  es del agua " << endl; 
        cout << " A: termorreguladora                     B: disolvente " << endl;
		cout << " C: no participa en reacciones quimicas  D: medio de transporte   " << endl;
		cin >> opcion1;
		
		if (opcion1 == 'C' || opcion1 == 'c')
		{
		   cout << " Acertaste  " << endl;
		   Puntuacion1 (1);
		   system ("pause");
           system("cls");
		   break; 	
		
		}else 
		      if (opcion1 != 'C' || opcion1 != 'c'){
			  cout << " Fallaste  " << endl;
			  Puntuacion2 (1);
		      system ("pause");
              system("cls");
              break;
	          }
	}
	if (pregunta == 69 != precision)
	{
		cout << "\n Cual de los siguientes elementos quimicos NO es un bioelemento " << endl; 
        cout << " A: magnecio   B: cobalto " << endl;
		cout << " C: zing       D: helio  " << endl;
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
	if (pregunta == 70 != precision)
	{
		cout << "\n Es la biomolecula mas abundante en los seres vivos" << endl; 
        cout << " A: glucosa      B: agua " << endl;
		cout << " C: lipido       D: proteina " << endl;
		cin >> opcion1;
		
		if (opcion1 == 'B' || opcion1 == 'b')
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
    
    }
	
	precision = pregunta;										
}

