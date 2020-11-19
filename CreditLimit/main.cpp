#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    /* intialize variables account number, initial balance, 
    total charges, total credits, credit limit and new balance */
    int accountNumber = 0;
    double initialBalance = 0;
    double totalCharges = 0;
    double totalCredits = 0;
    double creditLimit = 0;
    double newBalance = 0;

    while (accountNumber != -1)
    {
        /* input data for account number, initial balance
        total charges, total credits and credit limit. */
        cout << "Enter account number (or -1 to quit): ";
        cin >> accountNumber;
        /* exit from the program if account number
        input is -1. */
        if(accountNumber == -1)
        {
            exit(0);
        }
        cout << "Enter beginning balance: ";
        cin >> initialBalance;
        cout << "Enter total charges: ";
        cin >> totalCharges;
        cout << "Enter total credits: ";
        cin >> totalCredits;
        cout << "Enter credit limit: ";
        cin >> creditLimit;
        /* calculate the new balance and display new balance */
        newBalance = initialBalance + totalCharges - totalCredits;
        cout << "New Balance is " << newBalance << endl;
        /* determine if credit limit exceeded
        and display the information */
        if(newBalance > creditLimit)
        {
            cout << "Account:      " << accountNumber
                << "\nCredit Limit: " << creditLimit
                << "\nBalance:      " << newBalance
                << "\nCredit Limit exceeded." << endl;  
        }

    }
    
}