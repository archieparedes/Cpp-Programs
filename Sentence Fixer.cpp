#include<iostream>
#include<string>
using namespace std;

void gramCor(string userIn)
{
	bool lastWasSpace = false;

	//Each loop looks at each character of the string
	for (int i = 0; i < userIn.length(); i++)
	{
		
		//If the char is a an extra space
		if (lastWasSpace && isspace(userIn.at(i)))
		{
			continue;
		}
		else if (isspace(userIn.at(i)))
		{
			lastWasSpace = true;
		}
		else
		{
			lastWasSpace = false;
		}
		//Uppercase the first char if not already uppercased
		if (i == 0)
		{
			cout << (char)toupper(userIn.at(i));
		}
		//Lowercase each character after index 0.
		else
		{
			cout << (char)tolower(userIn.at(i));
		}

	}
	cout << "\n";
}

int main()
{
	cout << "Basic sentence fix-er-upper!\n";
	string userInput;

	cout << "Input an invalid sentence.\n" << "Example: 'i am         going    to Go  TO  THe moVies.' \n";
	getline(cin, userInput);

	gramCor(userInput);

	system("pause");
	return 0;
}


