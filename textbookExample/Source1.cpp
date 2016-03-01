// Due Thursday 2-11-2016
// Print Code and outData.txt
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	ifstream inFile;
	ofstream outFile;

	double monthlySalary, monthlyBonus, taxes, bonusOne, 
		bonusTwo, taxed, paycheck, distanceTravel, travelTime, 
		average, coffeeCup, coffeeCost, salesAmount;
		
	string firstName;
	string lastName;
	string department;

	inFile.open ("inData.txt");
	outFile.open ("outData.txt");

	outFile << fixed << setprecision(2); 

	cout << "Processing your requests, Princess" << endl;

	inFile >> firstName >> lastName >> department;
	outFile << "Name: " << firstName 
			<< " " << lastName << ", Department: " <<
			department << endl;

	inFile >> monthlySalary >> monthlyBonus >> taxes;
	outFile << "Monthly Gross Salary: $" << monthlySalary <<
			", Monthly Bonus: " << monthlyBonus <<
			"%, Taxes: " << taxes << "%" << endl; 

	bonusOne = (monthlySalary * .05);
	bonusTwo = (bonusOne + monthlySalary);
	taxed = (bonusTwo * .30);
	paycheck = (bonusTwo - taxed);

	outFile << "Paycheck: $" << paycheck << endl;
	outFile << endl;

	inFile >> distanceTravel >> travelTime;
	outFile << "Distance Traveled: " << distanceTravel << 
			", Traveling Time: " << travelTime << " hours" << endl;
	
	average = (distanceTravel / travelTime);

	outFile << "Average speed: " << average << " miles per hour" << endl;
	outFile << endl;

	inFile >> coffeeCup >> coffeeCost;
	outFile << "Number of Coffee Cups Sold: " <<  setprecision (0) 
			<< coffeeCup << ", Cost: $" << setprecision (2) << coffeeCost 
			<< " per cup" << endl;

	salesAmount = (coffeeCup * coffeeCost);

	outFile << "Sales Amount = $" << salesAmount << endl;
	inFile.close();
	outFile.close();

	return 0;
}