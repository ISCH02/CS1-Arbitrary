// Group 11
// Ishaan Choudhary & Eric Stinemetz & Chris Ford
// The purpose of this program is to use functions to calculate multiple values from indivudal functions

#include <iostream>
#include <bits/stdc++.h> // Library for INT MAX & MIN
using namespace std;

// Global Variables for array classification

const int ROWS = 4;
const int COLS = 5;

// Prototypes for all calculation functions

void getTotal(int classArray[][COLS]);
void getAverage(int classArray[][COLS]);
void getRowHighest(int classArray[][COLS]);
void getColumnHighest(int classArray[][COLS]);
void getRowLowest(int classArray[][COLS]);
void getColumnLowest(int classArray[][COLS]);
void getEveryRowTotal(int classArray[][COLS]);
void getEveryColumnTotal(int classArray[][COLS]);

int main()
{
    // 2-D Array intialization

    int classArray[ROWS][COLS] = {{1, 2 ,3 ,4, 5}, 
                                 {6, 7 ,8 ,9, 10},
                                 {11, 12, 13, 14, 15},
                                 {16, 17, 18, 19, 20} };

    // Calling all functions and their outputs

    getTotal(classArray);
    cout << "==============" << endl;
    getAverage(classArray);
    cout << "==============" << endl;
    getEveryRowTotal(classArray);
    cout << "==============" << endl;
    getEveryColumnTotal(classArray);
    cout << "==============" << endl;
    getRowHighest(classArray);
    cout << "==============" << endl;
    getColumnHighest(classArray);
    cout << "==============" << endl;
    getRowLowest(classArray);
    cout << "==============" << endl;
    getColumnLowest(classArray);
    cout << "==============" << endl;
    
    return 0;
}
    // Total Row

void getEveryRowTotal(int classArray[][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        int totalRow = 0;
        for (int j = 0; j < COLS; j++)
        {
            totalRow += classArray[i][j];
        }
        cout << "The total of row " << i << ": " << totalRow << endl;
    }
}
    // Total Column

void getEveryColumnTotal(int classArray[][COLS])
{
    for (int j = 0; j < COLS; j++)
    {
        int totalColumn = 0;
        for (int i = 0; i < ROWS; i++)
        {
            totalColumn += classArray[i][j];
        }
        cout << "The total of column " << j << ": " << totalColumn << endl;
    }
}
    // Highest Row

void getRowHighest(int classArray[][COLS])
{
     for (int i = 0; i < ROWS; i++)
    {
        int highest = INT_MIN;
        for (int j = 0; j < COLS; j++)
        {
            if (highest < classArray[i][j])
            {
                highest = classArray[i][j];
            }
        }
        cout << "The highest of row " << i << ": " << highest << endl;
    }
}
    // Highest Column

void getColumnHighest(int classArray[][COLS])
{
     for (int j = 0; j < COLS; j++)
    {
        int highest = INT_MIN;
        for (int i = 0; i < ROWS; i++)
        {
            if (highest < classArray[i][j])
            {
                highest = classArray[i][j];
            }
        }
        cout << "The highest of column " << j << ": " << highest << endl;
    }
}
    // Lowest Row

void getRowLowest(int classArray[][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        int lowest = INT_MAX;
        for (int j = 0; j < COLS; j++)
        {
            if (lowest > classArray[i][j])
            {
                lowest = classArray[i][j];
            }
        }
        cout << "The lowest of row " << i << ": " << lowest << endl;
    }
}
    // Lowest Column

void getColumnLowest(int classArray[][COLS])
{
     for (int j = 0; j < COLS; j++)
    {
        int lowest = INT_MAX;
        for (int i = 0; i < ROWS; i++)
        {
            if (lowest > classArray[i][j])
            {
                lowest = classArray[i][j];
            }
        }
        cout << "The lowest of column " << j << ": " << lowest << endl;
    }
}
    // Total All

void getTotal(int classArray[][COLS])
{
    int sum = 0;

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            sum += classArray[i][j];
        }
    }

    cout << "The total of the class array is " << sum << endl;
}
    // Average

void getAverage(int classArray[][COLS])
{
    double sum = 0;

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            sum += classArray[i][j];
        }
    }
    double average = sum / (ROWS * COLS);
    cout << "The average of the class array is " << average << endl;
}