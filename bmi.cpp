//Group #
//Ishaan C., (other group mates)
//02.08.2022
//The purpose of this progaram to compute the BMI to determine whether a person is underweight, overweight, or optimal weight.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    // Declare variables weight (pounds), height (inches), and BMI
    double weight;
    double height;
    double BMI;

    cout << "Enter the weight and the height" << endl;
    cin >> weight >> height;

    BMI = weight * 703 / pow(height, 2);

    cout << fixed << showpoint << setprecision(1);
    cout << "The BMI is " << BMI << endl;

    if (BMI < 18.5){
        cout << "The person is underweight." << endl;
    }else if (BMI > 25){
        cout << "The person is overweight." << endl;
    }else{
        cout << "The person's weight is optimal." << endl;
    }
    
    return 0;
}