// Group 11
// 04.25.2022
// Ishaan Choudhary, Eric Stinemetz, Christopher Ford
// The purpose of this assignment is to create multiple arrays in application to a set of students and their grades

#include <iostream>
#include <string>
using namespace std;

// Using 3 Functions for the input data, calculation of the grade, and lastly the diplay of the data 

void inputData(string studentName[], char letterGrade[], double stu1Scores[], double stu2Scores[], double stu3Scores[], double stu4Scores[], double stu5Scores[]);
void calcData(string studentName[], char letterGrade[], double stu1Scores[], double stu2Scores[], double stu3Scores[], double stu4Scores[], double stu5Scores[]);
void displayData(string studentName[], char letterGrade[], double studentAverages[]);

int main()
{

    // Declaring multiple array for each student's scores and their names

    string studentName[5];
    char letterGrade[5];
    double stu1Scores[4];
    double stu2Scores[4];
    double stu3Scores[4];
    double stu4Scores[4];
    double stu5Scores[4];

    // Passing variables to input data function

    inputData(studentName, letterGrade, stu1Scores, stu2Scores, stu3Scores, stu4Scores, stu5Scores);

    return 0;
}

void inputData(string studentName[], char letterGrade[], double stu1Scores[], double stu2Scores[], double stu3Scores[], double stu4Scores[], double stu5Scores[])
{
    // Creating for loops for each student's name

    for (int i = 0; i < 5; i++ )
    {
        cout << "What is the student's name?" << endl;
        cin >> studentName[i];
    }

    // Gathering all test scores for individual students 

    cout << "What are " << studentName[0] << "'s test scores?" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "Test " << i+1 << " score" << endl;
        cin >> stu1Scores[i];

        while ((stu1Scores[i] < 0) || (stu1Scores[i] > 100))
        {
            cout << "Cannot accept scores below 0 or above 100, please re-enter: " << endl;
            cin >> stu1Scores[i];
        }
    }

    cout << "What are " << studentName[1] << "'s test scores?" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "Test " << i+1 << " score" << endl;
        cin >> stu2Scores[i];

        while ((stu2Scores[i] < 0) || (stu2Scores[i] > 100))
        {
            cout << "Cannot accept scores below 0 or above 100, please re-enter: " << endl;
            cin >> stu2Scores[i];
        }
    }

    cout << "What are " << studentName[2] << "'s test scores?" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "Test " << i+1 << " score" << endl;
        cin >> stu3Scores[i];

        while ((stu3Scores[i] < 0) || (stu3Scores[i] > 100))
        {
            cout << "Cannot accept scores below 0 or above 100, please re-enter: " << endl;
            cin >> stu3Scores[i];
        }
    }

    cout << "What are " << studentName[3] << "'s test scores?" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "Test " << i+1 << " score" << endl;
        cin >> stu4Scores[i];

        while ((stu4Scores[i] < 0) || (stu4Scores[i] > 100))
        {
            cout << "Cannot accept scores below 0 or above 100, please re-enter: " << endl;
            cin >> stu4Scores[i];
        }
    }

    cout << "What are " << studentName[4] << "'s test scores?" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "Test " << i+1 << " score" << endl;
        cin >> stu5Scores[i];

        while ((stu5Scores[i] < 0) || (stu5Scores[i] > 100))
        {
            cout << "Cannot accept scores below 0 or above 100, please re-enter: " << endl;
            cin >> stu5Scores[i];
        }
    }

    // Passing input values to the calculation function to find the averages

    calcData(studentName, letterGrade, stu1Scores, stu2Scores, stu3Scores, stu4Scores, stu5Scores);

}

void calcData(string studentName[], char letterGrade[], double stu1Scores[], double stu2Scores[], double stu3Scores[], double stu4Scores[], double stu5Scores[])
{

    // Creating a new array to store the average calculated grade

    double studentAverages[5];

    // Calculating the average by adding all indexes and dividing by total tests taken

    studentAverages[0] = (stu1Scores[0] + stu1Scores[1] + stu1Scores[2] + stu1Scores[3]) / 4;
    studentAverages[1] = (stu2Scores[0] + stu2Scores[1] + stu2Scores[2] + stu2Scores[3]) / 4;
    studentAverages[2] = (stu3Scores[0] + stu3Scores[1] + stu3Scores[2] + stu3Scores[3]) / 4;
    studentAverages[3] = (stu4Scores[0] + stu4Scores[1] + stu4Scores[2] + stu4Scores[3]) / 4;
    studentAverages[4] = (stu5Scores[0] + stu5Scores[1] + stu5Scores[2] + stu5Scores[3]) / 4;

    // Creating a for loop to assign the letter grade for the calculated averages for each individual student 

    for (int i = 0; i < 5; i++)
    {
        if ((studentAverages[i] <= 100) && (studentAverages[i] >= 90))
        {
            letterGrade[i] = 'A';
        }
        else if ((studentAverages[i] < 90) && (studentAverages[i] >= 80))
        {
            letterGrade[i] = 'B';
        }
        else if ((studentAverages[i] < 80) && (studentAverages[i] >= 70))
        {
            letterGrade[i] = 'C';
        }
        else if ((studentAverages[i] < 70) && (studentAverages[i] >= 60))
        {
            letterGrade[i] = 'D';
        }
        else if ((studentAverages[i] < 60) && (studentAverages[i] >= 0))
        {
            letterGrade[i] = 'F';
        }
        else
        {
            cout << "Error: Average is above 100 or below 0" << endl;
        }
    }
    
    // Passing data to display function for terminal output

    displayData(studentName, letterGrade, studentAverages);

}

void displayData(string studentName[], char letterGrade[], double studentAverages[])
{

    // Formatting output to show studentName -> studentAverage -> letterGrade 

    cout << "\n";
    cout << "--------------------------------------" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << studentName[i] << "'s average: " << studentAverages[i] << " - grade: " << letterGrade[i] << endl; 
    }
}
