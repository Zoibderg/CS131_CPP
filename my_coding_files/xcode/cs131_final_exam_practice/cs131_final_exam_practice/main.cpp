/*
 Programmer: Austin Tesch
 Date modified: 6/11/24
 Compiler used:  XCODE v. 15.0

cs131_final_exam_practice
 
 Purpose:
 
 Part 1:
 
 Write a class, SalesCls, that contains two attributes (salesAmount and SalesRep). The class must have a constructor and a member function(s). The class must do desired tasks: Assign values (any sales amount, any sales representative's name), and calculate a commission amount based on the conditions below.
 
 Commission Rate Table:

 Sales Amount                   Commission Rate

 < 5000                                      1%

 between 5000 and 10000         2%

 > 10000                                    3%
 
 The main( ) must declare an object of the class. Use the object to call a class constructor and other member functions. The output should display the name, sales amount, and commission earned. Inputs could come from the user's inputs in the main( ).

 Write the class and the main( ) that has one object declared. The object calls the appropriate member function(s).
 
 ----------------------------------
 
 Part 2:

 Modify the program in which the sales amount, sales representative's name, and calculated commission amount will be written to disk. Review Chapter 5 Pages 287-292. Examine programs pr5_16.cpp and pr5_17.cpp.
 
 ------------------------------------
 
 Part 3:
 
 --------------------------------------

    Insert two lines of code toward the end of the program.  The first line is to create an array of three objects in the main ( ).  Review Chapter 8 Section 8.12. Program 8_28.cpp is a good example.  The second line of code is to use the object at subscript/index zero, to call a member function.

*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class SalesCls{
private:
    string sales_rep;
    double sales_amount;
    
    double commission;
    double total_commission;
    
public:
    
    // constructor
    SalesCls(){
        sales_rep = "None";
        sales_amount = 0;
        
        commission = 0;
        total_commission = 0;
    }
    
    // setter functions
    void setRep(string);
    void setSales(double);
    
    // getter functions
    string getRep();
    double getSales();
    double getCommission();
    
    // operation functions
    void calcCommission();
    void writeToFile();
    
};

void SalesCls::setRep(string name){
    // set name for sales rep
    sales_rep = name;
}

void SalesCls::setSales(double sales){
    // update sales for a rep
    sales_amount = sales;
}

string SalesCls::getRep(){
    return sales_rep;
}

double SalesCls::getSales(){
    return sales_amount;
}

double SalesCls::getCommission(){
    return total_commission;
}

void SalesCls::calcCommission(){
    // calculate the commision for a rep
    
    if (sales_amount < 5000)
        commission = 0.01;
    
    else if (sales_amount > 5000 && sales_amount < 10000)
        commission = 0.02;
    
    else
        commission = 0.03;
    
    total_commission = sales_amount * commission;
}

void SalesCls::writeToFile(){
    // write commission information for rep to file
    ofstream ofile;
    
    ofile.open("sales.txt", fstream::app);
    
    ofile << getRep() << " has made a total of $" << getCommission() << " in commission." << endl;
    
    ofile.close();
}

int main(){
    SalesCls sales;
    
    // get name from user and setRep
    cout << "Sales representives name: " << endl;
    
    string user_name;
    cin >> user_name;
    
    sales.setRep(user_name);
    
    // get sales form user and setSales
    cout << "Total amount in sales: " << endl;
    
    double user_sales;
    cin >> user_sales;
    
    sales.setSales(user_sales);
    
    // calculate total commission
    sales.calcCommission();
    
    // output commission to user
    cout << sales.getRep() << " has made a total of $" << sales.getCommission() << " in commission." << endl;
    
    // part 2, write information to file
    sales.writeToFile();
    
    // satisfies part 3, no functionality
    SalesCls sales_arry[3];
    sales_arry[0].getRep();
    
    return 0;
}
