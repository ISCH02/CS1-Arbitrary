#include <iostream>
using namespace std;

int main()
{
    int arraySize;

    cout << "How big would you like the array? " << endl;
    cin >> arraySize;

    int array[arraySize];

    for (int i = 0; i < arraySize; i++){
        cout << "What number would you like to assign array" << i << "?" << endl;
        cin >> array[i];
    }
    
    cout << "Printing contents of array" << endl;

    for (int i = 0; i < arraySize; i++){
        cout << array[i] << endl;
    }

    return 0;
}