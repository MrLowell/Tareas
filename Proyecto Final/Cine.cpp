#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


extern void Puntuacion1 (int correcta);
extern void Puntuacion2 (int incorrecta);

void cine ()
{
    int pregunta;
    int precision = 0;
    char opcion1;
    int menor = 31, alto = 40;
    
	
	cout << "\n*** CINE *** " << endl;
	
  while (true){
  	
  	srand(time(NULL));
	pregunta = (rand() % (alto - menor) + menor);
	
	if (pregunta == 31 != precision)
	{
		cout << "\n Que estrella de cine es asesinada en la primera escena de la pelicula Scream " << endl; 
        cout << " A: Drew Barrymore    B: Neve Campbell " << endl;
		cout << " C: Courtney Cox      D: ninguna  " << endl;
		cin >> opcion1;
		
		if (opcion1 == 'A' || opcion1 == 'a')
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
	if (pregunta == 32 != precision)
	{
		cout << "\n Cual fue el primer filme extranjero en ganar un Oscar a la mejor pelicula " << endl; 
        cout << " A: La vida de los otros       B: Volver " << endl;
		cout << " C: niguna ha ganado un oscar  D: Parasitos " << endl;
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
	if (pregunta == 33 != precision)
	{
		cout << "\n Con que pelicula gano Steven Spielberg su primer Oscar al mejor director " << endl; 
        cout << " A: El color purpura     B: E.T. el extraterrestre. " << endl;
		cout << " C: indiana jones        D: La lista de Schindler " << endl;
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
	if (pregunta == 34 != precision)
	{
		cout << "\n Que thriller de Alfred Hitchcock es conocido por su impactante escena de la ducha " << endl; 
        cout << " A: La ventana indiscreta  B: Vertigo " << endl;
		cout << " C: Psicosis               D: scream  " << endl;
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
	if (pregunta == 35 != precision)
	{
		cout << "\n Que actor murio rodando la pelicula El Cuervo " << endl; 
        cout << " A: Bruce Lee     B: Brandon Lee " << endl;
		cout << " C: Paul Walker   D: Brad pitt  " << endl;
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
	if (pregunta == 36 != precision)
	{
		cout << "\n Que cantante protagonizo El Guardaespaldas " << endl; 
        cout << " A: Jennifer Lopez   B: Madonna " << endl;
		cout << " C: Whitney Houston  D: ninguna de las anteriores  " << endl;
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
	if (pregunta == 37 != precision)
	{
		cout << "\n Quien es la unica princesa de Disney que se inspiro en una persona real " << endl; 
        cout << " A: cenicienta   B: Moana " << endl;
		cout << " C: Rapunzel     D: Pocahontas  " << endl;
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
	if (pregunta == 38 != precision)
	{
		cout << "\n Cual es el nombre del barco de Jack Sparrow " << endl; 
        cout << " A: La perla negra    B: La caravela negra " << endl;
		cout << " C: La muerte negra   D: El buke de la muerte  " << endl;
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
	if (pregunta == 39 != precision)
	{
		cout << "\n Cual es el verdadero nombre de Darth Vader " << endl; 
        cout << " A: Qui gon jinn      B: Luke Skywalker " << endl;
		cout << " C: Anakin Skywalker   D: Owen Lars  " << endl;
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
	if (pregunta == 40 != precision)
	{
		cout << "\n A que escuela fue Harry Potter " << endl; 
        cout << " A: Hogwarts   B: Langmore " << endl;
		cout << " C: Grifith    D: ninguno " << endl;
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

