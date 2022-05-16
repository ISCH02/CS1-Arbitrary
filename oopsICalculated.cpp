#include <iostream>
#include <cmath>
using namespace std;

double myAdd (double numA, double numB) {
   double sum = numA + numB;

    return sum;
}
double mySubtract (double numA, double numB) {
    double difference = numA - numB;

    return difference;
}
double myMultiply (double numA, double numB) {
    double product = numA * numB;

    return product;
}
double myDivide (double numA, double numB) {
    double quotient = numA / numB;

    return quotient;
}
double myPower (double numA, double numB) {
    double product = pow(numA, numB);

    return product;
}
int main()
{
    string operation;
    double numA;
    double numB;

    cout << "What operation would you like to perform? (Add, Subtract, Multiply, Divide, Power)" << endl;
    cin >> operation;

    cout << "What number would you like as #A?" << endl;
    cin >> numA;

    cout << "What number would you like as #B?" << endl;
    cin >> numB;

    if (operation == "add"){
        double result = myAdd(numA, numB);
        cout << result << " is the sum of your two numbers" << endl;
    }
    else if (operation == "subtract"){
        double result = mySubtract(numA, numB);
        cout << result << " is the difference between your two numbers" << endl;
    }
    else if (operation == "multiply"){
        double result = myMultiply(numA, numB);
        cout << result << " is the product of your two numbers." << endl;
    }
    else if (operation == "divide"){
        if (numB == 0){
            cout << "Anything divided by zero is zero, dumbo." << endl;
        }
        else {
        double result = myDivide(numA, numB);
        cout << result << " is the quotient of your two numbers." << endl;
        }
    }
    else if (operation == "power"){
        double result = myPower(numA, numB);
        cout << result << " the power of your two numbers." << endl;
    }
    else {
        cout << "Please enter a listed operation." << endl;
    }
    return 0;
}