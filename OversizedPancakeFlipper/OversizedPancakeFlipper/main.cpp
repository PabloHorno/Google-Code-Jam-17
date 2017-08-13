#include <iostream>
#include <fstream>

using namespace std;

int main()
{

	ifstream  input("input/A-small-practice.in");
	unsigned dato;
	while (!input.eof())
	{
		char c;
		input.get(c);
		cout << c;
	}
	cout << "Fin" << endl;
}