#include <iostream>
#include "lista.h"
#include <stdio.h>  
#include <windows.h> 
 
lista carta;
int op,temp;
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 } 
void dibujar(int x,int y);
void caracteres();
int main(int argc, char** argv) {
	do{
		cout<<"Menu"<<endl;
		cout<<"1) Agregar"<<endl;
		cout<<"2) Presentar"<<endl;
		cout<<"3) Buscar"<<endl;
		cout<<"4) Llenar"<<endl;
		cout<<"5) Modificar"<<endl;
		cout<<"6) Borrar Lista"<<endl;
		cout<<"7) Borrar Nodo"<<endl;
		cout<<"8) Ordenamiento"<<endl;
		cout<<"9) Dibujar"<<endl;
		cout<<"10) Caracteres"<<endl;
		
		cout<<"0) Salir"<<endl;
		cin>>op;
		
		switch(op){
			case 1:
					cout<<"Ingrese un ID"<<endl;
					cin>>temp;
					carta.agregar(temp);
					break;
			case 2:
					carta.presentar();
					break;
			case 3:
					cout<<"Inrgese el valor  Buscar"<<endl;
					cin>>temp;
					carta.buscar(temp);
				
			case 4:
				carta.llenar();
				break;
			case 5:
					cout<<"Inrgese el valor a Modificar"<<endl;
					cin>>temp;
					carta.buscar(temp);
					carta.modificar();
				break;
			case 6:
				carta.borrar_lista();
				break;
			case 7:
				cout<<"Ingrese el valor a Eliminar"<<endl;
				cin>>temp;
				carta.buscar(temp);
				if(carta.T!=NULL){
					carta.eliminar_nodo();	
				}
			case 8:
				carta.ordenamiento();
				break;
			case 9:
				dibujar(30,30);
				dibujar(50,30);
				dibujar(80,30);
				break;
			case 10:
				caracteres();
				break;		
			case 0:
					break;
			default:
					cout<<"Opcion No Valida"<<endl;
					
		}
		
	}while(op!=0);
	return 0;
}
void caracteres(){
	for(int i=0;i<255;i++){
		cout<<i<<"->"<<char(i)<<endl;
	}
}
void dibujar(int x,int y){
	int numero=9;
	int c=4;
 	gotoxy(x,y);
 	cout<<char(201)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(187);
 	gotoxy(x,y++);
 	gotoxy(x,y++);
 	cout<<char(186)<<"     "<<numero<<char(186);
 	gotoxy(x,y++);
 	cout<<char(186)<<"     "<<char(c)<<char(186); 
 	gotoxy(x,y++);
 	cout<<char(186)<<"      "<<char(186);
 	gotoxy(x,y++);
 	cout<<char(186)<<char(c)<<"     "<<char(186);
 	gotoxy(x,y++);
 	cout<<char(186)<<numero<<"     "<<char(186);
 	gotoxy(x,y++);
 	cout<<char(200)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188);
 	gotoxy(x,y++);
}

