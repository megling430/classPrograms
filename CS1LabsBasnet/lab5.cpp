/*
Lab 5
Updated By: MEGAN CLARK - fixed

CSCI 111
Date: September 29, 2016 - fixed
Submitted to dropbox: October 3, 2016

	Program that prompts user to enter two points in the form (x1, y1) 
and (x2, y2) and finds the distance between the two points using a function.

Algorithm steps:
	1. Define a function called findDistance(...) that takes four 
parameters x1, y1 and x2, y2 as two points
		a. finds the distance between them using the 
		   equation: √((x2-x1)^2 + (y2-y1)^2)
		b. returns the calculated distance value
	2. Prompt user to enter four numbers
	3. Convert the values into float and store them into variables
	4. Call function getDistance by passing 4 entered numbers as arguments
	5. Display results with proper description. Format output numbers to 2 
decimal points.
	6. Test and validate that program output is correct for a given set
of input points.
	7. Using a loop repear step 2-7 until user wants to quit.
*/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <stdio.h>

using namespace std;

// function prototypes

// function that calculates the distance between two points
// x1, y1 and x2, y2 and returns the calculated value
double findDistance(int, int, int, int);

int main()
{
	int x1, y1, x2, y2;
	char ch;
	bool keepRunning = true;
	
	while (keepRunning == true){	
		// FIXME - loop until user wants to quit - fixed
		system("cls");
		cout << "Program calculates distance between 2 points on a 2D coordinate plane." << endl;
		cout << "Enter a point in the form of (x, y): ";
		// parse the input stream
		cin >> ch >> x1 >> ch >> y1 >> ch; // value stored in ch is ignored
		printf("(x1, y1) = (%d, %d)\n", x1, y1);
		cout << "Enter a second point in the form (x, y): ";
		cin >> ch >> x2 >> ch >> y2 >> ch; 
		printf("(x2, y2) = (%d, %d)\n", x2, y2);
		//FIXME - Read/parse the second point and store data into variables x2 and y2 - fixed
		//FIXME - call findDistance function passing proper arguments -fixed
		//FIXME - using printf function display the returned distance with proper description - fixed
		printf("The distance is %.2f units. \n", findDistance(x1, y1, x2, y2));
		
		char ans = 'n';
		cout<< "\nWould you like to enter another set of heights?\nEnter y or Y to continue, anything else to quit the program.\n";
		//FIXME: Read the entered value and store it into ans variable -fixed
		//FIXME: Compare ans with ‘y’ or ‘Y’ and change keepRunning variable accordingly -fixed
		cin >> ans;
		
        if (ans == 'y' || ans == 'Y')
		{
			keepRunning = true;
		}
		else 
		{
			keepRunning = false;
		}
		
	}
	cin.ignore(1000, '\n');
	cout << "Good bye!" << endl;
	cin.get();
	return 0;
}

double findDistance(int x1, int y1, int x2, int y2)
{
	//FIXME - Find the distance between (x1, y1) and (x2, y2) - fixed
	//following algorithm step 1
	//return the calculated distance
	double distance = 0; 
	double sum1 = 0;
	double sum2 = 0;
	double sum3 = 0; 
	double sum4 = 0;
	
	sum1 = x2-x1;
	sum2 = y2-y1;
	sum3 = pow(sum1, 2);
	sum4 = pow(sum2, 2);
	
	distance = (sqrt(sum3 + sum4));
	
	return distance;
}
