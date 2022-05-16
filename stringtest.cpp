#include <iostream>
#include <cmath>
using namespace std;

void printName(string name)
{
    //float name_length = name.size();
    float midpoint = ceil(name.size() / 2);

    //cout << midpoint << endl;

    for (int i = 0; i < midpoint; i++){
        cout << name[i] << "   " << name[name.size() - 1 - i]<< endl; 
    }
}

int main ()
{
    string name;

    cout << "What is your name?" << endl;
    cin >> name;

    printName(name);

    return 0;
}
