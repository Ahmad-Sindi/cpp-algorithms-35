// Algorithm Challenge
// 35 Piggy Bank Calculator
/*This program calculates the total value of coins and dollars entered by the user.
It supports pennies, nickels, dimes, quarters, and dollar coins.
The program outputs both the total value in cents and in US dollars.*/

#include <iostream>
using namespace std;

int main()
{
    // Variables for counting coins and dollars
    float penny, nickel, dime, quarter, dollar;

    // Input values for each coin type
    cout << "Enter the number of pennies: ";
    cin >> penny; // 1 cent

    cout << "Enter the number of nickels: ";
    cin >> nickel; // 5 cents

    cout << "Enter the number of dimes: ";
    cin >> dime; // 10 cents

    cout << "Enter the number of quarters: ";
    cin >> quarter; // 25 cents

    cout << "Enter the number of dollars: ";
    cin >> dollar; // 100 cents

    // Calculate total in cents
    float totalCents = penny * 1 + nickel * 5 + dime * 10 + quarter * 25 + dollar * 100;

    // Convert cents to dollars
    float totalDollars = totalCents / 100;

    // Output results
    cout << "Total in cents: " << totalCents << '\n';
    cout << "Total in dollars: $" << totalDollars;

    return 0;
}
