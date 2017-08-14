#pragma once
#include <string>
#include <iostream>
class PancakeLine
{
public:
	PancakeLine(std::string, unsigned);
	bool es_solucion();
	size_t next();
	void voltear(size_t pos);
	std::string solucion();
	unsigned tam_voltear;
private:
	std::string linea;
};

