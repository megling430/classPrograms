/*
LAB 6
fixme: name and date - fixed
fixme: program info -fixed

Created by Megan Clark
on October 6, 2016
for CSCI 111, Basnet

Submitted to dropbox on
October 6, 2016

*/

#include <iostream>
#include <cstdio>

using namespace std;

/*
	This program finds various statistical values given two numbers 
	using functions to compute basic mathematical equations.

	Algorithm steps: 
	1. Display a menu prompting user to select a mathematical operation
	2. Prompt user to enter two integers
	3. Program is to calculate values entered based upon operation previously 
			selected.
	4. Display calculate results with informative statements accordingly
	5. Prompt user to decide to continue running program or to terminate
			the program loop
*/

// function prototypes
// functions prints menu options
void printMenu(void);

// function that prompts user to enter two numbers
// the numbers are stored in the parameters provided
void getTwoNumbers(double &, double &);

// function that takes two numbers; find and returns sum of two
double findSum(const double &, const double &);

// function that takes two numbers; find and returns difference of two
double findDifference(const double &, const double &);

// function that takes two numbers; find and returns product of two
double findProduct(const double &, const double &);

// function that takes two numbers; find and returns quotient of two
double findQuotient(const double &, const double &);

// function that takes two numbers; find and returns average of two
void findAverage(const double &, const double &, double &);

// function that takes two numbers; find and returns larger of two
double findLarger(const double &, const double &);

// function that takes two numbers; find and returns smaller of two
double findSmaller(const double &, const double &);


int main(){
	int option = 1; // variable to store user entered option
	double num1=0, num2 =0; // variable to store 2 numbers given by user
	bool keepRunning = true;
	// loop that will make the program run until user quits or enters wrong input
	while(keepRunning){
		//display menu options
		//system("cls");
		printMenu();
		//input validation
		do{
			if(cin >> option && option >= 1 && option <= 8){
				//input is valid, break loop
				break;
			}
			else{
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Invalid option, please enter an option between 1 and 8" << endl;
			}
		}while(true);
		
		// call function(s), preform operations based on input
		switch(option){
			case 1:
			{
				getTwoNumbers(num1, num2);
				double sum = findSum(num1, num2);
				printf("%.2f + %.2f = %.2f\n", num1, num2, sum);
				break;
			}
			case 2:
			{
				// fixme: call getTwoNumbers function - fixed
				// fixme: call findDifference function and print returned value - fixed
				getTwoNumbers(num1, num2);
				double diff = findDifference(num1, num2);
				printf("%.2f - %.2f = %.2f\n", num1, num2, diff);
				break;
			}
			case 3:
			{
				// fixme: call getTwoNumbers function - fixed
				// fixme: call findProduct function and print returned value - fixed
				getTwoNumbers(num1, num2);
				double prod = findProduct(num1, num2);
				printf("%.2f * %.2f = %.2f\n", num1, num2, prod);
				break;
			}
			// fixme: finish rest of cases - fixed
			case 4:
			{
				//find quotient
				getTwoNumbers(num1, num2);
				double quot = findQuotient(num1, num2);
				printf("%.2f / %.2f = %.2f\n", num1, num2, quot);
				break;
			}
			case 5:
			{
				// find larger
				getTwoNumbers(num1, num2);
				double large = findLarger(num1, num2);
				printf("Of %.2f and %.2f, the larger number is %.2f\n", num1, num2, large);
				break;
			}
			case 6:
			{
				// find smaller
				getTwoNumbers(num1, num2);
				double small = findSmaller(num1, num2);
				printf("Of %.2f and %.2f, the smaller number is %.2f\n", num1, num2, small);
				break;
			}
			case 7:
			{
				// find average
				getTwoNumbers(num1, num2);
				double avg = 0;
				findAverage(num1, num2, avg);
				printf("Of %.2f and %.2f, their average is %.2f\n", num1, num2, avg);
				break;
			}
			default: // must be option 8
				keepRunning = false;
		}
		char again = 'n';
		printf("Would you like to continue? Enter [y/Y], anything else to quit.\n");
		cin >> again;
		if(!(again == 'y' || again == 'Y'))
			keepRunning = false;
		cin.ignore(1000, '\n');
	}
	cout << "Good bye!" << endl;
	cin.get();
	return 0;
}

void printMenu(void){
	cout << "Enter one of the following menu options [1-8]: " << endl;
	cout << "[1] Add two numbers \n";
	cout << "[2] Subtract two numbers\n";
	cout << "[3] Multiply two numbers\n";
	cout << "[4] Divide two numbers\n";
	cout << "[5] Find larger value of two numbers\n";
	cout << "[6] Find smaller value of two numbers\n";
	cout << "[7] Find average of two numbers\n";
	cout << "[8] Quit the program\n";
}

void getTwoNumbers(double &num1, double &num2){
	cout << "Enter two numbers separated by a space: ";
	cin >> num1 >> num2;
}

double findSum(const double &n1, const double &n2){
	return (n1 + n2);
}

double findDifference(const double &n1, const double &n2){
	//fixme: subtract n2 from n1 and return difference - fixed
	return (n1 - n2);
}

double findProduct(const double &n1, const double &n2){
	//fixme: find product of n1 and n2 and return it - fixed
	return (n1 * n2);
}

double findQuotient(const double &n1, const double &n2){
	//fixme: divide n1 by n2 and return it - fixed
	return (n1 / n2);
}

void findAverage(const double &n1, const double &n2, double &avg){
	//fixme: find the average of n1, n2 and update avg
	//fixme: must call findSum function
	//the average will be stored in avg
	double sum = findSum(n1, n2);
	avg = (sum / 2);
}

double findLarger(const double &n1, const double &n2){
	//fixme: find the larger of n1, n2 and return it
	double large = 0;
	large = (n1 > n2) ? n1 : n2;
	return large;
}

double findSmaller(const double &n1, const double &n2){
	//fixme: find the smaller of n1, n2 and return it
	double small = 0;
	small = (n1 < n2) ? n1 : n2;
	return small;
}
