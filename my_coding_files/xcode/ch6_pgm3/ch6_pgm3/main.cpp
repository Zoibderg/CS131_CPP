/*
 
 Programmer: Austin Tesch
 Date modified: 05-23-24
 Compiler used:  XCODE v. 15.0
 
 Purpose:
 A program that prompts the user to enter the account’s present value, monthly interest rate, and the number of months that the money will be left in the account.
 The program should pass these values to a function named "futureValue" that computes and returns the future value of the account after the specified number of months.
 The program should display the account’s future value.
 
 -----------------------------------------------------------------------
 
 Suppose you have a certain amount of money in a savings account that earns compound monthly interest, and you want to calculate the amount that you will have after a specific number of months. The formula, which is known as the future value formula, is:

 F=P*pow(1+i, t)

 The variables in the formula are as follows:
 F is the future value of the account after the specified time period.
 P is the present value of the account.
 i is the monthly interest rate.
 t is the number of months.
 
 */

#include <iostream>

using namespace std;

void grabInput(double& starting_value, double& intrest_rate, double& time_frame);
double calcFutureValue(double starting_value, double intrest, double time);

int main(){
    // get user input
    double starting_value, intrest_rate, time_frame;
    
    grabInput(starting_value, intrest_rate, time_frame);
    
    // get future value
    double future_value = calcFutureValue(starting_value, intrest_rate, time_frame);
    
    // display future value
    cout << "In " << time_frame << " months this account will have a value of $" << future_value << endl;
    
    return 0;
}

void grabInput(double& starting_value, double& intrest_rate, double& time_frame){
    // request accounts present value
    cout << "What is the present value in this account? " << endl;
    cin >> starting_value;
    
    // request monthly intrest rate
    cout << "What is the monthly intrest rate on this account (as a decimal)? " << endl;
    cin >> intrest_rate;
    
    // request number of months money will sit
    cout << "How long do you expect to let this money sit in this account (in months)? " << endl;
    cin >> time_frame;
}

double calcFutureValue(double starting_value, double intrest, double time){
    // F = P * pow(1 + i, t)
    double future_value = starting_value * pow(1 + intrest, time);
    
    return future_value;
}
