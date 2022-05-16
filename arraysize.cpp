#include <iostream>
using namespace std;

int main()
{
    const int ASIZE = 10;

    int a_values[ASIZE];
    int count;
    int max;
    int min;

    cout << "Enter 10 values and find the maximum and the minimm. ";
    
    for (count = 0; count < ASIZE; count++)
    {
        cout << "Enter a value: ";
        cin >> a_values[count];
    }

    max = a_values[0];
    min = a_values[0];

    for (count = 1; count < ASIZE; count++)
    {
        if (a_values[count] > max)
            max = a_values[count];
        if (a_values[count] < min)
            min = a_values[count];
    }

    cout << "The highest element is " << max << " and the lowest element is " << min << ". \n";

    return 0;
}