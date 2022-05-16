#include <iostream>
using namespace std;

const int ARRAY_SIZE = 10;

void display_greater_than(int numbers[], int value)
{
    int count;

    for (count = 0; count < ARRAY_SIZE; count++)
    {
        if (numbers[count] > value)
        {
            cout << numbers[count] << "\n";
        }

    }
}
int main()
{
    int num;

    int values[ARRAY_SIZE] = { 84, 79, 13, 52, 65, 71, 87, 91, 27, 74 };

    cout << "Enter a number: ";
    cin >> num;

    display_greater_than(values, num);
    

    return 0;
}