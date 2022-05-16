#include <iostream>
using namespace std;

int main()
{
    int arraySize;

    cout << "Enter the size of your array.\n";
    cin >> arraySize;
    
    string array[arraySize];

    for (int i = 0; i < arraySize; i++){
        cout << "What name would you like for array[" << i << "]?" << endl;
        cin >> array[i];
        cout << "----------------------------------------------------\n";
    }

    for (int i = 0; i < arraySize; i++){
        for (int j = 0; j < array[i].size(); j++ ){
            cout << array[i][j] << endl;
        }
        cout << "\n";
    }


    return 0;
}