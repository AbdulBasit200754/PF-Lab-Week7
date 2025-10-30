#include <iostream>
using namespace std;
int main() 
{
    int choice = 1;
    int num1 = 10;
    int num2 = 25;

    switch (choice) 
    {
        case 1:
        cout << "Sum = " << num1 + num2 << endl;
        break;

        case 2:
        cout << "Difference = " << num1 - num2 << endl;
        break;

        case 3:
        cout << "Exiting program..." << endl;
        break;

        default:
        cout << "Invalid choice!" << endl;
        break;
    }

    return 0;
}
