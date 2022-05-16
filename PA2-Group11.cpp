// Group 11
// Ishaan Choudhary & Eric Stinemetz
// The purpose of this assignment is to calculate the monthly bill of a customers telephone line using open-ended menu driven programs

#include <iostream>
using namespace std;

int main()
{
    // Declaring the variables used for our calculations as well as prefacing our expressions
    int package;
    const int CHOICE_A = 1, CHOICE_B = 2, CHOICE_C = 3, CHOICE_D = 4, CHOICE_E = 5;
    double provide_minA, provide_minB, provide_minC, provide_minD, provide_minE;
    double min_used, add_minutes;
    double pack_A, pack_B, pack_C, pack_D, pack_E;
    double min_a, min_b, min_c, min_d, min_e;
    double cost_min;
    double month_bill;
    string unlimited;

    // Asking user inputs for their package options, minute prices, and other open-ended inputs

    cout << "What is the monthly price for all packages? (A/1, B/2, C/3, D/4, E/5) " << endl;
    cin >> pack_A >> pack_B >> pack_C >> pack_D >> pack_E;

    cout << "Does package E include unlimited minutes? (Yes/No)" << endl;
    cin >> unlimited;

    if (unlimited == "No"){

        cout << "How many minutes are provided for each package? (A/1, B/2, C/3, D/4, E/5) " << endl;
        cin >> provide_minA >> provide_minB >> provide_minC >> provide_minD >> provide_minE;

        cout << "What is the additional minute cost per each individual package? (A/1, B/2, C/3, D/4, E/5) If any include unlimited minutes enter 0. " << endl;
        cin >> min_a >> min_b >> min_c >> min_d >> min_e;

    
    } else if (unlimited == "Yes"){

        cout << "How many minutes are provided for each package? (A/1, B/2, C/3, D/4) " << endl;
        cin >> provide_minA >> provide_minB >> provide_minC >> provide_minD;

        cout << "What is the additional minute cost per each individual package? (A/1, B/2, C/3, D/4)" << endl;
        cin >> min_a >> min_b >> min_c >> min_d;
    }

        cout << "(1) Package A: For $" << pack_A << " per month " << provide_minA << " minutes are provided. Additional minutes are $" << min_a << " per minute." << endl;
        cout << "(2) Package B: For $" << pack_B << " per month " << provide_minB << " minutes are provided. Addiitonal minutes are $" << min_b << " per minute." << endl;
        cout << "(3) Package C: For $" << pack_C << " per month " << provide_minC << " minutes are provided. Additional minutes are $" << min_c << " per minute." << endl;
        cout << "(4) Package D: For $" << pack_D << " per month " << provide_minD << " minutes are provided. Additional minutes are $" << min_d << " per minute." << endl;
    
    if (unlimited == "No"){
        cout << "(5) Package E: For $" << pack_E << " per month " << provide_minE << " minutes are provided. Additional minutes are $" << min_e << " per minute." << endl;

    } else if (unlimited == "Yes") {
        cout << "(5) Package E: For $" << pack_E << " per month with unlimited minutes provided." << endl;
    }

    cout << " " << endl;
    cout << "Which package would you like to choose? (1-5)" << endl;
    cin >> package;

    // Refrencing user inputs for switch statments to calculate the monthly bill

    switch (package)
    {
        case CHOICE_A:

            cout << "How many minutes did you use? (If you used less than the provided minutes, just enter the minutes provided for the package.) " << endl;
            cin >> min_used;

            if (min_used < provide_minA){
                cout << "Please enter a quantity of minutes equal to or above the provided minutes." << endl;

            } else {
                add_minutes = min_used - provide_minA;
                cost_min = add_minutes * min_a;
                month_bill = cost_min + pack_A;

                cout << "Your monthly bill is $" << month_bill << endl;

            }break;

        case CHOICE_B:

            cout << "How many minutes did you use? (If you used less than the provided minutes, just enter the minutes provided for the package.) " << endl;
            cin >> min_used;

            if (min_used < provide_minB){
                cout << "Please enter a quantity of minutes equal to or above the provided minutes." << endl;

            } else {
                add_minutes = min_used - provide_minB;
                cost_min = add_minutes * min_b;
                month_bill = cost_min + pack_B;

                cout << "Your monthly bill is $" << month_bill << endl;

            }break;

        case CHOICE_C:

            cout << "How many minutes did you use? (If you used less than the provided minutes, just enter the minutes provided for the package.) " << endl;
            cin >> min_used;

            if (min_used < provide_minC){
                cout << "Please enter a quantity of minutes equal to or above the provided minutes." << endl;

            } else {
                add_minutes = min_used - provide_minC;
                cost_min = add_minutes * min_c;
                month_bill = cost_min + pack_C;

                cout << "Your monthly bill is $" << month_bill << endl;

            }break;

        case CHOICE_D:

            cout << "How many minutes did you use? (If you used less than the provided minutes, just enter the minutes provided for the package.) " << endl;
            cin >> min_used;

            if (min_used < provide_minD){
                cout << "Please enter a quantity of minutes equal to or above the provided minutes." << endl;

            } else { 
                add_minutes = min_used - provide_minD;
                cost_min = add_minutes * min_d;
                month_bill = cost_min + pack_D;

                cout << "Your monthly bill is $" << month_bill << endl;
            
            }break;

        case CHOICE_E:

            if (unlimited == "No"){
                cout << "How many minutes did you use? (If you used less than the provided minutes, just enter the minutes provided for the package.) " << endl;
                cin >> min_used;

                if (min_used < provide_minE){
                    cout << "Please enter a quantity of minutes equal to or above the provided minutes." << endl;

                }else {
                    add_minutes = min_used - provide_minE;
                    cost_min = add_minutes * min_e;
                    month_bill = cost_min + pack_E;

                    cout << "Your monthly bill is $" << month_bill << endl;
                }
             } else if (unlimited == "Yes"){
                    cout << "Your monthly bill is $" << pack_E << endl;
                 
            } break;
    }

    
    return 0;
}
