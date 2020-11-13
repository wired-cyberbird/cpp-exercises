#include <iostream>
#include "Account.h"
using namespace std;

int main()
{
    Account Narbit(6000);
    Account Gerrat(100);

    cout << "Account Narbit open with initial balance of : " << Narbit.getAccountBalance() 
        << "\nAccount Gerrat open with initial balance of : " << Gerrat.getAccountBalance() << endl;

    Narbit.debit(1400);
    Gerrat.credit(500);

    Narbit.displayBalance();
    Gerrat.displayBalance(); 
}