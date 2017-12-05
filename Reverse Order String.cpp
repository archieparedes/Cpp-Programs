#include <iostream>
#include <string>
using namespace std;

int main()
{
	string declare; 

	// String input
	cout << "Enter a string" << endl;
	getline(cin, declare);

	//In order
	cout <<"In order: " << declare;
	
	//Reverse
	cout << endl <<"In reverse order: ";

	//Prints in reverse order
	for (int i = declare.length() - 1; i >= 0; i--)
	{
		cout << declare.at(i);
	}
	cout << endl;
	
	system("pause");
	return 0;
}