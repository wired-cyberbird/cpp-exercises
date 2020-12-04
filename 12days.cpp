#include <iostream>
using namespace std;

int main()
{
    string day1 = "A Partridge in a Pear Tree";
    string day2 = "Two Turtle Doves";
    string day3 = "Three French Hens";
    string day4 = "Four Calling Birds";
    string day5 = "Five Golden Rings";
    string day6 = "Six Geese a Laying";
    string day7 = "Seven Swans a Swimming";
    string day8 = "Eight Maids a Milking";
    string day9 = "Nine Ladies Dancing";
    string day10 = "Ten Lords a Leaping";
    string day11 = "Eleven Pipers Piping";
    string day12 = "12 Drummers Drumming";
    string chorus = "my true love sent to me:";
    string first = "first";
    string second = "second";
    string third = "third";
    string fourth = "fourth";
    string fifth = "fifth";
    string sixth = "sixth";
    string seventh = "seventh";
    string eighth = "eighth";
    string ninth = "ninth";
    string tenth = "tenth";
    string eleventh = "eleventh";
    string twelfth = "twelfth";
    for (int i = 1; i <= 12; i++)
    {
        cout << "On the ";

        switch (i)
        {
        case 1:
            cout << first;
            break;
        case 2:
            cout << second;
            break;
        case 3:
            cout << third;
            break;
        case 4:
            cout << fourth;
            break;
        case 5:
            cout << fifth;
            break;
        case 6:
            cout << sixth;
            break;
        case 7:
            cout << seventh;
            break;
        case 8:
            cout << eighth;
            break;
        case 9:
            cout << ninth;
            break;
        case 10:
            cout << tenth;
            break;
        case 11:
            cout << eleventh;
            break;
        case 12:
            cout << twelfth;
        default:
            break;
        }

        cout << " day of Christmas." << endl;
        cout << chorus << endl;

        if(i >= 12)
        {
            cout << "12 Drummers Drumming" << endl;
        }

        if(i >= 11)
        {
            cout << "Eleven Pipers Piping" << endl;
        }

        if(i >= 10)
        {
            cout << "Ten Lords a Leaping" << endl;
        }

        if(i >= 9)
        {
            cout << "Nine Ladies Dancing" << endl;
        }

        if(i >= 8)
        {
            cout << "Eight Maids a Milking" << endl;
        }

        if(i >= 7)
        {
            cout << "Seven Swans a Swimming" << endl;
        }

        if(i >= 6)
        {
            cout << "Six Geese a Laying" << endl;
        }

        if(i >= 5)
        {
            cout << "Five Golden Rings" << endl;
        }

        if(i >= 4)
        {
            cout << "Four Calling Birds" << endl;
        }
        
        if(i >= 3)
        {
            cout << "Three French Hens" << endl;
        }

        if(i >= 2)
        {
            cout << "Two Turtle Doves" << endl;
        }
        
        if (i < 2)
        {
            cout << "A Partridge in a Pear Tree" << endl;
        }
        else if (i >= 2)
        {
            cout << "and a Partridge in a Pear Tree." << endl;
        }

        cout << "\n";
        

    }
    
}