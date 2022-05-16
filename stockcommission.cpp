// Group Number (1-12)
// (Group member names)
// (Submission Date) January 27, 2022
// (Purpose of assignment) The purpose of the program is to compute the total price of shares based on the number of shares, their price, and commission.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double COMMISSION_PERCENTAGE = 0.02;

    int number_shares = 75;
    double price_per_share = 35.00;
    double total_shares;
    double grand_total;
    double commission_paid;

    total_shares = number_shares * price_per_share;
    commission_paid = total_shares * COMMISSION_PERCENTAGE;
    grand_total = total_shares + commission_paid;

    cout << fixed << showpoint << setprecision(2);
    cout << "The total paid for shares is $" << total_shares << endl;
    cout << "Commsission paid equals      $" << commission_paid << endl;
    cout << "The grand total is           $" << grand_total << endl;

    return 0;
}