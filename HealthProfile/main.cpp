#include <iostream>
#include "HealthProfile.h"
using namespace std;

int main()
{
    HealthProfile pacient1("Frank", "Staylor","male", 17, 4, 1996,1.75,54);

    cout << "Health Profile of pacient 001 : " << endl;
    cout << "\nFirst name : " << pacient1.getFirstName() 
        << "\nLast name : " << pacient1.getLastName()
        << "\ngender : " << pacient1.getGender()
        << "\ndate of birth : " << pacient1.getDay() << "/" << pacient1.getMonth() << "/" << pacient1.getYear()
        << "\nheight : " << pacient1.getHeight()
        << "\nweight : " << pacient1.getWeight();
    float bmi = pacient1.getWeight()/(pacient1.getHeight()*pacient1.getHeight());
    cout << "\nage : " << pacient1.getAge()
        << "\nbmi : " << bmi << endl;

}