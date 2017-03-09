//Calculator Program
//Performs some basic calculations
//Programmer: Zach Murphy on 3-8-2017
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <math.h>
#include <cmath>

using namespace std;

int main() {
	// variables
	char operation;
	double operandOne, operandTwo, resultOfOperation;

	//introduction and instructions to user
	cout << "******************************************************************************\n";
	cout << "\t\t\t Calculator Program\n";
	cout << "You will input two operands, or numbers for the operation.\n";
	cout << "Please input the operands in the order you would like them processed.\n";
	cout << "You will input the operation you would desire to perform. \n";
	cout << "Valid operation symbols include: +, -, *, /, and ^.\n";
	cout << "******************************************************************************\n";

	//get input
	cout << "Please input your two operands to perform the operation on (Seperate each by a space): ";
	cin >> operandOne >> operandTwo;
	cout << "Please input the operation symbol you would like to perform: ";
	cin >> operation;

	//layout for results
	cout << endl;
	cout << "******************************************************************************\n";
	cout << "\t\t\t Results:\n";

	//use switch to determine operation to perform
	switch (operation) {
		//if adding
	case '+': resultOfOperation = operandOne + operandTwo;
		cout << fixed << setprecision(2) << operandOne << " + " << operandTwo << " = " << resultOfOperation;
		break;
		//if subtracting
	case '-': resultOfOperation = operandOne - operandTwo;
		cout << fixed << setprecision(2) << operandOne << " - " << operandTwo << " = " << resultOfOperation;
		break;
		//if multiplying
	case '*': resultOfOperation = operandOne * operandTwo;
		cout << fixed << setprecision(2) << operandOne << " * " << operandTwo << " = " << resultOfOperation;
		break;
		//if dividing
	case '/': resultOfOperation = operandOne / operandTwo;
		cout << fixed << setprecision(2) << operandOne << " / " << operandTwo << " = " << resultOfOperation;
		break;
		//if to the power of
	case '^': resultOfOperation = pow(operandOne, operandTwo);
		cout << fixed << setprecision(2) << operandOne << " ^ " << operandTwo << " = " << resultOfOperation;
		break;
		//if invalid, error check
	default: cout << "That is an invalid operation choice.";

	}
	//give a friendly exit
	cout << endl;
	cout << "******************************************************************************\n\n";
	cout << "Please enter any key to exit...";

	_getch();
	return 0;
}