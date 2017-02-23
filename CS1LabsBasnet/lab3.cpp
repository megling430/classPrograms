/*		
 ******************************************************************************************************
 1.	Write	a	C++	program	that	prompts	user	to	enter	height	of	three	people	and	sorts	and	displays	
 the	heights	in	ascending	and	descending	order.	The	program	also prints the	max	and	min	heights.
 Program	should	continue to	run	until	the	user wants	to	quit.
 2.	Create	lab3.cpp	source	file	and	use	the	following	partial	program	as	a	hint.
 ==============================================================================
 */
 
 /*Lab 3
 
 By: Megan M Clark -fixed
 CSCI 111-02
 Date: 09/15/2016 -fixed
 
 This program prompts user to enter height of three people and
 sorts their height in ascending and descending orders. Also, 
 displays the shortest and tallest heights.
 
 Algorithm steps:
 1. Prompt user to enter 3 peoples' height as numbers
 2. Use bubble sort algorithm to sort the values in place. Bubble sort works as following:
	-Compare each pair of adjacent items and swap them if they are in the wrong order
	-The larger number bubbles towards the end-Repeat the process until no swap is needed
	-After each pass through all the numbers, 1 number is guaranteed to be sorted in its place
 3. Display the shortest and tallest heights from the sorted list of heights
 4. Display the values in ascending and descending orders
 5. Use loop to redo steps 1-5 until user wants to quit the program.
 */
 
 #include <iostream>//library for common input, output and formatting
 
 using namespace std; //this line resolves cout, cin, endl, etc.
 int main() //main entry function that returns 0
	{
		//variables to store the entered heights
	double height1 = 0, height2 = 0, height3 = 0;
	double temp; //temp variable to store value during swap
	bool keepRunning = true;
	cout << "Welcome to Height Sorting Program!\n" << endl;
	while (keepRunning == true) //loop it one or more time
	{
		// prompt user asking what to do
		cout << "Please enter 3 heights as numbers separated by space:\n";
		cin >> height1 >> height2 >> height3; //read the entered values
		cout << "Original order of heights entered: " << height1 << " " << height2 << " " << height3 << endl; 
		// bubble sort algorithm 
		// 1st pass 
		// if height1 and height2 are not in order, swap them.
		if (height1 >= height2)
		{
			temp = height1;
			height1 = height2;
			height2 = temp;
		} 
		// if height2 and height3 are not in order, swap them.
 
		if (height2 >= height3) //height 3 will be sorted
		{
			temp = height2;
			height2 = height3;
			height3 = temp;
		}
		cout << "After 1st pass: " << height1 << " " << height2 << " " << height3 << endl; 
		//2nd pass
		//start comparing from the beginning, swap the pairs if they’re not in order
		if (height1 >= height2) 
		{
			temp = height1;
			height1 = height2;
			height2 = temp;
		}
		// no need to compare height2 and height3 as height3 is already sorted
		cout<< "After 2nd pass: " << height1 << " " << height2 << " " << height3 << '\n';

		//FIXME: Complete the rest to display the values -fixed
		//FIXME: print shortest height -fixed
		//FIXME: print tallest height -fixed
		//FIXME: print heights in ascending order -fixed
		//FIXME: print heights in descending order -fixed
	    
	    cout << "The shortest height entered is: " << height1 << endl;
	    cout << "The tallest height entered is: " << height3 << endl;
	    cout << "The heights in ascending order are " << height1 << ", " << height2 << ", and " << height3 << endl;
	    cout << "The heights in descending order are " << height3 << ", " << height2 << ", and " << height1 << endl;
	    
		//the following code controls the while loop based on the user input
	    char ans= 'n';
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
	cout<< "Thank you for using the program.\n";
	cout<< "Hit enter to exit."<< "\n";
	cin.get(); // these two statements make the console to wait for user input
	return 0;
}