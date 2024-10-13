// Program to print the multiplication table of a number.

#include <iostream>
using namespace std;

int main()
{
    int num; // Variable to store the number.

    // Taking input from the user.
    cout << "Enter a number to print its multiplication table: ";
    cin >> num;

    // Using a for loop to print the table.
    cout << "Multiplication Table of " << num << ":\n";
    for (int i = 1; i <= 10; ++i)
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}
