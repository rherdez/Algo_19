#include <iostream>
 #include <stdio.h>  
 #include <windows.h>  

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
 void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }
int main(int argc, char** argv) {
	 gotoxy(15,15);  
	 cout<<"Hola Mundo"<<endl;
	 gotoxy(5,19);  
	 cout<<"Hola Mundo"<<endl;
	return 0;
}
