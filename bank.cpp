//Group 11
//Ishaan Choudhary
//The purpose of this program is to 

#include <iostream>
using namespace std;

int main()
{
    int fat_grams;
    int fat_calories;
    int total_calories;
    double fat_percent;

    cout << "Enter the total calories and grams of fat." << endl;
    cin >> total_calories >> fat_grams;

    fat_calories = fat_grams * 9;

    if (total_calories < 0 || fat_grams < 0){
        cout << "Total calories and grams of fat must be greater than zero." << endl;

    } else if (fat_calories > total_calories){
        cout << "The values entered by the user are invalid" << endl;
        cout << "There are more calories in " << fat_grams << " grams of fat than entered for total calories" << endl;

    } else {

        fat_percent = static_cast<double>(fat_calories) / total_calories;

        fat_percent *= 100;

        cout << fat_percent << "% of the total calories from fat. \n";
        
        (fat_percent < 30) ? cout << "Food is low in fat." : cout << "Food is high in fat." << endl;

        //if (fat_percent < 30.00){
            //cout << "Food is low in fat. \n";
        
       // } else {
        //    cout << "Food is not low in fat. \n";
        //}

    }

    return 0;
}