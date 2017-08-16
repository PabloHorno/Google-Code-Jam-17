/*
Google Code Jam 17 - Problem C. Bathroom Stalls
Purpose: Solve problem C of Qualification Round. https://code.google.com/codejam/contest/3264486/dashboard#s=p2

@author Pablo Horno
@version 1.0 14/08/17
*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream input("input/C-small-practice-1.in");
	ofstream output("output/C-small-practice-1.out");
	unsigned num_casos, i = 0;

	input >> num_casos;
	while (!input.eof())
	{
		i++;
		unsigned num_stall, num_persons, min_lr = 1, max_lr = 1;
		input >> num_stall >> num_persons;


		if (num_stall == num_persons)
		{
			min_lr = 0; max_lr = 0;
		}
		else
		{
			max_lr = num_stall / (num_persons * 2);
			min_lr = max_lr + 1;
		}
		cout << "Case #" << i << ":" << max_lr << " " << min_lr << endl;
	}

}