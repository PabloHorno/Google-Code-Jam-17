#pragma once
#include <vector>
#include <math.h>
#include <cmath>
class Stall {
public:
	Stall(unsigned espacio) { this->espacio_libre = espacio;};
	Stall() {};
	bool visitado = false;
	unsigned espacio_libre;
};
class Bathroom
{
public:
	Bathroom(unsigned espacio);

	void expandir();

private:
	std::vector<Stall> nodes;
	Stall get_padre();
};

