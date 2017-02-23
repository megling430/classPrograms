/*
Lab 10
Airline Seating Assignment

Updated by: Megan Clark - fixed
Date: November 3, 2016 - fixed
Program for commercial airplane seat assignments.
Rows 1 and 2 are first class and the rest are economy class.
*/

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <iomanip>

using namespace std;

const int ROWS = 12;
const int COLUMNS = 4;

void initializeSeatPlan(char sPlan[][COLUMNS], int rowSize);
void showSeatAssignments(char sPlan[][COLUMNS], int rowSize);
void assignSeat(char sPlan[][COLUMNS], int rowSize);
void showMenu(char sPlan[][COLUMNS], int rowSize);

bool isFirstClassFull(char sPlan[][COLUMNS], int rowSize);
bool isEconomyClassFull(char sPlan[][COLUMNS], int rowSize);
void selectSeatNumber(int startRows, int endRows, int& rowNo, char& columnNo);
void assignFirstClassSeat(char sPlan[][COLUMNS], int rowSize);
void assignSeatEconomyClass(char sPlan[][COLUMNS], int rowSize);

int main(int argc, char* argv[])
{
	char seatPlan [ROWS][COLUMNS];
	char resp;
	
	bool isRunning = true;
	while (isRunning){
		
	initializeSeatPlan(seatPlan, ROWS);
	showMenu(seatPlan, ROWS);
	
	cout << "To reserve a seat enter Y/y(Yes), N/n(No): " << endl;
	cin >> resp;
	cout << endl;
	
	//fixme: add loop to make the program continue to run based on resp - fixed
	
	assignSeat(seatPlan, ROWS);
	showMenu(seatPlan, ROWS);
	cout << "Reserve another seat Y/y(Yes), N/n(No): ";
	cin >> resp;
	cout << endl;
	if (resp == 'N' || resp == 'n')
		isRunning = false;
	}
	cout << "Good bye... Enter to exit the program.";
	cin.ignore(1000, '\n');
	cin.get();
	return 0;
}

void initializeSeatPlan(char sPlan[][COLUMNS], int rowSize)
{
	int i, j;
	for (i = 0; i < rowSize; i++)
		for (j = 0; j < COLUMNS; j++)
			sPlan[i][j] = '_';
}

void showSeatAssignments(char sPlan[][COLUMNS], int rowSize)
{
	int i, j;
	cout << "        A B  C D" << endl;
	for (i = 0; i < rowSize; i++)
	{
		cout << "Row " << setw(2) << i+1 << "  ";
		for (j = 0; j < COLUMNS; j++)
		{
			cout << sPlan[i][j];
			if (j == 1)
				cout << "  ";
			else
				cout << "  ";
		}
		cout << endl;
	}
	cout << "* -- available seat" << endl;
	cout << "X -- occupied seat" << endl;
	cout << endl;
}

void assignSeat(char sPlan[][COLUMNS], int rowSize)
{
	char ticketType;
	char resp;
	cout << "Enter ticket type: [F/f] (first class); " << " [E/e] (economy class): ";
	cin >> ticketType;
	cout << endl;
	
	switch (ticketType)
	{
		case 'f':
		case 'F':
			if (!isFirstClassFull(sPlan, rowSize))
				assignFirstClassSeat(sPlan, rowSize);
			else
			{
				cout << "Sorry!!! First Class is Full" << endl;
				cout << "Enter [Y/y] to continue: ";
				cin >> resp;
				cout << endl;
			}
			break;
		case 'e':
		case 'E':
			if (!isEconomyClassFull(sPlan, rowSize))
				assignSeatEconomyClass(sPlan, rowSize);
			else
			{
				cout << "Sorry!!! Economy Class is Full" << endl;
				cout << "Enter [Y/y] to continue: ";
				cin >> resp;
				cout << endl;
			}
			break;	
			//fixme: implement case for economy class. - fixed
	}
	showSeatAssignments(sPlan, rowSize);
}

void showMenu(char sPlan[][COLUMNS], int rowSize)
{
	cout << "This program assigns seats for a commercial airplane." << endl;
	cout << "The current seat assignments is as follows." << endl;
	showSeatAssignments(sPlan, rowSize);
	cout << "Rows 1 and 2 are for first class passengers." << endl;
	cout << "Rows 3 through 12 are for economy class passengers." << endl;
}

bool isFirstClassFull(char sPlan[][COLUMNS], int rowSize)
{
	int i, j;
	
	int assignedSeats = 0;
	
	for (i = 0; i < 2; i++)
		for (j = 0; j < COLUMNS; j++)
			if (sPlan[i][j] == 'X')
				assignedSeats++;
	return (assignedSeats == 2 * COLUMNS);
}

bool isEconomyClassFull(char sPlan[][COLUMNS], int rowSize)
{
	int i, j;
	
	int assignedSeats = 0;
	
	for (i = 2; i < rowSize; i++)
		for (j = 0; j < COLUMNS; j++)
			if (sPlan[i][j] == 'X')
				assignedSeats++;
	return (assignedSeats == 10 * COLUMNS);
//fixme: implement function - fixed
}

void selectSeatNumber(int startRows, int endRows, int& rowNo, char& columnNo)
{
	cout << "Enter row number " << startRows << " - " << endRows << ": ";
	cin >> rowNo;
	cout << endl;
	
	while (rowNo < startRows || rowNo > endRows) // validate input
	{
		cout << "Enter row number " << startRows << " - " << endRows << ": ";
		cin >> rowNo;
		cout << endl;
	}
	
	cout << "Enter column number [A-D]: ";
	cin >> columnNo;
	cout << endl;
	while (columnNo < 'A' || columnNo > 'D') // input validation
	{
		cout << "Enter column number [A-D]: ";
		cin >> columnNo;
		cout << endl;
	}
}

void assignFirstClassSeat(char sPlan[][COLUMNS], int rowSize)
{
	int rowNum;
	char columnPos;
	
	if(!isFirstClassFull(sPlan, rowSize))
	{
		selectSeatNumber(1, 2, rowNum, columnPos);
		
		while (sPlan[rowNum - 1][columnPos-65] != '_')
		{
			cout << "*#*#*#*# Sorry, this seat is occupied *#*#*#*#" << endl;
			cout << "Make another selection..." << endl;
			
			showSeatAssignments(sPlan, rowSize);
			
			selectSeatNumber(1, 2, rowNum, columnPos);
		}
		sPlan[rowNum - 1][columnPos - 65] = 'X';
		cout << "This seat is reserved for you." << endl;
	}
	else
		cout << "Sorry! First class is full." << endl;
}

void assignSeatEconomyClass(char sPlan[][COLUMNS], int rowSize)
{
	//fixme: implement the rest of the function
	int rowNum;
	char columnPos;
	
	if(!isEconomyClassFull(sPlan, rowSize))
	{
		selectSeatNumber(3, 12, rowNum, columnPos);
		
		while (sPlan[rowNum - 1][columnPos-65] != '_')
		{
			cout << "*#*#*#*# Sorry, this seat is occupied *#*#*#*#" << endl;
			cout << "Make another selection..." << endl;
			
			showSeatAssignments(sPlan, rowSize);
			
			selectSeatNumber(3, 12, rowNum, columnPos);
		}
		sPlan[rowNum - 1][columnPos - 65] = 'X';
		cout << "This seat is reserved for you." << endl;
	}
	else
		cout << "Sorry! Economy class is full." << endl;
}
