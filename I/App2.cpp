#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	char x;	
	cout<<"Ingrese un Caracter:"<<endl;
	cin>>x;

	switch(x){
		case 'a': 
		case 'e': 
		case 'i': 
		case 'o': 
		case 'u': 
			cout<<"El caracter ingresado es vocal"<<endl;
			break;
		default: 
			cout<<"El caracter ingresado es una consonante:"<<endl;
			break;
	}
	
	
	return 0;
}
