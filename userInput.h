#ifndef AIRGEAD_BANKING_USERINPUT_H
#define AIRGEAD_BANKING_USERINPUT_H

#pragma once
#include <iostream>

class userInput {

//delares public functions of user input class
public:
	void printMenu();
	double getInitialAmount();
	double getMonthlyDeposit();
	double getAnnualInterest();
	int getNumYears();
	bool userContinue();

//declares variables used inside userInput class to be passed
protected:
	double initialAmount;
	double monthlyDeposit;
	double annualInterest;
	int numYears;

};

#endif