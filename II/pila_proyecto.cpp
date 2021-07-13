#include <iostream>
#include "nodop.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
nodop *I,*T;
int op,temp;
void push(int );
int pop();
int peek();

int main(int argc, char** argv) {
	
	do{
		cout<<"Menu"<<endl;
		cout<<"1) Agregar"<<endl;
		cout<<"2) Sacar"<<endl;
		cout<<"3) Ver"<<endl;
		cout<<"0) Salir"<<endl;
		cin>>op;
		
		switch(op){
			case 1:
				cout<<"Ingrese un numero"<<endl;
				cin>>temp;
				push(temp);
				break;
			case 2:
				cout<<"Sacar: "<<pop()<<endl;
				break;
			case 3:
				cout<<"Ver: "<<peek()<<endl;
				break;
			case 0:
				break;
			default:
				cout<<"Opcion no valida"<<endl;
		}
		
	}while(op!=0);
	return 0;
}

void push(int x){
	T=new nodop();
	T->id=x;
	T->sig=NULL;
	if(I!=NULL){
		T->sig=I;
	}
	I=T;
}

int pop(){
	int te;
	if(I!=NULL){
		te=I->id;
		I=I->sig;
		return te;
	}
	else{
		return 0;
	}
}

int peek(){
	if(I!=NULL){				
		return I->id;
	}
	else{
		return 0;
	}
	
	
}
