#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "nodo.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
nodo *I,*F,*T;
void agregar(int x);
void presentar();
void buscar(int);
void llenar();

int op,temp;
int main(int argc, char** argv) {
	do{
		cout<<"Menu"<<endl;
		cout<<"1) Agregar"<<endl;
		cout<<"2) Presentar"<<endl;
		cout<<"3) Buscar"<<endl;
		cout<<"4) Llenar"<<endl;
		cout<<"0) Salir"<<endl;
		cin>>op;
		
		switch(op){
			case 1:
					cout<<"Ingrese un ID"<<endl;
					cin>>temp;
					agregar(temp);
					break;
			case 2:
					presentar();
					break;
			case 3:
					cout<<"Inrgese el valor  Buscar"<<endl;
					cin>>temp;
					buscar(temp);
					if(T==NULL){
						cout<<"No se encontro el Registro"<<endl;
					}
					else{
						cout<<"Id: "<<T->id<<endl;
						
					}
			case 4:
				llenar();
				break;
					
			case 0:
					break;
			default:
					cout<<"Opcion No Valida"<<endl;
					
		}
		
	}while(op!=0);
	return 0;
}
void agregar(int x){
	T=new nodo();
	T->id=x;
	T->sig=NULL;
	
	if(I==NULL){
		I=T;
	}
	else{
		F->sig=T;
	}
	F=T;
}

void presentar(){
	T=I;
	while(T!=NULL){
		cout<<"ID: "<<T->id<<endl;
		T=T->sig;
	}
}
void buscar(int x){
		T=I;
		bool encontrado=false;
		while(T!=NULL && !encontrado){		
			if(T->id==x){
				encontrado=true;
			}
			else{
				T=T->sig;	
			}			
		}	
}
void llenar(){
	srand(time(NULL));
	for( int i=0;i<rand()%20;i++){
		agregar(rand()%100);
	}
}
