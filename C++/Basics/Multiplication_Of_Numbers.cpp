// Program to check if a number is prime.

#include <iostream>
using namespace std;

int main()
{
    int num; // Variable to store the number.
    bool isPrime = true; // Assume the number is prime initially.

    // Taking input from the user.
    cout << "Enter a number to check if it's prime: ";
    cin >> num;

    // 0 and 1 are not prime numbers.
    if (num <= 1)
    {
        isPrime = false;
    }
    else
    {
        // Check divisors from 2 to sqrt(num).
        for (int i = 2; i <= num / 2; ++i)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    // Display the result.
    if (isPrime)
        cout << num << " is a prime number.\n";
    else
        cout << num << " is not a prime number.\n";

    return 0;
}