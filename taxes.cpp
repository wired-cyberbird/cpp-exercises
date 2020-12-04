#include <iostream>
using namespace std;

int main()
{
    double housing = 0;
    double food = 0;
    double clothing = 0;
    double transportation = 0;
    double education = 0;
    double health = 0;
    double vacations = 0;
    double total = 0;

    cout << "insert amount of housing expenses : ";
    cin >> housing;
    cout << "insert amount of food expenses : ";
    cin >> food;
    cout << "insert amount of transportation expenses : ";
    cin >> transportation;
    cout << "insert amount of education expenses : ";
    cin >> education;
    cout << "insert amount of health expenses : ";
    cin >> health;
    cout << "insert amount of vacations expenses : ";
    cin >> vacations;

    total = housing + food + clothing + transportation + education + health + vacations;

    int taxes = total * 0.30;

    cout << "your fair tax amount is " << taxes << endl;

}