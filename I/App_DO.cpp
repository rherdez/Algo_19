#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void saludo();
void ingreso();
int suma();
int resta(int, int);
int presentar(int);
int x,y;
int main(int argc, char** argv) {
	int op=0;
	do{
		cout<<"Menu"<<endl;
		cout<<"1) Saludo"<<endl;
		cout<<"2) Suma"<<endl;
		cout<<"3) Resta"<<endl;
		cout<<"4) Presentar"<<endl;
		cout<<"0) Salir"<<endl;
		cin>>op;
		
		switch(op){
			case 1:
				saludo();
				break;
			case 2:
				ingreso();
				cout<<"Suma:"<<suma()<<endl;
				break;
			case 3:
				ingreso();
				cout<<"Resta:"<<resta(x,y)<<endl;
				break;
			case 4:
				presentar(3);
				break;
			case 0:				
				break;
			default:
				cout<<"Opcion no valida"<<endl;
		}
	
	}while(op!=0);
	
	cout<<"Adios";
	return 0;
}
void saludo(){
	cout<<"Hola Mundo"<<endl;
}
void ingreso(){
	
	cout<<"Ingrese N1:"<<endl;
	cin>>x;
	cout<<"Ingrese N2:"<<endl;
	cin>>y;

}

int suma(){
	return x+y;
}
int resta(int n1, int n2){
	return n1-n2;
}

int presentar(int g){
	if(g<0){
		return 0;
	}
	else{
	
		presentar(g-1);
		cout<<"No:"<<g<<endl;
	}
}
