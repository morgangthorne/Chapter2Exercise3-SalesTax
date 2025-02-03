/*
File Name: Chapter2Exercise3-SalesTax.cpp
Programmer: Morgan Thorne
Date: February 2025
Goal:
Write a program that will compute the total sales tax on a $95 purchase. 
Assume the state sales tax is 4 percent, and the county sales tax is 2 percent.
*/

#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
  
    
    float purchase = 95;
    
    float statetax = 0.04;
    
    float countytax = 0.02;
    
    float statetaxvalue = (purchase * statetax);

    float countytaxvalue = (purchase * countytax);

    float sum;
    
    sum= (purchase +statetaxvalue + countytaxvalue);

    cout << fixed<<setprecision(2)<<"The customer spent $" << purchase << " at the store." << endl;
    cout << "With the state sales tax and county sales tax the total came to be $" << sum << endl;
    cout << "   Reciept:" << endl;
    cout << "   Item Purchased: $" << purchase << endl;
    cout << "   State tax: $" << statetaxvalue << endl;
    cout << "   County tax: $" << countytaxvalue << endl;
    cout << "   -------------------" << endl;
    cout << "   Total: $" << sum << endl;

}

