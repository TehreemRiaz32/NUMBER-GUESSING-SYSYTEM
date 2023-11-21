// NUMBER GUESSING SYSYTEM.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int n, guess, tries = 0;
	srand(time(0));
	n = rand() % 100 + 1; 
	cout << "Guess My Number Game\n\n";

	do
	{
		cout << "Enter a guess between 1 and 100 : ";
		cin >> guess;
		tries++;

		if (guess > n)
			cout << "  Too high!  ";
		else if (guess < n)
			cout << "  Too low!    ";
		else
			cout << "\nCorrect! You got it in " << tries << " guesses!\n";
	} 
	while (guess != n);

	return 0;
}