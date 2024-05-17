/*
 
 Programmer: Austin Tesch
 Date modified: 05-17-24
 Compiler used:  XCODE v. 15.0
 
 Purpose:
 The program must use a loop to validate their answer to ensure that it is either R (for a "runner") or W (for a "walker"). The next question is:
 
 How old are you?
 The program must use a loop to check if it is in the range of ages between 13 and 70.
 
 Furthermore, the program uses the following conditions to calculate the registration fee:
 For a runner, the registration fee is $45.50, and $35.00 for a walker.
 
 Also, use the following table to calculate a discount.

           Age             Percentage of Discount

           13-25                              10%

           26-60                             15%

           61-70                             20%
 
 Finally, the program must calculate the total registration and add an 8.6% sales tax to it.

 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double const WALKER_FEE = 35.00;
    double const RUNNER_FEE = 45.50;
    double const WA_SALES_TAX = 0.086;
    
    // Prompt user for walker/runner status.
    // 'R' for runners and 'W' for walkers.
    char user_status;
    bool is_ruuner = false;
    
    cout << "Thanks for choosing to register for the program! \n"
    << "Will you be walking or running? (W/R)" << endl;
    
    cin >> user_status;
    
    while (user_status) {
        if (user_status == 'W'){
            is_ruuner = false;
            break;
        }
        else if(user_status == 'R'){
            is_ruuner = true;
            break;
        }
        else{
            cout << "Invalid input. \n"
            << "Will you be walking or running? (W/R)" <<  endl;
            cin >> user_status;
        }
    }
    
    // Promt user for age.
    cout << "How old are you?" << endl;
    
    int user_age;
    cin >> user_age;
    
    // User must be between the ages of 13 and 70.
    if (user_age < 13 || user_age > 70){
        cout << "Invalid age. Please enter an age between 13 and 70." << endl;
        cin >> user_age;
    }
    
    // Calculate registration fee.
    double total_registration_fee;
    
    // User is a walker, discount price.
    if (is_ruuner){
        total_registration_fee = RUNNER_FEE;
    }
    // User is a runner.
    else{
        total_registration_fee = WALKER_FEE;
    }
    
    // Calculate discounts.
    double user_discount;
    
    if (user_age >= 13 && user_age <= 25){
        user_discount = 0.10;
    }
    else if (user_age >= 26 && user_age <= 60){
        user_discount = 0.15;
    }
    else{
        user_discount = 0.20;
    }
    
    // Calculate total registration fee.
    double total_discount = total_registration_fee * user_discount;
    
    total_registration_fee -= total_discount;
    
    // Add sales tax.
    double total_tax = total_registration_fee * WA_SALES_TAX;
    
    total_registration_fee += total_tax;
    
    // Output total registration fee to user.
    cout << "Total cost for your registration will be: $" << setprecision(2) << fixed << total_registration_fee << endl;
    
    return 0;
}
