// Program for adding two numbers by using input_output method.

#include <iostream>
using namespace std;

int main()
{
    // Making two variables.
    int num1, num2;

    // Taking input from user.
    cout << "Enter first number :" << endl;
    cin >> num1;
    cout << "Enter second number :" << endl;
    cin >> num2;

    // Writing the function for adding two numbers.
    int sum = num1 + num2;

    // Displaying result:
    cout << "The sum of these two numbers is " << endl;
    cout << sum << endl;

    return 0;
}