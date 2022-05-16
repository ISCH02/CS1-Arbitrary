//PC4 - Restaurant Bill
//Ishaan Choudhary
//01.25.2022

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double TAX_RATE = 0.0825;
    const double TIP_RATE = 0.15;

    double meal_cost = 88.67, tax_amount, tip_amount, total_bill;

    tax_amount = meal_cost * TAX_RATE;

    tip_amount = (meal_cost + tax_amount) * TIP_RATE;

    total_bill = meal_cost + tax_amount + tip_amount;

    //cout << fixed << showpoint << setprecision(2);
    cout << "Cost of the meal: $" << meal_cost << endl;
    cout << "Tax amount: $" << tax_amount << "\n";
    cout << "Tip amount: $" << tip_amount << endl;
    cout << "Total Bill: $" << total_bill << "\n";

    //system("pause");
    return 0;
}