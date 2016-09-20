/*
Lab 2
Created by Megan Clark
Submitted 2016/08/30
CSCI 111-002

The program is to computate area and perimeter
calculations of a rectangle dependent upon user input.

Algorithm Steps:
1. Define variables for length, width
2. Solve perimeter using equation:
P = 2(L+W)
3. Solve area using equation:
A = LW
4. Display results with proper descriptions.
*/

#include <iostream>
using namespace std;

float length = 0.0, width = 0.0, perimeter = 0.0;
float area = 0.0; // declaring type float variables

string unit; // declare string

int main()
{
	cout << "Program is to compute and output the perimeter and "
		<< "area of a rectangle." << endl;
	cout << endl;
	cout << "Enter data into corresponding fields." << endl;
	cout << endl; // prompt user input

	cout << "Unit of measurement = ";
	cin >> unit;
	cout << endl; // assign value to string

	cout << "Length = ";
	cin >> length;

	cout << "Width = ";
	cin >> width;
	cout << endl; // assign values to float variables

	area = (width * length);
	perimeter = 2 * (width + length); //define respectable equations

	cout << "Dimensions of rectangle" << endl;
	cout << "Perimeter = " << perimeter << " " << unit << endl;
	cout << "Area = " << area << " " << unit << "-squared " << endl; // print results 

	return 0;
}

