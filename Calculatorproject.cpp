
#include<iostream>
using namespace std;

int main()
{
    double a, b;
    char op;

    cout << "Enter the first number:" << endl;
    cin >> a;

    cout << "Enter the second number:" << endl;
    cin >> b;

    cout << "Enter the operator (+,-,*,/):" << endl;
    cin >> op;

    switch(op)
    {
        case '+':
            cout << "Result: " << a+b;
            break;

        case '-':
            cout << "Result: " << a-b;
            break;

        case '*':
            cout << "Result: " << a*b;
            break;

        case '/':
            if(b != 0)
            {
                cout << "Result: " << a/b;
            }
            else
            {
                cout << "Cannot divide by zero";
            }
            break;

        default:
            cout << "Invalid Operator";
    }

    return 0;
}
