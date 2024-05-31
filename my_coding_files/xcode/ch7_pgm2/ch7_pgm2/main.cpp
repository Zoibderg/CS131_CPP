/*
 
 Programmer: Austin Tesch
 Date modified: 05-31-24
 Compiler used:  XCODE v. 15.0
 
 Purpose:
 A program that uses a structure named CorpData to store the following information on a company division: 
 division name (e.g., East, West, North, or South), qtr1 sales, qtr2 sales, qtr3 sales, and qtr4 sales

 Include a constructor that allows the division name and four quarterly sales amount to be specified at the time a CorpData variable is created.

 The program should create four CorpData variables, each representing one of the following corporate divisions: 
 East, West, North, and South.
 
 These variables should be passed one at a time, as constant references, to a function that computes the division’s annual sales total and quarterly average, and displays these along with the division name.
 
 */

#include <iostream>
#include <string>

using namespace std;

struct CorpData{
    string division;
    double q1_sales, q2_sales, q3_sales, q4_sales;
    
    // constructor
    CorpData(string location, double q1, double q2, double q3, double q4) :
    division(location), q1_sales(q1), q2_sales(q2), q3_sales(q3), q4_sales(q4) {}
};

void CalcDivisionData(const CorpData& division);

int main(){
    CorpData east("East", 10000.0, 12000.0, 11000.0, 13000.0);
    CorpData west("West", 9000.0, 15000.0, 14000.0, 16000.0);
    CorpData north("North", 20000.0, 22000.0, 21000.0, 23000.0);
    CorpData south("South", 18000.0, 17000.0, 19000.0, 16000.0);

    CalcDivisionData(east);
    CalcDivisionData(west);
    CalcDivisionData(north);
    CalcDivisionData(south);
    
    return 0;
}

void CalcDivisionData(const CorpData& division){
    // calculate annual sales and quarterly sales
    double annual_sales = division.q1_sales + division.q2_sales + division.q3_sales + division.q4_sales;
    double avarage_quarterly_sales = annual_sales / 4;
    
    // sales information output
    cout << "DIVISION: " << division.division << endl;
    cout << "ANNUAL SALES TOTAL: $" << annual_sales << endl;
    cout << "Avarage Quarterly Sales: $" << avarage_quarterly_sales << endl;
    cout << "\n ---------------------------------------------- \n" << endl;
    
}
