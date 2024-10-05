
// Program : Bsic Clculator
#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    char op;

    // Taking input from user.
    cout << "Enter first number." << endl;
    cin >> num1;

    cout << "Enter operator." << endl;
    cin >> op;

    cout << "Enter second number." << endl;
    cin >> num2;

    // Using switch-case to perform operation.
    switch (op)
    {
    case '+':
        cout << "Result : " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Result : " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Result : " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0)
        {
            cout << "Result: " << num1 / num2 << endl;
        }
        else
        {
            cout << "Error! Division by zero." << endl;
        }
        break;
    default:
        cout << "Invalid operator!" << endl;
    }

    return 0;
}