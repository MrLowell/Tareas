#include <iostream>
#include <stdlib.h>
#include <time.h>
#include<cmath>


using namespace std;

extern void Geografia ();
extern void Historia ();
extern void Ciencia ();
extern void cine ();
extern void matematicas ();
extern void zoo ();
extern void biologia ();
extern void musica ();
extern void puntos ();
extern void acertivo ();
extern void Premios ();
extern void Preguntasbonus ();


int main(int argc, char** argv) {
	
cout << " ******* JUEGO DE TRIVIAS ****** " << endl;
cout << "\n***** REGLAS ***** " << endl;
cout << "\n*** El juego consiste en responder 10 trivias consecutivas *** " << endl;
cout << "*** Las preguntas contestadas correctamente sumaran 10 pts al marcador del jugador *** " << endl;
cout << "*** Fallar preguntas restaran 5 pts al maracdor del jugador *** " << endl;
cout << "\n*** El jugador podra ganar tres premios dependiendo del puntaje *** " << endl;
cout << "*** De 50 a 60 = 2,000 HNL *** " << endl;
cout << "*** De 65 a 70 = 5,000 HNL *** " << endl;
cout << "*** De 75 a 85 = 10,000 HNL *** " << endl;
cout << "*** Una puntuacion de 100 ganara el premio mayor = 30,000 HNL *** " << endl;
cout << "\n*** Ha el jugador se le dara la oportunidad de contestar 5 preguntas bonus si la puntuacion es perfecta *** " << endl;
cout << "*** Por cada pregunta bonus contestadas correctamente multiplicara X 2 el dinero *** " << endl;
cout << "*** Por otro lado fallar dividira el dinero a la mitad *** " << endl;

cout << "\nINICIAR " << endl;	
system ("pause -> NUl");
system("cls");

int precision = 0;
	
string primerNombre = " "; 
cout << " Ingrese el nombre del jugador: ";
cin >> primerNombre;


cout << endl;


for (int indice = 1; indice <= 10; indice++ ){
   
    
	system("cls");
    cout << " Pregunta No " << indice << endl;  
    cout << endl;
	cout << " jugador: " << primerNombre;
    cout << endl;
    
    int aleatorio;
    
	acertivo ();
   	puntos ();
   
	
    while (true){
  	
  	srand(time(NULL));
	aleatorio = rand() % 8 + 1;
  
	if (aleatorio == 1 && aleatorio != precision){
		
		Geografia ();
		break;
	}
	
	if (aleatorio == 2 && aleatorio != precision){
		
		Historia ();
		break;		
	}	 
	
	if (aleatorio == 3 && aleatorio != precision){
		
		Ciencia ();
		break;		
	}  
	
	if (aleatorio == 4 && aleatorio != precision){
		
		cine ();
		break;		
	} 
	
    if (aleatorio == 5 && aleatorio != precision){
		
	    matematicas ();
		break;			
	}
	
	if (aleatorio == 6 && aleatorio != precision){
		
	    zoo ();
		break;			
	}      	
  
    if (aleatorio == 7 && aleatorio != precision){
		
	    biologia ();
		break;			
	}    
	
	if (aleatorio == 8 && aleatorio != precision){
		
	    musica ();
		break;			
	}    
  
   
    
    }
    
    precision = aleatorio;
    
    if (precision == 9){
    	
    	precision = 0;
	}
	
   }		
	
   
   Preguntasbonus ();
   Premios ();	
   return 0;
}
