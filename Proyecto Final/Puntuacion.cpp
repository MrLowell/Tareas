#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


int Total1 = 0;
int Total2 = 0;
int Puntuacion = 0;
char eleccion;
char opcion1; 
int  bonus = 30000;
int contador = 0;

void Puntuacion1 (int correcta){
		
	Total1 = Total1 + (correcta * 10);
	Puntuacion = Total1 - Total2;
	
}

void Puntuacion2 (int incorrecta){

     
     Total2 = Total2 + (incorrecta * 5);
     Puntuacion = Total1 - Total2;
}

   

void puntos (){
	
	
	cout << " Puntuacion : " << Puntuacion << endl;
}

void acertivo (){
	
	if (Puntuacion < 0){
		
		Puntuacion = 0;
		Total1 = 0;
		Total2 = 0;	
	}	
}


void Premios (){
	
	
	
	
	if ( Puntuacion <= 49){
		
		cout << "Perdiste mejor suerte para la proxima : " << endl;
		cout << "\nTu puntuacion final ha sido " << Puntuacion <<  endl;
	   }else
	        if ( Puntuacion >= 50 && Puntuacion <= 60){
		
		    cout << "Felicidades has ganado el premio de 2,000 lempiras  " << endl;
		    cout << "\nTu puntuacion final ha sido " << Puntuacion <<  endl;
	    
		    }else
		          if ( Puntuacion >= 65 && Puntuacion <= 70){
		
		          cout << " felicidades has ganado el premio de 5,000 lempiras : " << endl;
	              cout << " Tu puntuacion final ha sido " << Puntuacion <<  endl;
	              
	              }else 
	                    if ( Puntuacion >= 75 && Puntuacion <= 90){
		
		                cout << "felicidades has ganado el premio de 10,000 lempiras : " << endl;
		                cout << "\nTu puntuacion final ha sido " << Puntuacion <<  endl;

                        }
                        
}


