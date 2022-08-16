#ifndef AIRGEAD_BANKING_CALCULATE_H
#define AIRGEAD_BANKING_CALCULATE_H
#pragma once

class Calculate {

//declares public functions for calculating interest
public:
	void calcNoDeposit(double init, double interest, int years);
	void calcWithDeposit(double init, double deposit, double interest, int years);

// declares variable used inside calculation class
protected:
	double initAmount;
	double interestAmount;
	double depositAmount;
	int numYears;
	double totalInterest;
	double totalAmount;
	double yearEndInterest;
};
#endif


