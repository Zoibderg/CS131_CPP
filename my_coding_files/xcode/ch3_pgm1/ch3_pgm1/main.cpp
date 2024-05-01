/*
 
 Programmer: Austin Tesch
 Date modified: 04-25-54
 Compiler used:  XCODE v. 15.0
 
 Purpose: Prompt users to input monthly expenditures for various housing-related essentials. Calculate and present both the total monthly and annual costs incurred for these expenses.
 
 */

#include <iostream>
using namespace std;

int main()
{
    // Prompt user for various monthly expenditures.
    // Rent or mortgage, phone, internet, cable.
    float mortgage, phone, internet, cable;
    
    cout << "Please input monthly cost for expenditures in the following order \n"
    << "Mortgage or Rent \n" << "Phone Payments\n" << "Internet\n" << "Cable" << endl;
    
    cin >> mortgage >> phone >> internet >> cable;
    
    // Compute the monthly total cost incurred.
    float total_monthly = mortgage + phone + internet + cable;
    
    // Compute the yearly total cost incurred.
    int months_per_year = 12;
    float total_annually = total_monthly * months_per_year;
    
    // Output total cost incurred both monthly and yearly to user.
    cout << "Total monthly cost incurred: $" << total_monthly << endl;
    cout << "Total annual cost incurred: $" << total_annually << endl;
    
    return 0;
}
