#include "PancakeLine.h"



PancakeLine::PancakeLine(std::string str, unsigned num)
{
	linea = str;
	tam_voltear = num;
}


PancakeLine::~PancakeLine()
{
}

bool PancakeLine::es_solucion()
{
	for (auto c : linea)
		if (c != '+')
			return false;
	return true;
}
