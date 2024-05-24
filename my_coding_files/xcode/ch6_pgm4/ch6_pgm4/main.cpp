/*
 
 Programmer: Austin Tesch
 Date modified: 05-23-24
 Compiler used:  XCODE v. 15.0
 
 Purpose:
 A program that computes and displays the charges for a patient’s hospital stay. 
 
 First, the program should ask if the patient was admitted as an inpatient or an outpatient.
 
If the patient was an inpatient, the following data should be entered:
The number of days spent in the hospital
The daily rate
Charges for hospital services (lab tests, etc.)
Hospital medication charges

If the patient was an outpatient, the following data should be entered:
Charges for hospital services (lab tests, etc.)
Hospital medication charges
Use a single, separate function to validate that no input is less than zero. If it is, it should be reentered before being returned.

Once the required data has been input and validated, the program should use two overloaded functions to calculate the total charges. 
One of the functions should accept arguments for the inpatient data, while the other function accepts arguments for outpatient data. Both functions should return the total charges.

 */

#include <iostream>
#include <string>

using namespace std;

int validateInput(string prompt);
double calcCost(double days, double rate, double extras, double meds);
double calcCost(double charges, double meds);

int main(){
    // determine if patient is inpatient or outpatient
    string patient_status;
    double total_charges;
    
    cout << "Is the patient and inpatient (i) or and outpatient (o)?" << endl;
    cin >> patient_status;
    
    while (true){
        // collect charges for inpatient
        if (patient_status == "i" || patient_status == "I" || patient_status == "inpatient"){
            double total_days = validateInput("Input total lenght of patient stay (in days): ");
            double day_rate = validateInput("Input the daily rate: ");
            double extra_charges = validateInput("Input total charges for extra hospital services (lab tests, etc.): ");
            double med_charges = validateInput("Input total cost for medications: ");
            
            // calculate total cost
            total_charges = calcCost(total_days, day_rate, extra_charges, med_charges);
            
            // visual buffer
            cout << "-------------------------------- \n" << endl;
            
            // display total cost
            cout << "Total charges for this visit are: $" << total_charges << endl;
            
            break;
        }
        else if (patient_status == "o" || patient_status == "O" || patient_status == "outpatient"){
            // collect charges for outpatient
            double hospital_services = validateInput("Input total cost for hospital services: ");
            double med_charges = validateInput("Input total cost for medications: ");
            
            // calculate total cost
            total_charges = calcCost(hospital_services, med_charges);
            
            // visual buffer
            cout << "-------------------------------- \n" << endl;
            
            // display total cost
            cout << "Total charges for this visit are: $" << total_charges << endl;
            
            break;
        }
        else{
            // invalid patient status
            cout << "Please input i or inpatient for inpatients." << endl;
            cout << "Please input o or outpatient for outpatients." << endl;
            cin >> patient_status;
        }
    }
    
    return 0;
}

int validateInput(string prompt){
    // validate that input is greater than zero
    double value;
    
    while (true){
        cout << prompt;
        cin >> value;
        
        // input greater than zero, return
        if (value > 0){
            return value;
        }
        else {
            // input less than zero, request new input
            cout << "Value should be greater than zero." << endl;
        }
    }
}

double calcCost(double days, double rate, double extras, double meds){
    // calculate total cost for inpatient charges
    double total_cost = (days * rate) + extras + meds;
    
    return total_cost;
}

double calcCost(double charges, double meds){
    // calculate total cost for outpatient charges
    double total_cost = charges + meds;
    
    return total_cost;
}
