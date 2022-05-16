#include <iostream>
#include <iomanip>
using namespace std;

const int A_SIZE = 7;

void getEmployeeInfo(long emp[], int hrs[], double rate[], double pay[], int size)
{
    cout << "Enter the information for each employee: \n";

    for (int i = 0; i < size; i++)
    {
        cout << "Employee ID " << emp[i] << endl;

        cout << "Hours worked: ";
        cin >> hrs[i];

        while (hrs[i] < 0)
        {
            cout << "Hours worked must be greater than 0, reenter: ";
            cin >> hrs[i];
        }

        cout << "Pay Rate: ";
        cin >> rate[i];

        while (rate[i] < 15.00)
        {
            cout << "Pay Rate must be greater than 15.00, reenter: ";
            cin >> rate[i];
        }
        pay[i] = hrs[i] * rate[i];
    }

}

void display_wages(long emp[], double pay[], int size)
{
    cout << fixed << showpoint << setprecision(2);

    cout << "++++++++++++++++++++++++++++++++++++++++++++++"<< endl;
    cout << "Employee ID                         Wages" << endl;
    cout << "++++++++++++++++++++++++++++++++++++++++++++++ \n \n \n";

    for (int j = 0; j < size; j++)
    {
        cout << "Employee ID " << emp[j] << "                  $" << pay[j] << endl;
    }
}

int main()
{
    long empid[A_SIZE] = { 111111, 222222, 333333, 444444, 555555, 666666, 777777 };

    int hours[A_SIZE];

    double payRate[A_SIZE];

    double wages[A_SIZE];

    getEmployeeInfo(empid, hours, payRate, wages, A_SIZE);

    display_wages(empid, wages, A_SIZE);

    return 0;
}

