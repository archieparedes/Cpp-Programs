#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> //allows exit
using namespace std;

void readPayFile() {
	string filename = "pay.DAT"; 
	ifstream inFile;

	inFile.open(filename.c_str());
	if (inFile.fail() == true)
	{
		//If the file fails to open, exit
		cout << "The file " << filename << "could not be opened" << endl;
		exit(1);
	}

	string name;
	float rate;
	int hours;
	float regularPay, overtimePay, grossPay;

	//display headers
	cout << "Name\t\t\tPayRate\t\tHours\tRegularPay\tOvertimePay\tGrossPay" << endl;

	while (inFile.eof() == false) {
		//read name from file (variables separated by colons)
		getline(inFile, name, ':');
		//read in rate
		inFile >> rate;
		//ignore
		inFile.ignore();
		//read in hours
		inFile >> hours;

		//person will ONLY have regular pay and no overtime
		if (hours <= 40)
		{
			regularPay = (float)(rate * hours);
			overtimePay = 0;
			grossPay = regularPay + overtimePay;
		}
		//calculate overtime pay
		if (hours > 40)
		{
			int overtimeHours = hours - 40; //ex 48 - 40 = 8 overtime hours
			regularPay = (float)(40 * rate);
			overtimePay = (float)(overtimeHours * rate * 1.5);
			grossPay = regularPay + overtimePay; 
		}
		
		//Output
		cout << name << "\t\t" << rate << "\t\t" << hours << "\t$" << regularPay << "\t\t$" << overtimePay << "\t\t$" << grossPay;
	}
}

int main()
{

	readPayFile();
	cout << endl;
	system("pause");
	return 0;
}