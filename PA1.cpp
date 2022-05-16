// Group 11
// Ishaan Choudhary, Christopher Ford, Eric Stinemertz
// 02.12.2022
// The purpose of this assignment is to find which incentive is of better value over the course of five years.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    // Declaring and intializing (some) variables.

    char incentive;
    const int time = 5;

    double car_price = 45575.25;
    double monthly_pay;
    double default_monthly;
    double interest;

    double money_saved;
    double i;
    const double ANNUAL_RATE = 0.02675;
    const double COMPOUND = 12;
    double n = COMPOUND * time;

    double total_price;
    double default_total;

   // Outputting user input choices for the incentives.

    cout << "Incentive A: takes $6000 off of the car's total price, followed by a five-year loan at 2.675%" << endl;
    cout << " " << endl;
    cout << "Incentive B: does not have a cash rebate, but provides free financing over five years." << endl;
    cout << " " << endl;
    cout << "Which incentive would you like? (A or B)?" << endl;
    cin >> incentive;

    // Setting up the default basic equation to compare with the price saved.

    i = ANNUAL_RATE / COMPOUND;
        double denominator = 1 - pow(1 + i, -n);
        double fraction = i / denominator;
        default_monthly = car_price * fraction;
        default_total = default_monthly * 60;

    // Setting up if statments and their outputs.

    if (incentive == 'A'){
        car_price = 45575.25 - 6000;
        i = ANNUAL_RATE / COMPOUND;
        double denominator = 1 - pow(1 + i, -n);
        double fraction = i / denominator;
        monthly_pay = car_price * fraction;
        total_price = monthly_pay * 60;
        money_saved = default_total - total_price;

        cout << fixed << setprecision(2);
        cout << "The annual interest for Incentive A is 2.675%" << endl;
        cout << "The monthly pay for incentive A is $" << monthly_pay << endl;
        cout << "The amount of money saved is $" << money_saved << " over 5 years" << endl;

    } else if (incentive == 'B'){
        monthly_pay = car_price / n;
        total_price = monthly_pay * 60;
        money_saved = default_total - total_price;
        
        cout << fixed << setprecision(2);
        cout << "The annual interest for Incentive B is 0%" << endl;
        cout << "The monthly pay for incentive B is $" << monthly_pay << endl;
        cout << "The amount of money saved is $" << money_saved << " over 5 years" << endl;

    } else {
        cout << "Please reenter with which letter incentive you would like." << endl;
    }
    
    return 0;
}