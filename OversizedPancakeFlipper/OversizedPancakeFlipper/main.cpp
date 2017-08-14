#include <iostream>
#include <fstream>
#include <string>
#include "PancakeLine.h"
#include "main.h"
using namespace std;
int main()
{

	ifstream input("input/A-large-practice.in");
	ofstream output("output/A-large-practice.out");
	unsigned casos, i = 0, tam_pan;
	input >> casos;

	while (!input.eof() && i < casos)
	{
		string s;
		input >> s >> tam_pan;
		PancakeLine pancake(s, tam_pan);
		output << "Case #" << ++i << ": " << pancake.solucion() << endl;
	}
	cout << "Fin" << endl;
}
