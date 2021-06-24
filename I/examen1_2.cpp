#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "geometria.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
geometria g[5];
int mayor;
int pos;
int main(int argc, char** argv) {
	cout<<"Hola Mundo"<<endl;
	srand(time(NULL));
	for(int i=0;i<5;i++){
				g[i].altura=rand()%100;
				g[i].base=rand()%100;
	}
	////presentar
	for(int i=0;i<5;i++){
				cout<<"Altura: "<<g[i].altura<<endl;
				cout<<"Base : "<<g[i].base<<endl;
				cout<<"Area Rectangulo: "<<g[i].area_cuadrado()<<endl;
				cout<<"Area Triangulo: "<<g[i].area_triangulo()<<endl;
				cout<<"==========================================="<<endl;
	}
	mayor=g[0].area_cuadrado();
	pos=0;
	
	for(int i=0;i<5;i++){
		if(mayor<g[i].area_cuadrado()){
			mayor=g[i].area_cuadrado();
			pos=i;
		}
	}
	cout<<"La mayor area se encuentra en la posición: "<<pos<<" con una area de :"<<mayor<<endl;
	
	return 0;
}
