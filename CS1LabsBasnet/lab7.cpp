/*
FIXME: Who am I and what is this? - fixed
 
Created by Megan Clark
on October 13, 2016
for Basnet, CSCI 111

submitted to dropbox on
October 13, 2016

This program is to evaluate and return if a given phrase is a 
palindrome.

Algorith Steps:
1. Prompt user to enter a string to test if it is a palindrome.
2. Use getline function to read data of string
3. Write a function that takes in a phrase and returns if it is a 
	palindrome or not.
*/
#include <iostream>
#include <string> // string library
#include <cctype> // char data fx library
#include <cstdio>

using namespace std;

// fx prototype 
bool isPalindrome(string);

// main fx, command line arguments
int main(int argc, char* argv[])
{
	string input; // variable for user input
	string answer;
	bool palin = false;
	bool keepRunning = true; // control while loop
	while (keepRunning)
	{
		//prompt user input
		printf("Please enter word/phrase to check whether it is a palindrome:\n");
		// use getline to read and store into str var
		getline(cin, input, '\n');
		palin = isPalindrome(input);
		if (palin == true)
			printf("The phrase is a palindrome!\n");
		else
			printf("The phrase is not a palindrome!\n");
		
		printf("Would you like to test another phrase?\nEnter y or yes to continue, anything else to quit.\n");
	
		cin >> input; // read in the answer as a word
		cin.ignore(1000,'\n'); //ignores new line char
		string answer = "";
		
		for (int i = 0; i < input.length(); i++)
			answer += char(tolower(input.at(i))); 
			//converts uppercase letter to lowercase and concatenate it
			//to answer var
			
		if (!(answer == "y" || answer == "yes"))
			keepRunning = false;
	}
	return 0;
}

//function definition for isPalindrome
// takes some string phrase and returns true if it is a palindrome otherwise
//returns false

bool isPalindrome(string phrase)
{
	bool isPalin = true;
	//FIXME: implement the rest of the fx 
	/* step 3:
	a. using loop, compare two chars from each end of string
		(work out to in, case insensitive)
	b. ignore symbols
	c. as soon as 2 chars do not match, break loop and return false
	d. complete matching to middle index, return true
		(string w/ even # !middle index) */
		string words;
		int c = phrase.length();
		for (int i = 0; i < c; i++)
		{
			if (isalpha(phrase[i]))
			words += char(tolower(phrase.at(i)));
		}
		int i = 0;
		int d = (words.length()-1);	// (x - 1) makes it in-of-bound	
		while (isPalin && i <= d)
		{
			//cout << words[i] << words[d] << endl;
			if (words[i] != words[d])
				isPalin = false;
			i++;
			d--;
		}
	return isPalin;
}
