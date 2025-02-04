/*
File Name: Chapter2Exercise3-SalesTax.cpp
Programmer: Morgan Thorne
Date: February 2025
Goal:
Write a program that will compute the total sales tax on a $95 purchase. 
Assume the state sales tax is 4 percent, and the county sales tax is 2 percent.

Revisions:
instead of having state and country sales tax hard-coded in your program allow
the user to enter the sales taxes as well as the amount of the purchase and display
the total Sales tax.
*/

#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
  
    
    float purchase;
    
    float salestax;
    
    cout << "What was the total price of all the items bought by the customer? $";
    cin >> purchase;
    /*I'm not completely sure how to stop the code repeating the purchase after entering the price*/
    cout << fixed << setprecision(2) << purchase << endl;
    cout << "What is the sales tax? (place percentage as decimal) ";
    cin >> salestax;

    float salestaxamount = (purchase * salestax);

    float sum = (salestaxamount + purchase);

    cout << "The total amount with the purchase and sales tax is " << sum << endl;

    cout << "   Reciept:" << endl;
    cout << "   Item Purchased: $" << purchase << endl;
    cout << "   Sales Tax: $" << salestaxamount << endl;
    cout << "   -------------------" << endl;
    cout << "   Total: $" << sum << endl;




    


    /*
    Original Code
    float statetax = 0.04;
    
    float countytax = 0.02;
    
    float statetaxvalue = (purchase * statetax);

    float countytaxvalue = (purchase * countytax);

    float sum;
    
    sum= (purchase +statetaxvalue + countytaxvalue);

    cout << "With the state sales tax and county sales tax the total came to be $" << sum << endl;
    cout << "   Reciept:" << endl;
    cout << "   Item Purchased: $" << purchase << endl;
    cout << "   State tax: $" << statetaxvalue << endl;
    cout << "   County tax: $" << countytaxvalue << endl;
    cout << "   -------------------" << endl;
    cout << "   Total: $" << sum << endl;
    */
}

