// Group 11
// 04.18.2022
// Ishaan Choudhary & Eric Stinemetz & Christopher Ford
// The purpose of this assignment is to open a file, calculate a mix of different values, and output a file.

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main()
{   
    // Declaring all variables including I/O file variables

    string str;
    ifstream inputFile;
    ofstream outputFile;
    
    // Declaring vector

    int num;
    vector <int> numbers;

    // Opening text files

    inputFile.open("randomNumbers.txt");
    outputFile.open("PA5_Group11.txt");

    // Reading the file line-by-line and converting from string to integers and adding them to a vector

    while (getline(inputFile, str)) {
        stringstream stoi(str);
        stoi >> num;
        numbers.push_back(num);
    }

    // Finding the total amount of elements within the file

    outputFile << "(A) Total amount of numbers in the file: " << numbers.size() << endl;

    // Finding the maximum value in the file

    int highest = numbers.at(0);
    for (int i = 1; i < numbers.size(); i++)
    {
        if (numbers.at(i) > highest)
            highest = numbers.at(i);
    }
    outputFile << "(B-I) Maximum value in the file: " << highest << endl;

    // Finding the minimum value in the file

    int lowest = numbers.at(0);
    for (int i = 1; i < numbers.size(); i++)
    {
        if (numbers.at(i) < lowest)
            lowest = numbers.at(i);
    }
    outputFile << "(B-II) Minimum value in the file: " << lowest << endl;

    //Finding the sum of all numbers in the file

    int total = 0;
    for (int i = 0; i < numbers.size(); i++)
    {
        total += numbers.at(i);
    }
    outputFile << "(C) Sum of all numbers in the file: " << total << endl;

    // Finding the average of all numbers in the file

    float average = (float)total / (float)numbers.size();
    outputFile << "(D) Average of all numbers in the file: " << average << endl;

    // Closing both files

    inputFile.close();
    outputFile.close();

    // Output line for terminal validation

    cout << "File closed, program ended." << endl;

    return 0;
}