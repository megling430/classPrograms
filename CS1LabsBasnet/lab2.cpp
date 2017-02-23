/*
Lab 2
By: Megan Clark -fixed
CSCI 111
Date: September 1, 2016 -fixed

This program prompts user to enter radius of a circle
and calculates and displays its area and circumference.

Algorithm steps:
1. Prompt user to enter radius of a circle and store the
radius into a variable
2. Calculate area using the formula pi * radius * radius
and store the value into a variable
3. Calculate circumference using the formula 2 * pi *
radius and store the valueinto a variable
4. Output the calculated values for area and circumference
*/
#include <iostream>//library for common input, output and formatting
#include <cmath>//library for pow and other math functions
using namespace std; //this line resolves cout, cin, endl, etc.

int main() //main entry function that returns 0
{
	const double pi = 3.14159;//variables declared and initialized
	double radius = 0, area = 0, circumference = 0;

	// prompt user asking what to do
	cout << "Please enter radius of a circle: ";
	cin >> radius; //read the entered value and store it into radius variable

	area = pi * pow(radius, 2); // same as: area = pi * radius * radius;
								//FIXME: find circumference -fixed
	circumference = (2 * pi * radius);

	cout << "Area of the circle is:\t" << area << '\n';
	//FIXME: Output the value of circumference -fixed
	cout << "Circumference of the circle is:\t" << circumference << '\n';

	cout << "Hit enter to close the program!" << '\n';
	cin.ignore(1000, '\n'); //ignore 1000 chars or until\n whichever comes first
							// make the console wait for user input
	cin.get();

	return 0;
}