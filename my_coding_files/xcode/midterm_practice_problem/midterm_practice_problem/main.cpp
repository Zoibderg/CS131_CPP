/*
 
 Programmer: Austin Tesch
 Date modified: 05-17-24
 Compiler used:  XCODE v. 15.0
 
 Purpose:
 Create an E-Book Sales program.  The program prompts the user to enter the number of e-books ordered. You must use a loop to validate the number of books entered. It must be a positive value.
 
 Use the following information to calculate the total sales price.

       Number of e-books                      Price ($) per copy

              < 10                                              10.5

           10-20                                                8.5

           21-30                                                6.5

           >30                                                   5.5
 
 In addition,  if the sales price is greater than $200 then there is an additional discount of 15% of the sales price. The final sales price needs to add WA sales tax of 8.6%.
 
 The final sales price (formatted) is displayed on the screen and written to disk.

 */

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main(){
    int const DISCOUNT_THRESH = 200;
    double const DISCOUNT = 0.15;
    double const TAX_RATE = 0.086;
    
    // Prompt user for nubmer of e-books ordered.
    cout << "How many e-books did you purchase?" << endl;
    
    int ebooks_purchased;
    cin >> ebooks_purchased;
    
    // Validate input -- input must be positive.
    while (ebooks_purchased <= 0){
        cout << "Please provied a positive integer." << endl;
        
        cin >> ebooks_purchased;
    }
    
    // Calculate total sales price according to amount books purchased.
    double sales_price;
    
    if (ebooks_purchased < 10){
        sales_price = 10.5;
    }
    
    else if (ebooks_purchased >= 10 && ebooks_purchased <= 20){
        sales_price = 8.5;
    }
    
    else if (ebooks_purchased > 20 && ebooks_purchased <= 30){
        sales_price = 6.5;
    }
    
    else {
        sales_price = 5.5;
    }
    
    double sales_total = ebooks_purchased * sales_price;
    
    // Check for discount on sales over $200.
    if (sales_total > DISCOUNT_THRESH){
        double total_discount = sales_total * DISCOUNT;
        
        sales_total -= total_discount;
    }

    // Add sales tax to final price.
    double total_tax = sales_total * TAX_RATE;
    
    sales_total += total_tax;
    
    // Output final pice to user.
    cout << "Total cost of purchase of " << ebooks_purchased << " is: $" << setprecision(2) << fixed <<sales_total << endl;
    
    // Output final price to file.
    ofstream ofile;
    
    ofile.open("sales_total.txt");
    
    ofile << "Total cost of purchase of " << ebooks_purchased << " is: $" << setprecision(2) << fixed <<sales_total << endl;
    
    ofile.close();
    
    return 0;
}
