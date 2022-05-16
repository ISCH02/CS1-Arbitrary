//
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x = 1.00;
    double expx = 1 + x + pow(x,2)/2 + pow(x,3)/6 + pow(x,4)/24 + pow(x,5)/120 + pow(x,6)/720 + pow(x,7)/5040 + pow(x,8)/40320;

    cout << fixed << showpoint << setprecision(8);

    cout << "e raise to the power X when x equals 1 is " << expx << endl;

    return 0;
}