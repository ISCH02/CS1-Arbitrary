#include <iostream>
using namespace std;

int main()
{
    int number, maximum, minimum;

    cout << "Enter a series of integers to find the maximum and the minimum Enter -99 to terminate." << endl;
    cout << "Enter an integer. \n";
    cin >> number;

    maximum = number;
    minimum = number;

    while (number != -99)
    {
        cout << "enter another integer: ";
        cin >> number;

        if (number != 99)
        {
            if (number > maximum) 
                maximum = number;
            if (number < minimum)
                minimum = number;
        }
    }
    cout << "The maximum is " << maximum << " and the minimum is " << minimum << ".\n";

    return 0;
}