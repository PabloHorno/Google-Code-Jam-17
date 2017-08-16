#pragma once
#include <vector>
#include <math.h>
#include <cmath>
class Stall {
public:
	Stall(unsigned padre) { this->id = padre; };
	bool visitado = false;
	unsigned id;
	unsigned padre;
	unsigned espacio_libre;
};
class Bathroom
{
public:
	Bathroom();

	void expandir();

private:
	unsigned indice = 0;
	std::vector<Stall> nodes;
	Stall get_padre();
};

