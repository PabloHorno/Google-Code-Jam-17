#pragma once
#include <string>
class PancakeLine
{
public:
	PancakeLine(std::string, unsigned);
	~PancakeLine();
	bool es_solucion();
	unsigned tam_voltear;
private:
	std::string linea;
};

