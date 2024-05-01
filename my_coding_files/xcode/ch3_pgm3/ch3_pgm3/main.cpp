/*
 
 Programmer: Austin Tesch
 Date modified: 04-25-24
 Compiler used:  XCODE v. 15.0
 
 Purpose: A program asking the user to input how many crackers they ate and then report how many total calories were consumed.
 
 A box of crackers contains 40 crackers.
 The calorie information on the box claims that there are 10 “servings” in the box
 A serving equals 120 calories.

 */

#include <iostream>
using namespace std;

int main()
{
    // Ask user how may crackers that have eaten.
    float total_crackers_consumed;
    
    cout << "Welcome to crackers to calories converter!\n"
    << "How many crackers did you eat?" << endl;
    
    cin >> total_crackers_consumed;
    
    // Compute the total calories consumed.
    int single_serving = 4,
    calories_per_serving = 120;
    
    float calories_consumed = (total_crackers_consumed / single_serving) * calories_per_serving;
    
    // Output total calories consumed to user.
    cout << "Total calories consumed in crackers is: " << calories_consumed << endl;
    
    return 0;
}
