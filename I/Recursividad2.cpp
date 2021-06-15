#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int sumarec(int);
int fac(int);
int main(int argc, char** argv) {
	
		int x;
		cout<<"Ingrese un numero"<<endl;
		cin>>x;
	cout<<"La sumatoria es: "<<sumarec(x)<<endl;
	cout<<"El Factorial: "<<fac(x)<<endl;
	

	
	
	return 0;
}

int sumarec(int x){
	if(x<=0){
		return 0;
	}
	else{
		return sumarec(x-1)+x;
	}
}

int fac(int x){
	if(x<=0){
		return 1;
	}
	else{
		return fac(x-1)*x;
	}	
}