void Preguntasbonus (){
	
	if (Puntuacion == 100){
		
	cout << " Has conseguido una puntuacion perfecta  " << endl;
	cout << "\n Puntuacion: " << Puntuacion << endl;
	system ("pause -> NUl");
    system("cls");
	cout << " Tienes la oportunidad de duplicar tu dinero  " << endl;
	system ("pause -> NUl");
    system("cls");
	
    cout << " Si deseas emprender estas preguntas digita S, de lo contrario digita N " << endl;
	cin >> eleccion;
	system("cls");
	
	if (eleccion == 'S' || eleccion == 's'){
		
		contador++;
		cout << "Pregunta bonus No. " << contador << endl;
	    cout << "Dinero Total " << bonus << endl;
		cout << "\n Quien canto la cancion Top of the World en 1973 " << endl; 
        cout << " A: Backstreet Boys   B: The Carpenters " << endl;
		cout << " C: NSYNC             D: Bread  " << endl;
	    cout << " E: The Who           F: The Beatles " << endl;
		cin >> opcion1;
		
		if (opcion1 == 'B' || opcion1 == 'b')
		{
		   cout << " Acertaste duplicas tu dinero  " << endl;
		   bonus = bonus * 2;
		   system ("pause");
           system("cls");	
		
		}else {
		      cout << " Fallaste tu dinero se divide a la mitad  " << endl;
			  bonus = bonus / 2;
		      system ("pause");
              system("cls");
              }
              
        contador++;
		cout << "Pregunta bonus No. " << contador << endl;
	    cout << "Dinero Total " << bonus << endl;
		cout << "\n El punto mas profundo de la fosa de las Marianas esta exactamente a... " << endl; 
        cout << " A: 11.144 metros de profundidad    B: 11.084 metros de profundidad " << endl;
		cout << " C: 11.044 metros de profundidad    D: 11.134 metros de profundidad  " << endl;
	    cout << " E: 11.054 metros de profundidad    F: 11.034 metros de profundidad " << endl;
		cin >> opcion1;
		
		if (opcion1 == 'F' || opcion1 == 'f')
		{
		   cout << " Acertaste duplicas tu dinero  " << endl;
		   bonus = bonus * 2;
		   system ("pause");
           system("cls");	
		
		}else {
		      cout << " Fallaste tu dinero se divide a la mitad  " << endl;
			  bonus = bonus / 2;
		      system ("pause");
              system("cls");
              }
              
              
        contador++;
		cout << "Pregunta bonus No. " << contador << endl;
	    cout << "Dinero Total " << bonus << endl;
		cout << "\n Quien fue el dictador italiano que lideraba Italia al comienzo de la Segunda Guerra Mundial " << endl; 
        cout << " A: sirio de la fuente    B: Jorge rigonin" << endl;
		cout << " C: Humberto I            D: ninguno  " << endl;
	    cout << " E: Benito Mussolini.     F: Victor Manuel II" << endl;
		cin >> opcion1;
		
		if (opcion1 == 'E' || opcion1 == 'e')
		{
		   cout << " Acertaste duplicas tu dinero  " << endl;
		   bonus = bonus * 2;
		   system ("pause");
           system("cls");	
		
		}else {
		      cout << " Fallaste tu dinero se divide a la mitad  " << endl;
			  bonus = bonus / 2;
		      system ("pause");
              system("cls");
              }
        
        contador++;
		cout << "Pregunta bonus No. " << contador << endl;
	    cout << "Dinero Total " << bonus << endl;
		cout << "\n Son micronutrientes indispensables para el normal funcionamiento del sistema nervioso y " << endl; 
        cout << " A: Vitamina B       B: Vitamina E " << endl;
		cout << " C: Vitamina A       D: ninguno  " << endl;
	    cout << " E: Vitamina D       F: Todas las anteriores " << endl;
		cin >> opcion1;
		
		if (opcion1 == 'A' || opcion1 == 'a')
		{
		   cout << " Acertaste duplicas tu dinero  " << endl;
		   bonus = bonus * 2;
		   system ("pause");
           system("cls");	
		
		}else {
		      cout << " Fallaste tu dinero se divide a la mitad  " << endl;
			  bonus = bonus / 2;
		      system ("pause");
              system("cls");
              }
              
        contador++;
		cout << "Pregunta bonus No. " << contador << endl;
	    cout << "Dinero Total " << bonus << endl;
		cout << "\n Son celulas sanguineas que fagocitan y producen anticuerpos para defendernos de los germenes patogenos " << endl; 
        cout << " A: Leufocitos        B: Leucocitos " << endl;
		cout << " C: Plaquetas         D: Globulos rojos " << endl;
	    cout << " E: Globulos blancos  F: Todas " << endl;
		cin >> opcion1;
		
		if (opcion1 == 'B' || opcion1 == 'b')
		{
		   cout << " Acertaste duplicas tu dinero  " << endl;
		   bonus = bonus * 2;
		   system ("pause");
           system("cls");	
		
		}else {
		      cout << " Fallaste tu dinero se divide a la mitad  " << endl;
			  bonus = bonus / 2;
		      system ("pause");
              system("cls");
              } 
			  
		if (contador == 5){
			
			if (bonus < 30000){
				
				cout << "Has perdido mas de lo que has ganado " << endl;
				cout << "Acumulaste " << bonus << endl;
				cout << "\nTu puntuacion final ha sido " << Puntuacion <<  endl;
			}else
			     if (bonus > 30000){
			     	
			     	cout << "felicidades has acumulado un total de " << bonus << ":Lempiras " << endl;
			     	cout << "\nTu puntuacion final ha sido " << Puntuacion <<  endl;
			     	
				 }
			
			
			
		} 	       
	
	}else
	     if (eleccion == 'N' || eleccion == 'n'){
		
		 cout << "Felicidades has conseguido 30,000 lempiras  " << endl;
		 cout << "\nTu puntuacion final ha sido " << Puntuacion <<  endl;
	     }
}
	
}



