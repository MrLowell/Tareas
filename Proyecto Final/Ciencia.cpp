#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


extern void Puntuacion1 (int correcta);
extern void Puntuacion2 (int incorrecta);

void Ciencia ()
{
    int pregunta;
    int precision = 0;
    char opcion1;
    int menor = 21, alto = 30;
    
	
	cout << "\n*** CIENCIA *** " << endl;
	
  while (true){
  	
  	srand(time(NULL));
	pregunta = (rand() % (alto - menor) + menor);
  	
    if (pregunta == 21 != precision)
	{
		cout << "\n Es el organo que bombea sangre por todo el cuerpo. " << endl; 
        cout << " A: Pulmones    B: Estomago " << endl;
		cout << " C: Corazon     D: cerebro " << endl;
		cin >> opcion1;
		
		if (opcion1 == 'C' || opcion1 == 'c')
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
	if (pregunta == 22 != precision)
	{
		cout << "\n Es el organo mas grande de nuestro cuerpo " << endl; 
        cout << " A: Pulmones    B: Estomago " << endl;
		cout << " C: Cerebro     D: Piel " << endl;
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
	if (pregunta == 23 != precision)
	{
		cout << "\n Que fuerza nos retiene a todos conectado a tierra " << endl; 
        cout << " A: Gravedad          B: Friccion " << endl;
		cout << " C: Resistencia       D: Tencion " << endl;
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
	if (pregunta == 24 != precision)
	{
		cout << "\n Cuantos planetas hay en el sistema solar " << endl; 
        cout << " A: 8   B: 10 " << endl;
		cout << " C: 9   D: 15   " << endl;
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
	if (pregunta == 25 != precision)
	{
		cout << "\n Cual es el significado del ADN " << endl; 
        cout << " A: acido desoxirribonucleico     B: acido diribonucleico " << endl;
		cout << " C: acido desoxirribonutric       D: acido diabonucleico  " << endl;
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
	if (pregunta == 26 != precision)
	{
		cout << "\n Cuantos pares de cromosomas tenemos los humanos " << endl; 
        cout << " A: 23   B: 20" << endl;
		cout << " C: 22   D: 24  " << endl;
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
	if (pregunta == 27 != precision)
	{
		cout << "\n Cada cuantos anos tenemos un ano bisiesto " << endl; 
        cout << " A: 1   B: 3 " << endl;
		cout << " C: 2   D: 4  " << endl;
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
	if (pregunta == 28 != precision)
	{
		cout << "\n Cual es el planeta mas cercano al sol " << endl; 
        cout << " A: saturno    B: saturno " << endl;
		cout << " C: mercurio   D: tierra  " << endl;
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
	if (pregunta == 29 != precision)
	{
		cout << "\n Este elemento es liquido a temperatura ambiente " << endl; 
        cout << " A: mercurio   B: oxigeno " << endl;
		cout << " C: oro        D: cobre  " << endl;
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
	if (pregunta == 30 != precision)
	{
		cout << "\n Cual es el tipo de sangre mas raro " << endl; 
        cout << " A: a             B: b " << endl;
		cout << " C: ab negativo   D: ab positivo " << endl;
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
	
	}
	precision = pregunta;										
}
