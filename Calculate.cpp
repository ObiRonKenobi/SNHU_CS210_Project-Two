#include <iostream>
#include <iomanip>
#include "Calculate.h"
#include <conio.h>

using namespace std;

//accepts variable called from userInput through main.cpp
//calculates interest with no monthly deposit
void Calculate::calcNoDeposit(double init, double interest, int years) {
	
	//accepts and sets values
	initAmount = init;
	interestAmount = interest;
	numYears = years;

	// prints formatted table header
	cout << "    Balance and Interest Without Additional Monthly Deposits    " << endl;
	cout << "================================================================" << endl;
	cout << "Year          Year End Balance          Year End Earned Interest" << endl;
	cout << "----------------------------------------------------------------" << endl;

	//performs and prints actual calculations
	totalAmount = initAmount;
	int i;
	for (i = 0; i < numYears; i++) {
		
		totalInterest = ((totalAmount) * (interestAmount / 100));

		totalAmount = totalAmount + totalInterest;

		cout << setw(2) << (i + 1) << fixed << setprecision(2) << setw(20) << totalAmount 
			<< setw(30) << totalInterest << endl;
	}
	cout << endl;
}


//calculates and prints values including monthly deposit
void Calculate::calcWithDeposit(double init, double deposit, double interest, int years) {
	
	// accepts and sets values to be used in calulations
	initAmount = init;
	depositAmount = deposit;
	interestAmount = interest;
	numYears = years;

	//prints table header
	cout << "     Balance and Interest With Additional Monthly Deposits      " << endl;
	cout << "================================================================" << endl;
	cout << "Year          Year End Balance          Year End Earned Interest" << endl;
	cout << "----------------------------------------------------------------" << endl;

	//performs and prints actual calulations by iterating through both year and month
	totalAmount = initAmount;
	int i;
	for (i = 0; i < numYears; i++) {
		
		yearEndInterest = 0;		//resets yearly interest amount to zero at beginning of each year's loop
		
		//this calculate monthly deposits and interests and generates yearly interest amount
		int j;
		for (j = 0; j < 12; j++) {

			totalInterest = (((totalAmount + depositAmount) * (interestAmount / 100)) / 12);

			yearEndInterest += totalInterest;

			totalAmount = totalAmount + depositAmount + totalInterest;
		}
		cout << setw(2) << (i + 1) << fixed << setprecision(2) << setw(20) << totalAmount
			<< setw(30) << yearEndInterest << endl;
	}


	cout << endl;
	cout << endl << "Press any key to continue...";		//pauses display until key is hit
	_getch();			//recieves next keystroke and continues program
	system("cls");		//clears screen from next display
}
