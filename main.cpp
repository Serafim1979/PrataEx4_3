#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	char fname[20];
	char lname[20];
	char fullName[40];
	char select;

	do
	{
		cout << "Enter your first name: ";
		cin.getline(fname, 20);

		cout << "Enter your last name: ";
		cin.getline(lname, 20);

		strcpy_s(fullName, lname);
		strcat_s(fullName, ", ");
		strcat_s(fullName, fname);

		cout << "Here's the information in a single string: " << fullName << endl;
		cout << "Continue(y/n)?" << endl;
		cin >> select;
	} while (select != 'n');
	cout << "Good bye!" << endl;
	system("pause");
	return 0;
}