#include "Bathroom.h"



Bathroom::Bathroom()
{
	nodes.clear();
}


void Bathroom::expandir()
{
	Stall padre = get_padre();
	Stall derecha(padre.id), izquierda(padre.id);
	if (padre.espacio_libre % 2 == 0) {
		derecha.espacio_libre = padre.espacio_libre / 2;
		izquierda.espacio_libre = padre.espacio_libre / 2 - 1;
	}
	else {
		derecha.espacio_libre = padre.espacio_libre / 2;
		izquierda.espacio_libre = padre.espacio_libre / 2;
	}

	izquierda.espacio_libre = padre.espacio_libre / 2;
	

}

Stall Bathroom::get_padre()
{
	if (nodes.empty())
		nodes.push_back(Stall(indice));
	for (auto padre : nodes) 
		if (padre.visitado == false)
			return padre;
		else
			return Stall();
}
