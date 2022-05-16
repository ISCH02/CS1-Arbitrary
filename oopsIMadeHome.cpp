#include <iostream>
using namespace std;

class Property {
    public:
        int zip_code;
        int bed;
        int square_feet;
        int year_built;
        int stories;
        double price;
        double bath;
        string basement;
        string pool;
        string listing;
        string type;
};

void printProperty (Property myProperty){
    cout << myProperty.type << " is the type of your property." << endl;
    cout << myProperty.listing << " is the listing of your property." << endl;
    cout << myProperty.price << " is the total price of your property." << endl;
    cout << myProperty.square_feet << " is the amount of square footage in your property." << endl;
    cout << myProperty.zip_code << " is the zip code of your property." << endl;
    cout << myProperty.stories << " is the number of stories in your property." << endl;  
    cout << myProperty.bed << " is the amount of bedrooms in your property." << endl;
    cout << myProperty.bath << " is the number of bathrooms in your property." << endl;
    cout << myProperty.year_built << " is the year your property was built." << endl;
      
    if (myProperty.basement == "Yes"){
        cout << "Your property has a basement." << endl;
    }
    else {
        cout << "Your property does not have a basement." << endl;
    }
    if (myProperty.pool == "Yes"){
        cout << "Your property has a pool." << endl;
    }
    else {
        cout << "Your property does not have a pool." << endl;
    }
    
}

Property realtor (Property myProperty){

    cout << "What type of property would you like?" << endl;
    cin >> myProperty.type;

    cout << "\nWhat form of listing would you like for your property?" << endl;
    cin >> myProperty.listing;

    cout << "\nWhat perferred listing price?" << endl;
    cin >> myProperty.price;

    cout << "\nHow much square footage?" << endl;
    cin >> myProperty.square_feet;

    cout << "\nWhich zip code?" << endl;
    cin >> myProperty.zip_code;

    cout << "\nHow many stories?" << endl;
    cin >> myProperty.stories;

    cout << "\nHow many bedrooms?" << endl;
    cin >> myProperty.bed;

    cout << "\nHow many bathrooms?" << endl;
    cin >> myProperty.bath;

    cout << "\nWhat year built?" << endl;
    cin >> myProperty.year_built;

    cout << "\nWould you like a basement?" << endl;
    cin >> myProperty.basement;

    cout << "\nWould you like a pool?" << endl;
    cin >> myProperty.pool;

    cout << "\n" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    return myProperty;

}

int main()
{
    
    int arraySize;
    cout << "How many properties would you like to upload?" << endl;
    cin >> arraySize;

    Property estates[arraySize];

    for (int i = 0; i < arraySize; i++){
        estates[i] = new Property;
    }

    for (int i = 0; i < arraySize; i++ ){
        realtor (estates[i]);
    }

    for (int i = 0; i < arraySize; i++){
        printProperty (estates[i]);
    }
    
    return 0;
}