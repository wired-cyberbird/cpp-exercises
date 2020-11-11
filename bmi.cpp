#include <iostream>

using namespace std;

int main()
{
    float weight = 0, height = 0;
    cout << "insert weight and height : ";
    cin >> weight >> height;
    
    float bmi = weight/(height*height);

    cout << " bmi : " << bmi << endl;

    cout << "BMI VALUES \nUnderweight: less than 18.5\nNormal: between 18.5 and 24.9\nOverweight: between 25 and 29.9\nObese: 30 or greater" << endl; 
}