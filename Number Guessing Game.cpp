// Number Guessing Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	cout << "\t\t\tGuess the Number Game\t" << endl;
	cout << "======================================================================\n" << endl;
	srand(time(0));
	int num = rand() % 500 + 1;
	int guess = 0;
	int i = 0;
		while (num){
			
			cout << "\nEnter your guess: ";
			cin >> guess;
			if (guess <= 500) {
				if (guess > num) { cout << "\nToo High :("; }
				else if (guess < num) { cout << "\nToo Low :("; }
				else if (guess = num) {
					cout << endl;
					cout << " "<<guess << " Congragulation!! You Guessed it! :)";
					break;
				}
			}
			else cout << "\nPlease make sure that the number you entered is between 1-500.";
			i++;
	    }
}