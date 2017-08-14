#include <iostream>
#include <fstream>
#include <string>
#include "PancakeLine.h"
using namespace std;
int main()
{

	ifstream  input("input/A-small-practice.in");
	unsigned casos;
	unsigned tam_pan;
	input >> casos;

	while (!input.eof())
	{
		string s;
		input >> s >> tam_pan;

		PancakeLine pancake(s, tam_pan);

		cout << pancake.es_solucion();
		cout << s<<  "\tTam:" << tam_pan << endl;
	}
	cout << "Fin" << endl;
}
