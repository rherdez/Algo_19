#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "nodo.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class lista
{
	public:
		lista();
		~lista();
		
		nodo *I,*F,*T,*A,*T2;
		void agregar(int x);
		void presentar();
		void buscar(int);
		void modificar();
		void llenar();
		void borrar_lista();
		void eliminar_nodo();
		void ordenamiento();
	protected:
};

#endif
