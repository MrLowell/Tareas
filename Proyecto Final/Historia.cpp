#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

extern void Puntuacion1 (int correcta);
extern void Puntuacion2 (int incorrecta);
	
void Historia ()
{
    int pregunta;
    int precision = 0;
    char opcion1 = 0; 
    int menor = 11, alto = 20;
    
	
	cout << "\n*** HISTORIA *** " << endl;
	
  while (true){
  	
  	srand(time(NULL));
	pregunta = (rand() % (alto - menor) + menor);
   	
	
	if (pregunta == 11 != precision)
	{
		cout << "\n De que nacionalidad era Juana de Arco " << endl; 
        cout << " A: Francesa   B: italiana " << endl;
		cout << " C: alemana    D: Inglesa  " << endl;
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
	if (pregunta == 12 != precision)
	{
		cout << "\n Que famoso filosofo fue maestro de Alejandro Magno durante cinco anos " << endl; 
        cout << " A: Socrates     B: Herodoto " << endl;
		cout << " C: Aristoteles  D: Platon " << endl;
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
	if (pregunta == 13 != precision)
	{
		cout << "\n En que ano descubrio Cristobal Colon, America. " << endl; 
        cout << " A: 1498      B: 1504 " << endl;
		cout << " C: 1502      D: 1492 " << endl;
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
	if (pregunta == 14 != precision)
	{
		cout << "\n De que nacionalidad era Adolf Hitler " << endl; 
        cout << " A: Bulgaro   B: Austriaco " << endl;
		cout << " C: noruego   D: Aleman  " << endl;
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
	if (pregunta == 15 != precision)
	{
		cout << "\n A que emperador romano asesino un grupo de senadores " << endl; 
        cout << " A: Julio cesar     B: Neron " << endl;
		cout << " C: Caligula        D: Alejandro magno  " << endl;
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
	if (pregunta == 16 != precision)
	{
		cout << "\n Quien dijo que la tierra giraba alrededor del sol " << endl; 
        cout << " A: Nicolas Copernico        B: Galileo Galilei " << endl;
		cout << " C: Ninguna de las opciones  D: Aristarco  " << endl;
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
	if (pregunta == 17 != precision)
	{
		cout << "\n De que nacionalidad era Ernesto Che Guevara " << endl; 
        cout << " A: cubano     B: argentino " << endl;
		cout << " C: mexicano   D: dominicano  " << endl;
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
	if (pregunta == 18 != precision)
	{
		cout << "\n Quien fue el primer explorador occidental en llegar a China " << endl; 
        cout << " A: Marco Polo   B: Juan de la cosa " << endl;
		cout << " C: Los romanos  D: Los griegos   " << endl;
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
	if (pregunta == 19 != precision)
	{
		cout << "\n Quien fue el primer hombre que piso la luna " << endl; 
        cout << " A: Valentina Tereshckova   B: Nicolas Volskaya " << endl;
		cout << " C: Buzz Aldrin             D: Neil Amstrong  " << endl;
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
	if (pregunta == 20 != precision)
	{
		cout << "\n Que presidente estadounidense fue asesinado en Dallas " << endl; 
        cout << " A: Ronal reagan          B: John F. Kennedy " << endl;
		cout << " C: Abraham Lincoln       D: Robert Kennedy " << endl;
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
