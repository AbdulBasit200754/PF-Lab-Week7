#include<iostream>
using namespace std;
int main()
{
    int day=4;
    switch(day)
    {
        case 1:
        cout << "This is monday";
        break;

        case 2:
        cout <<"Tuesday";
        break;

        case 3:
        cout << "Wednesday";
        break;
        
        case 4:
        cout << "Thursday";
        break;

        case 5:
        cout << "Friday";
        break;

        default:
        cout << "Weekend";
    }
        return 0;
}
