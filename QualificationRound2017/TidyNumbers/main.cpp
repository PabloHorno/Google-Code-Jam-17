/*
Google Code Jam 17 - Problem B. Tidy Numbers
Purpose: Solve problem B of Qualification Round. https://code.google.com/codejam/contest/3264486/dashboard#s=p1

@author Pablo Horno
@version 1.0 14/08/17
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool is_tidy_number(unsigned);
int main()
{
	ifstream input("input/B-large-practice.in");
	ofstream output("output/B-small-practice.out");
	unsigned casos, i = 0;
	input >> casos;
	while (!input.eof() && i < casos)
	{
		unsigned long long numero;
		input >> numero;
		++i;
		cout << "Case #" << i << ": " << numero << endl;
	}
}
bool is_tidy_number(unsigned num) {
	
}