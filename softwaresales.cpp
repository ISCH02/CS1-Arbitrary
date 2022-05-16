//Group 11
//Ishaan C.
//The purpose of this assignment is to ask the user how many units they have sold as well as the total cost of the purchase

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double UNIT_PRICE = 99;
    int unitsSold;
    double discount_percentage;
    double discount_cost;
    double total_cost;

    cout << "Enter the number of units sold: " << endl;
    cin >> unitsSold;

    if (unitsSold <= 0){
        cout << "Number of units sold must be greater than 0. Reenter." << endl;
    }else if ((unitsSold >= 10) && (unitsSold <= 19)){
        discount_percentage = 0.20;
    }else if ((unitsSold >= 20) && (unitsSold <= 49)){
        discount_percentage = 0.30;
    }else if ((unitsSold >= 50) && (unitsSold <= 99)){
        discount_percentage = 0.40;
    }else if(unitsSold >= 100){
        discount_percentage = 0.50;
    }
    discount_cost = UNIT_PRICE * (1.00 - discount_percentage);
    total_cost = unitsSold * discount_cost;

    cout << fixed << setprecision(2);
    cout << "The total cost of the order is " << total_cost << endl;


    return 0;
}