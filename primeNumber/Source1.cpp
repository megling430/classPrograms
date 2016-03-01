#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	int intg, m, flag = 0;

	cout << " I dare you to enter a positive integer: ";
	cin >> intg;
	cout << "\n Very good... Let's see here... \n" << endl;

	for (m = 2; m <= intg / 2; ++m)
	{
		if (intg % m == 0)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		cout << " Yay, " << intg << " is prime! \n" << endl;
	else
		cout << " Haha, nope. " << intg << " is not prime. \n" << endl;
	return 0;
}