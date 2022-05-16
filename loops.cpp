#include <iostream>
using namespace std;

void printLoop(int min_value, int max_value, int devisor, int remainder){
    
    for (int i = min_value; i <= max_value; i++)
    {
        if(i % devisor == remainder){
            cout << i << endl;
        }
    }
}

int main()
{
     while (true) {
    string answer;
    int devisor;
    int min_val;
    int max_val;

    cout << "What is the minimum value of your range? " << endl;
    cin >> min_val;

    cout << "What is the maximum value of your range? " << endl;
    cin >> max_val;

    cout << "What set of values are you looking for? (odd, even, remainder, or all)" << endl;
    cin >> answer;
    
    if (answer == "odd"){        
        printLoop(min_val, max_val, 2, 1);

    } else if (answer == "even"){
        printLoop(min_val, max_val, 2, 0);

    } else if (answer == "remainder"){

        cout << "What is the devisor? " << endl;
        cin >> devisor;

        printLoop(min_val, max_val, devisor, 0);

    } else if (answer == "all") {
        for(int i = min_val; i <= max_val; i++) {
            cout << i << endl;
        }

    } else {
        cout << "Cannot compute" << endl;
    }
    }
    return 0;
}