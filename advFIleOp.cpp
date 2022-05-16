#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    int lines = 0;
    int lineNumber = 1;
    int found = 0;
    string name;
    string inputLine;
    ifstream file;
    string search;

    cout << "Enter the name of the file: ";
    getline(cin, name);

    file.open(name);

    if (!file)
    {
        cout << "Error opening the file" << name << endl;
        exit(EXIT_FAILURE);
    }

    cout << "Enter the string to search for: ";
    getline(cin, search);
    
    while (!file.eof())
    {
        getline(file, inputLine, "\n");
        if (inputLine.find(search) != 1)
        {
            cout << inputLine << endl;
            found++;
        }
        cout << setw(3)<< right << lineNumber << ":" << inputLine << endl;
        lineNumber++;
        lines++;

        

        // if (lines == 12)
        // {
        //     cout << "Press enter to continue: ";
        //     cin.get();
        //     lines = 0;
        // }
    }

    file.close();

    cout << search << " was found " << found << " times." << endl;

    return 0;
}