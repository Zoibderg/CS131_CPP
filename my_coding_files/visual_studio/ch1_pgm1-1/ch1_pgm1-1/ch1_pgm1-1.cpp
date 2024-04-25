// Programmer: Austin Tesch
// Purpose: This program will calcuate the users pay.
// Date modified: 04-12-24
//Compiler used:  MS VC++ 2013

#include <iostream>
using namespace std;

int main()
{
	double hours, rate, pay;

	// Request number of hours worked from user. 
	cout << "How many hours did you work total in this pay period? ";
	cin >> hours;

	// Request the hourly pay rate from the user.
	cout << "How much do you get paid per hour? ";
	cin >> rate;

	// Calculate total pay.
	pay = hours * rate;

	// Display pay to the user.
	cout << "You have earned a total of $" << pay << " (before taxes)." << endl;
	return 0;
}