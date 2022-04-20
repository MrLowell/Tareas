#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

extern void Puntuacion1 (int correcta);
extern void Puntuacion2 (int incorrecta);

void musica ()
{
    int pregunta;
    int precision = 0;
    char opcion1 = 0; 
    int menor = 71, alto = 80;
    
	
	cout << "\n*** MUSICA *** " << endl;
	
  while (true){
  	
  	srand(time(NULL));
	pregunta = (rand() % (alto - menor) + menor);
   	
	
	if (pregunta == 71 != precision)
	{
		cout << "\n Que cantante es considerado “El Rey del Rock and Roll " << endl; 
        cout << " A: elvis Presley    B: michaell jackson " << endl;
		cout << " C: robert plant     D: paul rodger  " << endl;
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
	if (pregunta == 72 != precision)
	{
		cout << "\n Quien es considerada la reina de la musica pop " << endl; 
        cout << " A: katty perry       B: shania twain " << endl;
		cout << " C: jannet jackson    D: madonna " << endl;
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
	if (pregunta == 73 != precision)
	{
		cout << "\n Que cantante es conocido como La chica material " << endl; 
        cout << " A: dolly parton        B:taylor swift " << endl;
		cout << " C: jannet jackson      D: madonna " << endl;
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
	if (pregunta == 74 != precision)
	{
		cout << "\n Cual fue el album debut de Taylor Swift " << endl; 
        cout << " A: sin miedo       B: taylor swift " << endl;
		cout << " C: rojo            D: amante  " << endl;
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
	if (pregunta == 75 != precision)
	{
		cout << "\n Cual es la famosa banda de K-Pop" << endl; 
        cout << " A: rosa negra   B: BTS " << endl;
		cout << " C: big bang     D: exo  " << endl;
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
	if (pregunta == 76 != precision)
	{
		cout << "\n Como se llamaba el primer album de Blake Shelton " << endl; 
        cout << " A: body language    B: pure BS " << endl;
		cout << " C: the dreamer      D: austin  " << endl;
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
	if (pregunta == 77 != precision)
	{
		cout << "\n Como se llamaba la primera cancion de rock n’ roll: " << endl; 
        cout << " A: good golly, miss golly   B: rocket 88 " << endl;
		cout << " C: so fine                  D: its too soon to know " << endl;
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
	if (pregunta == 78 != precision)
	{
		cout << "\n Que grupo de rock clasico era conocido por estar drogado durante sus primeros conciertos " << endl; 
        cout << " A: The Beatles        B: Pearl Jam " << endl;
		cout << " C: Rolling Stones     D: Guns n Roses   " << endl;
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
	if (pregunta == 79 != precision)
	{
		cout << "\n Que belleza rubia se convirtio en el rostro de la musica country en los años 60 " << endl; 
        cout << " A: Taylor Swift       B: Madonna" << endl;
		cout << " C: Miranda Lambert    D: Dolly Parton  " << endl;
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
	if (pregunta == 80 != precision)
	{
		cout << "\n Cual fue la primera cancion de exito de The Beatles" << endl; 
        cout << " A: Let it Be          B: I Want to Hold Your Hand " << endl;
		cout << " C: Yellow Submarine   D: Hey Jude " << endl;
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

