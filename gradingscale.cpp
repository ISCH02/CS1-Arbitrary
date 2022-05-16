// ask the user for their grade in a class and return they're letter grade


#include <iostream> 
using namespace std;

int main()
{
    int grade = 0;

    cout << "What is your grade in C++ currently?" << endl ;
    cin >> grade;

    if ((grade >= 90) && (grade <= 100)) {
    cout << "Your letter grade is an A" << endl;
    } else if ((grade >= 80) && (grade < 90)) {
        cout << "Your letter grade is a B" << endl;
    } else if ((grade >= 70) && (grade < 80)) {
        cout << "Your letter grade is a C" << endl;
    } else if ((grade >= 60) && (grade < 70)) {
        cout << "Your letter grade is a D" << endl;
    } else if ((grade >= 0) && (grade < 60)) {
        cout << "Your letter grade is a F" << endl;
    } else {
        cout << "please enter a valid grade" << endl;
    }

return 0;
}

