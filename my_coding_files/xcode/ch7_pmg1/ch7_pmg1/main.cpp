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

using namespace std;

class WidgetProduction{
    double const HOURLY_PRODUCTION = 10, SHIFT_LENGTH = 8, DAILY_SHIFTS = 2;
    
    int widgets;
    
public:
    
    double calcProductionTime(int);

};

double WidgetProduction::calcProductionTime(int widgets){
    // calculate how many days to produce any number of widgets
    // (total_widgets / 10) - total hours needed
    // (total_hours_needed / 8) - total shifts needed
    // (total_shifts / 2) - total days needed
    
    double time_frame = ((widgets / HOURLY_PRODUCTION) / SHIFT_LENGTH) / DAILY_SHIFTS;
    
    return time_frame;
}

int main(){
    WidgetProduction test;
    
    cout << test.calcProductionTime(80) << endl;

    
    return 0;
}

