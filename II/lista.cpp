#include "lista.h"

lista::lista()
{
	    T = NULL;
	    I = NULL;
	    F = NULL;
}

lista::~lista()
{
	    delete(T);
	    delete(I);
	    delete(F);
}

void lista::agregar(int x){
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

void lista::presentar(){
	T=I;
	while(T!=NULL){
		cout<<"ID: "<<T->id<<endl;
		T=T->sig;
	}
}
void lista::buscar(int x){
		T=I;
		A=T;
		bool encontrado=false;
		while(T!=NULL && !encontrado){		
			if(T->id==x){
				encontrado=true;
			}
			else{
				A=T;
				T=T->sig;	
			}			
		}	
}
void lista::llenar(){
	srand(time(NULL));
	for( int i=0;i<rand()%20;i++){
		agregar(rand()%100);
	}
}

void lista::modificar(){
		if(T==NULL)
		{
			cout<<"No se encontro el Registro"<<endl;
		}
		else{
			//cout<<"Id: "<<T->id<<endl;						
			int var;
			cout<<"Ingrese el nuevo valor";
			cin>>var;
			T->id=var;
		}
	
}
void lista::borrar_lista(){
    	T = NULL;
	    I = NULL;
	    F = NULL;
	    cout<<"La lista fue borrada "<<endl;
	
}

void lista::eliminar_nodo(){
	if(T==I){
		I=T->sig;
		T=T->sig;
	}else if(T==F){
			A->sig=NULL;
			F=A;
			T=A;			
		}else{
		A->sig=T->sig;
		T=A;
	}
}

void lista::ordenamiento(){
		int temp;
	T=I;
	T2=I;
	while(T != NULL){
		T2 = I;
		A = T2;
	while(T2!=NULL){
		if(T2->id<A->id){
			temp=T2->id;
			T2->id=A->id;
			A->id=temp;
		}
		A=T2;
		T2=T2->sig;
	}
   	T=T->sig;
	}
}
