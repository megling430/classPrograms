/*fixme: who am i and what is this? - fixed
 * Updated by Megan Clark
 * on October 20, 2016
 * for Basnet, CSCI 111
 * Lab 8
 * 
 * Program demonstrates the use of preprocessor directive,
 * namespace, and enum type
 */

#include <iostream>
#include <cstdio>


using namespace std;
 
#ifdef _WIN32
#define clear() system("cls")
#else
#define clear() system("clear")
#endif

enum OPERATIONS { ADD, MULTIPLY, SUBTRACT, QUIT };

typedef unsigned int number;

namespace MyFunctions
{
	number findSum(const number &, const number &);
	number findProduct(const number &, const number &);
	number findDifference(const number &, const number &); 
}

void showMenu(void);
OPERATIONS getOperation(char);

int main(int argc, char* argv[])
{
	 char input;
	 number *num1; // a pointer to point that points to unsigned int aka number data type
	 num1 = new number; // allocate memory in heap and store the address in num1
	 number *num2 = new unsigned int; // declare num2 as a dynamic variable
	 number *sum = new number; // declare sum as a dynamic variable
	 //fixme: declare dynamic variables to store product and difference values -- fixed
	 //--- must use them to store the returned values from functions
	 number *prod = new number;
	 number *diff = new number;
	 OPERATIONS oper;
	 //fixme: add do/while loop to continue program until user wants to quit --fixed
	 bool keepRunning = true;
	 while (keepRunning)
	 {
		//fixme: call clear function defined above to clear screen --fixed
		clear();
		showMenu();
		cin >> input;
		oper = getOperation(input);
	 
		switch (oper)
		{
			case ADD: 
				printf("Enter two positive whole numbers separated by a space: ");
				cin >> *num1 >> *num2;
				*sum = MyFunctions::findSum(*num1, *num2);
				printf("%u + %u = %u\n", *num1, *num2, *sum);
				break;
				//fixme: complete rest of cases of OPERATIONS enum -- fixed
			case MULTIPLY:
				printf("Enter two positive whole numbers separated by a space: ");
				cin >> *num1 >> *num2;
				*prod = MyFunctions::findProduct(*num1, *num2);
				printf("%u * %u = %u\n", *num1, *num2, *sum);
				break;
			case SUBTRACT:
				printf("Enter two positive whole numbers separated by a space: ");
				cin >> *num1 >> *num2;
				*diff = MyFunctions::findDifference(*num1, *num2);
				printf("%u - %u = %u\n", *num1, *num2, *sum);
				break;	
			default:
				break;
		}
		
		printf("Would you like to continue? Enter [y/Y], anything else to quit.\n");
		cin >> input;
		if(!(input == 'y' || input == 'Y'))
			keepRunning = false;
	 }
	cin.ignore (1000,'\n');
	printf("Good-bye! Press RETURN to exit program...");
	cin.get();
	return 0;
}

void showMenu()
{
	printf("Enter one of the following menu options:\n");
	printf("[1] Add two numbers\n");
	printf("[2] Multiply two numbers\n");
	printf("[3] Subtract two numbers\n");
	printf("[4] Quit the program\n");
	printf("So, what is your choice??");
}

number MyFunctions::findSum(const number &n1, const number &n2)
{
	return n1+n2;
}

number MyFunctions::findProduct(const number &n1, const number &n2)
{
	return n1*n2;
}

number MyFunctions::findDifference(const number &n1, const number &n2)
{
	return n1-n2;
}

OPERATIONS getOperation (char choice)
{
	OPERATIONS op;
	switch(choice)
	{
		case '1':
			op = ADD;
			break;
		case '2':
			op = MULTIPLY;
			break;
		case '3':
			op = SUBTRACT;
			break;
		default:
			op = QUIT;
	}
	return op;
}

//fixme: define findProduct declared inside MyFunctions namespace -- fixed
//fixme: define findDifference declared inside MyFunctions namespace(x1-x2) --fixed
