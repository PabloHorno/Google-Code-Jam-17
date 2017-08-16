#pragma once
#include <vector>
#include <math.h>
#include <cmath>
class Stall {
public:
	Stall() {};
	bool visitado = false;
	unsigned padre;
	unsigned espacio_libre;
};
class Bathroom
{
public:
	Bathroom();

	void expandir();

private:
	std::vector<Stall> nodes;
	Stall get_padre();
};

