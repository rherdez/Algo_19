#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int var=5;
	int *apuntador=new int;

//	int *apuntador;
	
//	*apuntador=150;

	cout<<"Valor: "<<var<<endl;
	cout<<"Valor: "<<*apuntador<<endl;
	
	
	cout<<"Memoria: "<<&var<<endl;
	cout<<"Memoria: "<<apuntador<<endl;
	var=18;
	
	cout<<"Valor2: "<<*apuntador<<endl;
	*apuntador=30;
	
	cout<<"Valor3: "<<var<<endl;
	// *
	// &
	// new
	return 0;
}
