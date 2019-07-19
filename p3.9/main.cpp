/*
 ••• P3.9
 The tax.cpp program uses a simplified version of the 2008 U.S. income tax schedule. Look up the tax brackets and rates for the current year, for both single and married filers, and implement a program that computes the actual income tax.
 */
#include <iostream>
#include <string>

using namespace std;

int main()
{
    const double RATE1 = 0.12;
    const double RATE2 = 0.25;
    const double RATE1_SINGLE_LIMIT = 32000;
    const double RATE1_MARRIED_LIMIT = 64000;
    
    double tax1 = 0;
    double tax2 = 0;
    
    double income;
    cout << "Please enter your income: ";
    cin >> income;
    
    cout << "Please enter s for single, m for married: ";
    string marital_status;
    cin >> marital_status;
    
    if (marital_status == "s")
    {
        if (income <= RATE1_SINGLE_LIMIT)
        {
            tax1 = RATE1 * income;
        }
        else
        {
            tax1 = RATE1 * RATE1_SINGLE_LIMIT;
            tax2 = RATE2 * (income - RATE1_SINGLE_LIMIT);
        }
    }
    else
    {
        if (income <= RATE1_MARRIED_LIMIT)
        {
            tax1 = RATE1 * income;
        }
        else
        {
            tax1 = RATE1 * RATE1_MARRIED_LIMIT;
            tax2 = RATE2 * (income - RATE1_MARRIED_LIMIT);
        }
    }
    
    double total_tax = tax1 + tax2;
    
    cout << "The tax is $" << total_tax << endl;
    return 0;
}
