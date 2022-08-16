/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
@ Ronald W. Sudol III          @
@ SNHU--CS210			       @
@ Project Two: AIRGEAD Banking @
@ 07/31/2022				   @
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/


#include "userInput.h"		//includes userinput files
#include "Calculate.h"		//includes	calculation files

using namespace std;

bool CONTINUE_RUN = true;		//declare boolean value to keep main program running until user quits

int main() {
	
	while (CONTINUE_RUN == true) {
		userInput input1;		//establishes first menu and collects user input	
		input1.printMenu();
		Calculate calc1;		//establishes calculations and passes values from user to each
		calc1.calcNoDeposit(input1.getInitialAmount(), input1.getAnnualInterest(), input1.getNumYears());
		calc1.calcWithDeposit(input1.getInitialAmount(), input1.getMonthlyDeposit(), input1.getAnnualInterest(), input1.getNumYears());

		CONTINUE_RUN = input1.userContinue();		//prompts user to continue
	}
	
	system("cls");		//clears screan and prints exit message
	cout << "Thank you for banking with AIRGEAD!" << endl;
	cout << "GOODBYE" << endl;
	return 0;
}