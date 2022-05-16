#include <iostream>
using namespace std;

int main()
{
    
    bool isAlive;

    cout << "Are you alive? " << endl;
    cin >> isAlive;

    if (isAlive == true){
        cout << "User is alive!" << endl;

    } else if (isAlive == false){
        cout << "User is a liar!" << endl;

    } else {
        cout << "Cannot compute" << endl;
    }

    
    return 0;
}