#include<iostream>
using namespace std;
int main()
{
    int marks=85;
    switch (marks / 10)
    {
        case 10:
        case 9:
        cout << "A Grade" << endl;
        break;

        case 8:
        cout << "B Grade" << endl;
        break;

        case 7:
        cout << "C Grade" << endl;
        break;

        case 6:
        cout << "D Grade" << endl;
        break;

        case 5:
        cout << "E Grade" << endl;
        break;

        default:
        cout << "Fail" << endl;

    }
    return 0;
}