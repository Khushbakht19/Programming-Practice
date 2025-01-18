//Program For Swapping Numbers.

#include <iostream>
using namespace std;

// Function to swap two numbers using pass by reference
void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;

    // Input two numbers from the user
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    cout<<endl;

    cout << "Before swapping:" << endl;
    cout << "First Number = " << num1 << endl;
    cout << "Second Number = " << num2 << endl;

    cout<<endl;

    // Call the function to swap numbers
    swapNumbers(num1, num2);

    cout << "After swapping:" << endl;
    cout << "First Number = " << num1 << endl;
    cout << "Second Number = " << num2 << endl;

    return 0;
}
