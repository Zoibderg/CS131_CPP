// Programmer: Austin Tesch
// Purpose: A program to calcuate the users pay.
// Date modified: 04-09-2024
//Compiler used:  XCODE v.15.2

#include <iostream>
using namespace std;

int main()
{
    double hours, rate, pay;
    
    // Get the number of hours workd from user.
    cout << "How many hours did you work? ";
    cin >> hours;
    
    // Get the hourly rate of pay from user.
    cout << "How much do you get paid per hour? ";
    cin >> rate;
    
    // Calcuate the pay.
    pay = hours * rate;
    
    // Display the pay to the user.
    cout << "You have earned $" << pay << endl;
    return 0;
}
