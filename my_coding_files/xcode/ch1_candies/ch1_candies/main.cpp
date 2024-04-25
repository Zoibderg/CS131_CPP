//
// Programmer: Austin Tesch
// Purpose: Calculate the totaly profit of product sales.
// Date modified: 04-12-24
//Compiler used:  XCODE V.15.0
//

#include <iostream>
using namespace std;

int main()
{
    double stock, sales, fair_price, market_price, profit;
    
    // Request the totaly number of product purchesed.
    cout << "How many candy bars where purchsed at fair price? ";
    cin >> stock;
    
    // Request the fair price of the product.
    cout << "What is the fair price of the candy bars per unit? ";
    cin >> fair_price;
    
    // Request how much of the product was sold.
    cout << "How many candy bars were sold? ";
    cin >> sales;
    
    // Request the market price of the product.
    cout << "How much did the cany bar sell for (market price)? ";
    cin >> market_price;
    
    // Calculate total profit.
    profit = (stock * market_price) - (stock * fair_price);
    
    // Return total profit
    cout << "Total profit from candy bar sales is $" << profit << endl;
    return 0;
}
