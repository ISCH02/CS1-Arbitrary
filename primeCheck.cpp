#include <iostream>
using namespace std;

bool isPrime(int number)
{
    bool foundDivisor = false;
    int divisor = 2;

        while (divisor < number && !foundDivisor)
        {
            if (number % divisor = 0)
                foundDivisor = true;
            divisor++;
        }
    return !foundDivisor;
}

int main()
{
    int value;

    cout << "Enter a number to determine whether it's prime or not: ";
    cin >> value;

    if (isPrime(value))
        cout << value << " is prime.\n";
    else
        cout << value << " is not a prime. \n";

    return 0;
}

