//
#include <iostream>
using namespace std;

void printName (string name, int num_letter)
{
    cout << num_letter << endl;
}

int main()
{
    string name;
    int num_letter;

    cout << "What is the word you would like to breakdown? " << endl;
    cin >> name;

    num_letter = name.size();

    printName(name, num_letter);

    return 0;
}