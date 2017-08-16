#include "Bathroom.h"



Bathroom::Bathroom(unsigned espacio)
{
	nodes.clear();
	nodes.push_back(Stall(espacio));
}


void Bathroom::expandir()
{
	Stall padre = get_padre();
	Stall derecha, izquierda;
	if (padre.espacio_libre % 2 == 0) {
		derecha.espacio_libre = padre.espacio_libre / 2;
		izquierda.espacio_libre = padre.espacio_libre / 2 - 1;
	}
	else {
		derecha.espacio_libre = padre.espacio_libre / 2;
		izquierda.espacio_libre = padre.espacio_libre / 2;
	}	

}

Stall Bathroom::get_padre()
{
	for (auto padre : nodes) 
		if (padre.visitado == false)
			return padre;
		else
			return Stall();
}
