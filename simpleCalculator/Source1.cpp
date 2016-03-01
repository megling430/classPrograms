// Exercise 8
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cassert>
using namespace std;
int main()
{
	int var1, var2, quotient, selection;
	cout << "\n\n\n Crazy Calculations!!\n\n Pick a number: ";
	cin >> var1;
	cout << "\n Awesome! Do it again: ";
	cin >> var2;
	cout << "\n\n\n\n Super! Now what do you want do with them?\n";
	cout << " 1. Add 'em up (+)\n";
	cout << " 2. Take 'em away (-)\n";
	cout << " 3. Make 'em multiply(*)\n";
	cout << " 4. Divide 'n' conquer 'em(/)\n";
	cout << " 5. Modulate 'em (%)\n";
	cout << " Choose Wisely....";
	cin >> selection;
	cout << " \n \n \n";

	switch (selection)
	{
	case 1:
		cout << " Ahoy there! Let's see what we're looking at here... \n";
		cout << " " << var1 << " + " << var2 << " = " << var1 + var2 << " \n\n " << endl;
		break;
	case 2:
		cout << "Ahoy there! Let's see what we're looking at here... \n";
		cout << " " << var1 << " - " << var2 << " = " << var1 - var2 << " \n\n " << endl;
		break;
	case 3:
		cout << "Ahoy there! Let's see what we're looking at here... \n";
		cout << " " << var1 << " * " << var2 << " = " << var1 * var2 << " \n\n " << endl;
		break;
	case 4:
		assert(var2 != 0);
		quotient = var1 / var2;
		cout << "Ahoy there! Let's see what we're looking at here... \n";
		cout << " " << var1 << " / " << var2 << " = " << quotient << " \n\n " << endl;
		break;
	case 5:
		cout << "Ahoy there! Let's see what we're looking at here... \n";
		cout << " " << var1 << " % " << var2 << " = " << var1 % var2 << " \n\n " << endl;
		break;
	default:
		cout << "Quit breaking things! \n\n";
	}
	return 0;
}