#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

extern void Puntuacion1 (int correcta);
extern void Puntuacion2 (int incorrecta);
	
void zoo ()
{
    int pregunta;
    int precision = 0;
    char opcion1 = 0; 
    int menor = 51, alto = 60;
    
	
	cout << "\n*** ZOOLOGIA *** " << endl;
	
  while (true){
  	
  	srand(time(NULL));
	pregunta = (rand() % (alto - menor) + menor);
   	
	
	if (pregunta == 51 != precision)
	{
		cout << "\n De que continente es originario el animal llamado demonio de Tasmania " << endl; 
        cout << " A: oceania    B: europa " << endl;
		cout << " C: africa     D: asia  " << endl;
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
	if (pregunta == 52 != precision)
	{
		cout << "\n Cual es el mamifero marino mas grande " << endl; 
        cout << " A: oso polar        B: la jirafa " << endl;
		cout << " C: la ballena azul  D: rinoceronte " << endl;
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
	if (pregunta == 53 != precision)
	{
		cout << "\n Cual es el mamífero mas rapido del mundo " << endl; 
        cout << " A: el caballo           B: la liebre " << endl;
		cout << " C: el correcaminos      D: el guepardo " << endl;
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
	if (pregunta == 54 != precision)
	{
		cout << "\n Cual es el animal marino que alcanza mayor velocidad " << endl; 
        cout << " A: el bagre     B: el marlin negro " << endl;
		cout << " C: piranas      D: el rape de aletas negras  " << endl;
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
	if (pregunta == 55 != precision)
	{
		cout << "\n Que clase de animal es mas longevo " << endl; 
        cout << " A: las esponjas vitreas   B: las langostas " << endl;
		cout << " C: las tortuga gigante    D: las medusas  " << endl;
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
	if (pregunta == 56 != precision)
	{
		cout << "\n En que pais habita el dragon de Komodo " << endl; 
        cout << " A: somalia        B: el congo " << endl;
		cout << " C: sudafrica      D: Indonesia  " << endl;
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
	if (pregunta == 57 != precision)
	{
		cout << "\n Cual es el mayor depredador terrestre de Australia " << endl; 
        cout << " A: coyotes     B: el dingo " << endl;
		cout << " C: hienas      D: zorros  " << endl;
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
	if (pregunta == 58 != precision)
	{
		cout << "\n Cual es el alimento principal de los Koalas " << endl; 
        cout << " A: las hojas calipto       B: las hojas de calipso " << endl;
		cout << " C: las hojas de Eucalipto  D: ninguna de las opciones   " << endl;
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
	if (pregunta == 59 != precision)
	{
		cout << "\n De que region del mundo son originarias las piranas " << endl; 
        cout << " A: oeste africano   B: suroeste africano " << endl;
		cout << " C: centroamerica    D: america del sur  " << endl;
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
	if (pregunta == 60 != precision)
	{
		cout << "\n Cual es el felino mas grande del mundo " << endl; 
        cout << " A: el leon          B: el tigre " << endl;
		cout << " C: el guepardo      D: el cheetah " << endl;
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

