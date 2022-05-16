#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const double PI = 3.14159;
    const int CIRCLE_CHOICE = 1;
    const int RECTANGLE_CHOICE = 2;
    const int TRIANGLE_CHOICE = 3;
    const int QUIT_CHOICE = 4;

    int choice;
    double radius;
    double length;
    double width;
    double height;
    double base;
    double area;

    cout << "GEOMETRY CALCULATOR" << endl;
    cout << "1. Calculate the area of a circle" << endl;
    cout << "2. Calculate the area of a rectangle" << endl;
    cout << "3. Calculate the area of a triang;e" << endl;
    cout << "4. Quit" << endl;

    cout << "enter your choice (1 - 4)" << endl;
    cin >> choice;

    switch (choice)
    {

    case CIRCLE_CHOICE:
        cout << "Enter the radius of a circle: ";
        cin >> radius;

        if (radius < 0.00){
            cout << "The radius must be a positive quantity. ";
    }   else {
            area = PI * pow(radius, 2);
            cout << "The area of a circle is " << area << " square cms.";
    }   break;

    case RECTANGLE_CHOICE:
        cout << "Enter the length and width of a rectangle: ";
        cin >> length >> width;

        if (length < 0.00 || width < 0.00){
            cout << "Length and width must be positive quantities. ";
    }   else { 
            area = length * width;
            cout << "The area of a rectangle is " << area << " squared cms.";
    }   break;

    case TRIANGLE_CHOICE:
            cout << "Enter the base and height of a triangle: ";
            cin >> base >> height;

        if (base < 0.00 || height < 0.00){
            cout << "Base and height must be positive quantities. ";
    }   else { 
            area = base * height;
            cout << "The area of a triangle is " << area << " squared cms.";
    }   break;

    case QUIT_CHOICE:
        cout << "End of the program.";
        break;

    default:
        cout << "Invalid choice. Check and try again.";
    }
    
    
    return 0;
}