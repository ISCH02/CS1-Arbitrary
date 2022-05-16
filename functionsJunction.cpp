#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double presentValue(double futureValue, double interestRate, int years)
{
    double pValue;
    pValue = futureValue / (pow(1 + interestRate, years));
    return pValue;
}

int main()
{
    double fValue;
    double preValue;
    double intRate;
    int time;
    char tryAgain = 'y';

    while ((tryAgain == 'y') || (tryAgain == 'Y'))
    {
        cout << "Enter the future value, rate of interest, and time: ";
        cin >> fValue >> intRate >> time;
        preValue = presentValue(fValue, intRate, time);
        cout << fixed << showpoint << setprecision(2);
        cout << "Need to desposit $" << preValue << ".\n";
        cout << "Would you like to try for another set of values? ";
        cin >> tryAgain;
    }

    return 0;
}

