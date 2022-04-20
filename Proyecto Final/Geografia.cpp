#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;


extern void Puntuacion1 (int correcta);
extern void Puntuacion2 (int incorrecta);

void Geografia ()
{
    int pregunta;
    int precision = 0;
    char opcion1;
	
	
	cout << "\n*** GEOGRAFIA *** " << endl;
	
	
  while (true){
  	
  	srand(time(NULL));
	pregunta = rand() % 10 + 1;
  	
	if (pregunta == 1 != precision)
	{
		
		cout << "\n En que isla italiana esta Palermo " << endl; 
        cout << " A: isla de capri   B: isquia " << endl;
		cout << " C: procida         D: Sisilia  " << endl;
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
	if (pregunta == 2 != precision)
	{
		cout << "\n Cual es la capital de Turquia " << endl; 
        cout << " A: moscu    B: buenos aires " << endl;
		cout << " C: Ankaras  D: Singapur " << endl;
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
	if (pregunta == 3 != precision)
	{
		cout << "\n Cual es el desierto calido más grande de la tierra " << endl; 
        cout << " A: Desierto de gobi          B: Desierto de arabia " << endl;
		cout << " C: Desierto de la patagonia  D: Desierto del sahara " << endl;
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
	if (pregunta == 4 != precision)
	{
		cout << "\n Que ciudad tuvo una vez el nombre de Leningrado " << endl; 
        cout << " A: San petersburgo   B: Kazan " << endl;
		cout << " C: Grozni            D: Perm  " << endl;
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
	if (pregunta == 5 != precision)
	{
		cout << "\n Cual es el estado mas grande de los Estados Unidos " << endl; 
        cout << " A: Texas     B: Alaska " << endl;
		cout << " C: Florida   D: Georgia  " << endl;
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
	if (pregunta == 6 != precision)
	{
		cout << "\n Cual es el segundo pais mas grande de Europa despues de Rusia " << endl; 
        cout << " A: italia   B: polonia " << endl;
		cout << " C: francia  D: alemania  " << endl;
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
	if (pregunta == 7 != precision)
	{
		cout << "\n Cual es la capital de Australia " << endl; 
        cout << " A: canberra   B: sidney " << endl;
		cout << " C: Brisbane   D: Perth  " << endl;
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
	if (pregunta == 8 != precision)
	{
		cout << "\n Cuantos estados tiene los Estados Unidos " << endl; 
        cout << " A: 52   B: 50 " << endl;
		cout << " C: 51   D: 49  " << endl;
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
	if (pregunta == 9 != precision)
	{
		cout << "\n Cual es el continente mas poblado de la tierra " << endl; 
        cout << " A: America   B: europa " << endl;
		cout << " C: Asia      D: Africa  " << endl;
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
	if (pregunta == 10 != precision)
	{
		cout << "\n Cual es el pais mas pequeno del mundo " << endl; 
        cout << " A: El vaticano   B: Belice " << endl;
		cout << " C: Andorra       D: Suiza " << endl;
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





