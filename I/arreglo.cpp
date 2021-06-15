#include <iostream>
#include <time.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	srand(time(NULL));
	int tan=10;
	
	
	int arreglo[tan];
	
	for(int i=0;i<tan;i++){
		arreglo[i]=-10+(rand()%20);
	}

	for(int i=0;i<tan;i++){
	cout<<i<<"--> "<<arreglo[i]<<endl;
	}
	
	int ma,me;
	ma=arreglo[0];
	me=arreglo[0];
	
	for(int i=1;i<10;i++){
		if(ma<arreglo[i]){
			ma=arreglo[i];
		}
		if(me>arreglo[i]){
			me=arreglo[i];
		}
	}
	
	cout<<"Mayor es: "<<ma<<endl;
	cout<<"Menor es: "<<me<<endl;
	
	int temp;
	for(int i=0;i<10;i++){
		for(int j=i+1;j<10;j++){
			if(arreglo[i]<arreglo[j]){
				temp=arreglo[i];
				arreglo[i]=arreglo[j];
				arreglo[j]=temp;
			}
			
		}
	}
	cout<<"Ordenar!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
	for(int i=0;i<tan;i++){
	cout<<i<<"--> "<<arreglo[i]<<endl;
	}
	return 0;
}
