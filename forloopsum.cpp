#include <iostream>
using namespace std;

int main()
{
    int num, total = 0, count;

    do
    {
    cout << "enter a positive integer." << endl;
    cin >> num;
    } while (num < 0);

    for (count = 1, count <= num, count++;)
    {
        total += count;
    } 

    cout << "The sum of numbers from 1 to " << num << " is " << total << "." << endl;
    
    return 0;
}