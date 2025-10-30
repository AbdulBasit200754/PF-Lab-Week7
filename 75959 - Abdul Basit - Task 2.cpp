#include<iostream>
using namespace std;
int main()
{
    char op= '+';
    int a= 7; 
    int b= 10;
    switch(op)

    {
        case '+':
        cout << "addition result is " <<a+b;
        break;

        case '-':
        cout << "subtraction result is "<<a-b;
        break;
        
        case '*':
        cout << "multiplication result is "<<a*b;
        break;

        case '%':
        cout << "divide result is "<<a%b;
        break;

        default:
        cout << "Invaild Operator!";

    }

    return 0;
}

