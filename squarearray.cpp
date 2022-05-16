#include <iostream>
using namespace std;

int main()
{
    string name;
    
    cout << "What is your name? " << endl;
    cin >> name;

    for (int i = 0; i < name.size(); i++){
        cout << name[i];
    }
    cout << endl;

    return 0;
}