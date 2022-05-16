// PROGRAMMING challenge 18 chapter 6
#include <iostream>
#include <iomanip>
using namespace std;

const int WALL_AREA_PER_GALLON = 110;
const double HOURLY_RATE = 25.00;

int getNumberOfRooms()
{
    int rooms;
    cout << "Enter number of rooms to be painted" << endl;
    cin >> rooms;

    while (rooms < 1)
    {
        cout << "Number of rooms to be painted must be at least one" << endl;
        cin >> rooms;
    }

    return rooms;
}

double getPaintPrice()
{
    double paintPrice;
    cout << "Enter the price of the paint:" << endl;
    cin >> paintPrice;

    while (paintPrice < 10.00)
    {
        cout << "The price of paint must be above or equal to $10.00:" << endl;
        cin >> paintPrice;
    }

    return paintPrice;
}

double getWallSquareFeet()
{
    double wallArea;
    cout << "Enter the area the be painted :" << endl;
    cin >> wallArea;

    while (wallArea < 0.00)
    {
        cout << "Wall area must be positive:" << endl;
        cin >> wallArea;
    }

    return wallArea;
}

int numberOfGallons(double wallArea)
{
    double doubleGallons;
    double remainder;
    int intGallons;

    doubleGallons = wallArea / WALL_AREA_PER_GALLON;

    intGallons = static_cast<int>(doubleGallons);

    remainder = doubleGallons - intGallons;

    if (remainder > 0.00)
    {
        intGallons += 1;
    }

    return intGallons;
}

double laborHours(double wallArea)
{




}

void displayCost(int gallons, double paintPrice, double hours)
{






}

int main()
{
    int numRooms;
    int totalWallArea = 0;
    int gallons;
    int count;
    double priceOfPaint;
    double hours;

    numRooms = getNumberOfRooms();
    priceOfPaint = getPaintPrice();

    for (count = 1; count <= numRooms; count++)
    {
        int wallArea;
        cout << "Room " << count << " has ";
        wallArea = getWallSquareFeet();
        totalWallArea += wallArea;
    }
    

    return 0;
}

