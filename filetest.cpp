#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int population, year, star;
    ifstream inputFile;
    ofstream outputFile;

    inputFile.open("People.txt");
    outputFile.open("Histogram.txt");

    outputFile << "PRAIRIEVILLE POPULATION GROWTH \n";
    outputFile << "(each star represents 1000 people) \n\n ";

    for(year = 1900; year <= 2000; year += 20)
    {
        inputFile >> population;

        outputFile << year << " " << endl;
        
        for (star = 1; star <= (population/1000); star++)
        {
            outputFile << "*";
        }
        outputFile << endl;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}