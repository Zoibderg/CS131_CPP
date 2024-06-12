/*
 Programmer: Austin Tesch
 Date modified: 6/12/24
 Compiler used:  XCODE v. 15.0

cs131_final_exam
 
 Exam Problem:
 Write a class, IncomeTaxCls. The class contains two attributes: a TaxpayerID and an annual income amount. The class must have a two-parameter constructor and member functions such as get and set member functions and a member function calculate(). The calculate( ) function is used to calculate a federal income tax amount based on the conditions below. Implement the class and the main( ) function.
 
 The main ( ) program/function must do the following tasks:
 
 1. Create an array of three objects (10 points) or one object (7 points), TaxPayerList, of the class calling/invoking the constructor. As a result, the data members/private members of the class will contain the assigned values passed to the constructor parameters.
 
 2. Create one object, TaxPayer4, of the class. Use the object to call the set member functions. As a result, the data members/private members of the class will contain the assigned values passed to the set member functions.
 
 3. Use a loop to iterate through each object in the TaxPayerList in which it calls the member function "calculate()".
 
 4. Use TaxPayer4 to call the member function calculate( ).
 
 5. Display the names, income amount, and tax amount(s) of all objects, TaxPayerList, and TaxPayer4.

*/

#include <iostream>
#include <iomanip>

// only used to simplify code for this class
using namespace std;

class IncomeTaxCls{
private:
    int TaxpayerID;
    double annual_income_amount, tax_rate;
    
public:
    // constructors
    IncomeTaxCls(){
        TaxpayerID = 0;
        annual_income_amount = 0.0;
    }
    
    IncomeTaxCls(int taxID, double income){
        TaxpayerID = taxID;
        annual_income_amount = income;
    }
    
    // getter functions
    int getTaxID(){
        return TaxpayerID;
    }
    
    double getAnnualIncome(){
        return annual_income_amount;
    }
    
    // setter functions
    void setTaxID(int taxID){
        TaxpayerID = taxID;
    }
    
    void setAnnualIncome(double income){
        annual_income_amount = income;
    }
    
    // prototypes
    double calcRate();
};

double IncomeTaxCls::calcRate(){
    /*
     
     If the annual income amount is between $1-$10000.0, the tax rate is 5 %.

     If the annual income amount is between $10001.0-$30000.0, the tax rate is 8 %.

     If the annual income amount is between $30001.0-$50000.0, the tax rate is 10 %.

     If the annual income amount is greater than $50000.0, the tax rate is 15%.
     
     */
    if (annual_income_amount > 0 && annual_income_amount <= 10000.0)
        tax_rate = 0.05;
    
    else if (annual_income_amount >= 10001.0 && annual_income_amount <= 30000.0)
        tax_rate = 0.08;
    
    else if (annual_income_amount >= 30001.0 && annual_income_amount <= 50000.0)
        tax_rate = 0.10;
    
    else
        tax_rate = 0.15;
    
    return tax_rate;
}

int main(){
    
    // create an array of 3 objects
    IncomeTaxCls TaxPayerList[3];
    
    // populate array
    for (int i = 0; i < 3; i++){
        TaxPayerList[i].setTaxID(i);
        
        switch (i) {
            case 0:
                TaxPayerList[i].setAnnualIncome(5000.0);
                break;
                
            case 1:
                TaxPayerList[i].setAnnualIncome(17000.0);
                break;
                
            case 2:
                TaxPayerList[i].setAnnualIncome(40000.0);
                break;
                
            default:
                break;
        }
    }
    
    // create a single object, TaxPayer4
    IncomeTaxCls TaxPayer4;
    
    // loop through taxlist and calculate
    for (int i = 0; i < 3; i++) {
        cout << "TaxPayerID: " << TaxPayerList[i].getTaxID() << endl;
        cout << "Annual Income: $" << TaxPayerList[i].getAnnualIncome() << endl;
        cout << "Tax Rate: " << TaxPayerList[i].calcRate() * 100 << "%" << endl;
        cout << "\n" << endl;
    }
    
    TaxPayer4.setTaxID(4);
    TaxPayer4.setAnnualIncome(55000.0);
    
    cout << "TaxPayerID: " << TaxPayer4.getTaxID() << endl;
    cout << "Annual Income: $" << TaxPayer4.getAnnualIncome() << endl;
    cout << "Tax Rate: " << TaxPayer4.calcRate() * 100 << "%" << endl;
    cout << "\n" << endl;

    return 0;
}
