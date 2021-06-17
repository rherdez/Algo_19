#include <iostream>
#include "alumno.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
alumno estudiante[10];
int op, contador;
void agregar();
void presentar();
void modificar();
void borrar();
void ordenar();
int main(int argc, char** argv) {
	contador=0;
	do{
		cout<<"Menu"<<endl;
		cout<<"1) Agregar"<<endl;
		cout<<"2) Presentar"<<endl;
		cout<<"3) Modificar"<<endl;
		cout<<"4) Borrar"<<endl;
		cout<<"5) Ordenar"<<endl;
		cout<<"0) Salir"<<endl;
		cin>>op;
		
		switch(op){
			case 1:
				agregar();
				break;
			case 2:
				presentar();
				break;
			case 3:
				modificar();
				break;
			case 4:
				borrar();
				break;
			case 5:
				ordenar();
				presentar();
				break;
			case 0:
				break;
			default:
				cout<<"Opcion no valida"<<endl;								
		}
		
	}while(op!=0);
		
	return 0;
}

void agregar(){
	if(contador<10){
		cout<<"Ingrese Numero de Cuenta"<<endl;
		cin>>estudiante[contador].cuenta;
		cout<<"Ingrese Nombre"<<endl;
		cin>>estudiante[contador].nombre;
		cout<<"Ingrese Apellido"<<endl;
		cin>>estudiante[contador].apellido;
		cout<<"Ingrese Nota 1"<<endl;
		cin>>estudiante[contador].nota1;
		cout<<"Ingrese Nota 2"<<endl;
		cin>>estudiante[contador].nota2;
		contador++;	
	}		
}

void presentar(){
	
	for(int i=0;i<contador;i++){
		if(estudiante[i].cuenta!=-1){
			cout<<"Pos: "<<i+1<<endl;
			cout<<"Cuenta: "<<estudiante[i].cuenta<<endl;
			cout<<"Nombre: "<<estudiante[i].nombre<<endl;
			cout<<"Apellido: "<<estudiante[i].apellido<<endl;
			cout<<"Nota1: "<<estudiante[i].nota1<<endl;
			cout<<"Nota2: "<<estudiante[i].nota2<<endl;
			cout<<"Promedio: "<<estudiante[i].promedio()<<endl;	
			cout<<endl;	
			
			
		}
		
	}
	
}
void modificar(){
	int cod,pos, temp;
	
	cout<<"Ingrese la cuenta a modificar"<<endl;
	cin>>cod;
	temp=contador;
	pos=-1;
	for(int i=0;i<contador;i++){
		if(cod==estudiante[i].cuenta){
			pos=i;
			i=temp+1;
		}
	}
	if(pos!=-1){
		cout<<"Ingrese Numero de Cuenta"<<endl;
		cin>>estudiante[pos].cuenta;
		cout<<"Ingrese Nombre"<<endl;
		cin>>estudiante[pos].nombre;
		cout<<"Ingrese Apellido"<<endl;
		cin>>estudiante[pos].apellido;
		cout<<"Ingrese Nota 1"<<endl;
		cin>>estudiante[pos].nota1;
		cout<<"Ingrese Nota 2"<<endl;
		cin>>estudiante[pos].nota2;	
	}
}
void borrar(){
		int cod,pos, temp;
	
	cout<<"Ingrese la cuenta a borrar"<<endl;
	cin>>cod;
	temp=contador;
	pos=-1;
	for(int i=0;i<contador;i++){
		if(cod==estudiante[i].cuenta){
			pos=i;
			i=temp+1;
		}
	}
	if(pos!=-1){
		estudiante[pos].cuenta=-1;
		cout<<"Dato Eliminado"<<endl;
	}		
}

void ordenar(){
	alumno temp;
	
	for (int i=1; i<contador; i++){
		for (int j=0 ; j<contador- 1; j++){
			if (estudiante[j].promedio() < estudiante[j+1].promedio()){
					
				temp = estudiante[j];
				estudiante[j] = estudiante[j+1];
				estudiante[j+1] = temp;
				
			}
		}
	}
}
