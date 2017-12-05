#include <iostream>
#include "Pol_coord.h"
using namespace std;
/*
Object oriented programming. 
Pol_coord.h class file required to run program
*/


int main()
{
	Pol_coord Pol;
	double x_value, y_value;

	cout << "What is your x-value? ";
	cin >> x_value;
	cout << endl << "What is your y-value? ";
	cin >> y_value;

	Pol.setData(x_value, y_value);
	
	Pol.convToPolar(x_value, y_value);

	system("pause");
	return 0;
}
