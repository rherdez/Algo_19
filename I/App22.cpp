#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	cout<<"1)"<<endl;
	for(int i=0;i<5;i++){
		for(int x=0;x<i;x++){
			cout<<"* ";
		}
		cout<<endl;
	}
	cout<<"2)"<<endl;
	for(int i=0;i<5;i++){
		for(int x=0;x<5-i;x++){
			cout<<"* ";
		}
		cout<<endl;
	}
	cout<<"3)"<<endl;
	for(int i=0;i<5;i++){
		for(int x=0;x<i;x++){
			cout<<"  ";
		}
		for(int x=0;x<5-i;x++){
			cout<<"* ";
		}
		cout<<endl;
	}
	cout<<"4)"<<endl;
	for(int i=0;i<5;i++){
		
		for(int x=0;x<5-i;x++){
			cout<<"  ";
		}
		for(int x=0;x<i;x++){
			cout<<"* ";
		}
		cout<<endl;
	}
	
	cout<<"5) Arriba"<<endl;
	for(int i=0;i<5;i++){
		
		for(int x=0;x<5-i;x++){
			cout<<"  ";
		}
		for(int x=0;x<i;x++){
			cout<<"* ";
		}
		for(int x=0;x<i;x++){
			cout<<"* ";
		}
		cout<<endl;
	}
	
	return 0;
}
