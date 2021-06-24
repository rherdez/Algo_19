#include <iostream>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int ma[4][4];
void llenar();
void presentar();
void menor(int,int);
void ordenar();
int presentar2(int,int);
int temp_menor;
int ix,iy;
int fx, fy;

int main(int argc, char** argv) {
	srand(time(NULL));
	cout<<"Hola Mundo"<<endl;
	llenar();
	presentar();
	ordenar();
	cout<<"Ordenados========================="<<endl;
	presentar();
	cout<<"Recursivo========================="<<endl;
	presentar2(3,3);
	
	return 0;
}
void llenar(){
	for(int x=0;x<4;x++){
		for(int y=0;y<4;y++){
			ma[x][y]=rand()%100;
		}
	}
}
void presentar(){
	for(int x=0;x<4;x++){
		for(int y=0;y<4;y++){
			if(ma[x][y]<10){
				cout<<"||0"<< ma[x][y];
			}
			else{
				cout<<"||"<< ma[x][y];	
			}
			
		}
		cout<<endl;
	}
}
void menor(int xi, int yi){
	temp_menor=ma[xi][yi];
	fx=xi;
	fy=yi;
	
	iy=yi;
	
	
	for(int x=xi;x<4;x++){
		for(int y=yi;y<4;y++){
			if(temp_menor<ma[x][y]){
				temp_menor=ma[x][y];
				fx=x;
				fy=y;
			}	
		}
		yi=0;
	}
}

void ordenar(){
	int temp;
	for(int x=0;x<4;x++){
		for(int y=0;y<4;y++){
			menor(x,y);
			temp=ma[x][y];
			ma[x][y]=temp_menor;
			ma[fx][fy]=temp;			
		}		
	}	
}
int presentar2(int x,int y){
	
	if(x<0){
		return 0;	
	}
	else
	{
		if(y==-1){
			presentar2(x-1,3);
			cout<<endl;
		}
		else{
			presentar2(x,y-1);
			if(ma[x][y]<10){
				cout<<"0"<<ma[x][y]<<"||";	
			}
			else{
				cout<<ma[x][y]<<"||";		
			}
			
		}
		
		
	}
	
}


