#include <iostream>
#include <iomanip>
#include <conio.h>
#include "userInput.h"


using namespace std;
// defines get methods to pass user input to calculation.cpp
double userInput::getInitialAmount() {
	return initialAmount;
}
double userInput::getMonthlyDeposit() {
	return monthlyDeposit;
}
double userInput::getAnnualInterest() {
	return annualInterest;
}
int userInput::getNumYears() {
	return numYears;
}

// prints menu and accepts user inputsand assigns to passable values
void userInput::printMenu() {
	cout << "**********************************" << endl;
	cout << "*********** Data Input ***********" << endl;
	cout << "Initial Investment Amount: $";
	cin >> initialAmount;
	cout << "Monthly Deposit: $";
	cin >> monthlyDeposit;
	cout << "Annual Interest: %";
	cin >> annualInterest;
	cout << "Number of years: ";
	cin >> numYears;
	cout << "Press any key to continue..." << endl;
	_getch();		//pauses screen until user hits a key
	system("cls");		// clears screen for next display
}

// collects user input to either continue or quit program
bool userInput::userContinue() {
	char selection;
	
	while (true) {
		cout << "Would you like to input new" << endl;
		cout << "data and try again? (Y/N)" << endl;
		cin >> selection;

		//validates user input and returns boolean value to work with while loop in main.cpp
		if (tolower(selection) == 'y') {
			system("cls");
			return true;
			break;
		}
		else if (tolower(selection) == 'n') {
			system("cls");
			return false;
			break;
		}
		else {
			system("cls");
			cout << "INVALID ENTRY" << endl;
			cout << "Please, try again." << endl;
			continue;
		}
	}
}