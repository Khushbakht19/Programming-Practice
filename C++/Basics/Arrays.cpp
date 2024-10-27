// Program to Find the Maximum Number in an Array
#include <iostream>
using namespace std;

int main() {
    // Declaring a variable to take the size of the array
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    // Creating a dynamic array (using vector in this case for simplicity)
    int arr[n];
    
    // Taking input from the user for the elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
    }

    // Setting the first element of the array as the default maximum value
    int max = arr[0]; 

    // Iterating through the array to find the maximum value
    for (int i = 1; i < n; i++) { 
        if (arr[i] > max) {
            max = arr[i];  // Updating maximum value
        }
    }

    // Displaying the result
    cout << "The maximum number in the array is " << max << endl;

    return 0;
}
