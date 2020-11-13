#include <iostream>
#include "Account.h"
using namespace std;

Account::Account(int initialBalance)
{
    setAccountInitialBalance(initialBalance);
}

void Account::setAccountInitialBalance(int initialBalance)
{
    if(initialBalance >= 0)
    {
        accountBalance = initialBalance;
    }
    if(initialBalance < 0)
    {
        cout << "Account Balance cannot be less than zero." << endl;
    }
}

void Account::credit(int deposit)
{
    if(deposit > 0)
    {
        accountBalance += deposit;
    }
    if(deposit <= 0)
    {
        cout << "Deposit must be great than zero." << endl;
    }
}

void Account::debit(int drawing)
{
    if(drawing > 0)
    {
        accountBalance -= drawing;
    }
    if(drawing <= 0)
    {
        cout << "Drawing cannot be less than or equal to zero." << endl;
    }
    if(drawing > accountBalance)
    {
        cout << "Debit amount exceeded account balance." << endl;
    }
}

int Account::getAccountBalance() const
{
    return accountBalance;
}

void Account::displayBalance() const
{
    cout << "Your current account balance is " << getAccountBalance() << " . " << endl;
}

