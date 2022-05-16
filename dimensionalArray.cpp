#include <iostream>
using namespace std;

const int ROWS = 4;
const int COLS = 5;

int getTotal(int [][COLS], int, int);
double getAverage(int [][COLS], int, int);
int getRowTotal(int [][COLS], int, int);
int getHighestInRow(int [][COLS], int, int);

int main()
{                                //     ROW 1           ROW 2               ROW 3                  ROW 4
    int classArray[ROWS][COLS] = {{1, 2 ,3 ,4, 5}, {6, 7 ,8 ,9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20} };

    cout << "Total equals " << getTotal(classArray, ROWS, COLS) << endl;
    cout << "Average equals " << getAverage(classArray, ROWS, COLS) << endl;
    cout << "The total of row 1 is " << getRowTotal(classArray, 1, COLS) << endl;
    cout << "The highest in row 2 is " << getHighestInRow(classArray, 2, COLS) << endl;

    return 0;
}

int getTotal(int array[][COLS], int rows, int cols)
{
    int total = 0;

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
            total += array[row][col];
    }

    return total;
}

double getAverage(int array[][COLS], int rows, int cols)
{
    double numberOfElements, average;
    numberOfElements = rows * cols;
    average = getTotal(array, rows, cols) / numberOfElements;

    return average;
}

int getRowTotal(int array[][COLS], int rowToTotal, int cols)
{
    int total = 0;
    for (int col = 0; col < cols; col++)
    {
        total += array[rowToTotal][col];
    }
    
    return total;
}

int getHighestInRow(int array[][COLS], int rowToSearch, int cols)
{
    int highest = array[rowToSearch][0];
    for (int col = 1; col < cols; col++)
    {
        if (array[rowToSearch][col] > highest)
            highest = array[rowToSearch][col];
    }

    return highest;
}