/*
 
 Programmer: Austin Tesch
 Date modified: 05-30-24
 Compiler used:  XCODE v. 15.0
 
 Purpose:
 Write a program that asks the user for the number of widgets that have been ordered and then displays the number of days it will take to produce them.
 
 --------------------------------------------------------------------------------------------
 
 Think about what values your program should accept for the number of widgets ordered.
 
 Design a class for a widget manufacturing plant. 
 
 Assuming that 10 widgets may be produced each hour, the class object will calculate how many days it will take to produce any number of widgets. (The plant operates two 8-hour shifts per day.)
 
 */

#include <iostream>

#include "WidgetProduction.hpp"

using namespace std;

int main(){
    WidgetProduction user_order;
    
    int widgets_ordered;
    
    cout << "How many widgets did you order?: " << endl;
    cin >> widgets_ordered;
    
    cout << "This order will take " << user_order.calcProductionTime(widgets_ordered) << " days to process." << endl;

    
    return 0;
}

