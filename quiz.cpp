#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    for (int i = 1; i <= 5; i++)
    {
        int answer = 0;
        switch (i)
        {
        case 1:
            cout << "pregunta 1" << endl;
            cout << "1" << endl;
            cout << "2" << endl;
            cout << "3" << endl;
            cout << "4" << endl;
            cout << "insert the answer : ";
            cin >> answer;
            if(answer == 3)
            {
                count++;
            }
            break;
        case 2:
            cout << "pregunta 2" << endl;
            cout << "1" << endl;
            cout << "2" << endl;
            cout << "3" << endl;
            cout << "4" << endl;
            cout << "insert the answer : ";
            cin >> answer;
            if(answer == 2)
            {
                count++;
            }
            break;
        case 3:
            cout << "pregunta 3" << endl;
            cout << "1" << endl;
            cout << "2" << endl;
            cout << "3" << endl;
            cout << "4" << endl;
            cout << "insert the answer : ";
            cin >> answer;
            if(answer == 4)
            {
                count++;
            }
            break;
        case 4:
            cout << "pregunta 4" << endl;
            cout << "1" << endl;
            cout << "2" << endl;
            cout << "3" << endl;
            cout << "4" << endl;
            cout << "insert the answer : ";
            cin >> answer;
            if(answer == 1)
            {
                count++;
            }
            break;
        case 5:
            cout << "pregunta 5" << endl;
            cout << "1" << endl;
            cout << "2" << endl;
            cout << "3" << endl;
            cout << "4" << endl;
            cout << "insert the answer : ";
            cin >> answer;
            if(answer == 5)
            {
                count++;
            }
            break;
        
        default:
            break;
        }
    }

    if (count <= 3) 
    {
        cout << "Time to brush up on your knowledge" << endl;
    }
    else if (count == 4)
    {
        cout << "Very good" << endl;
    }
    else if(count == 5)
    {
        cout << "Excellent" << endl;
    }
    
    
    
}