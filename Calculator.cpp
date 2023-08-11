// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Operations {
public:
	int  Addition(float x, float y) {
		cout << x << " + " << y << " = " << x + y << endl;
		return x + y;
	}
	int Subtraction(float x, float y) {
		cout << x << " - " << y << " = " << x - y << endl;
		return x - y;
	}
	int Multiplication(float x, float y) {
		cout << x << " * " << y << " = " << x * y << endl;
		return x * y;
	}
	int Division(float x, float y) {
		cout << x << " / " << y << " = " << x / y << endl;
		return x / y;
	}
};

class Calculator {
	float operand1, operand2;
	char op; Operations cal;
	float answer;
public:
	Calculator() {				//constructor
		cout << "\t\tSimple Calculator\t\t" << endl;
		cout << "**************************************************************************************\n" << endl;
		cout << "Enter first operand: ";
		cin >> operand1;
		cout << "Enter second operand: ";
		cin >> operand2;
		calculator(operand1, operand2);
	}

	int calculator(float x, float y) {


		int n = 1;		//initialized for running the do-while loop

		do {
			bool flag = 0;
			cout << "Press + for Addition\n";
			cout << "Press - for Subtraction\n";
			cout << "Press * for Multiplication\n";
			cout << "Press / for Division\n";

			cout << "Enter you choice: ";
			cin >> op;
			switch (op) {
			case '+':	//Addition
				answer = cal.Addition(x, y);
				break;
			case '-':	//Subtraction
				answer = cal.Subtraction(x, y);
				break;
			case '*':	//Multiplication
				answer = cal.Multiplication(x, y);
				break;
			case '/':	//Division
				answer = cal.Division(x, y);
				break;
			}
			cout << "\nIf you want to continue calculation Press 1 else 0: ";	//for performing further calculations on the answer obtained from above calculations
			cin >> flag;
			if (flag == 1) {		
				cout << "\nEnter second operand: ";
				cin >> operand2; cout << endl;
				calculator(answer, operand2);
			}
			break;		//breaking the loop when no further calculations are to be performed
		} while (n);
		return answer;
	}
};

int main()
{
	Calculator c;		//declaration of type Calculator
	
}