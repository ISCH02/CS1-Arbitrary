#include <iostream>
using namespace std;

void madlib (string noun, string verb, string adjective, string verb2){

cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
cout << "Madlib" << endl;
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
cout << "Once upon a time in";
cout << noun << endl;
cout << "There lived a civilization of humans and computers who all looked";
cout << adjective << endl;
cout << "and all around the place were computers constantly";
cout << verb << endl;
cout << "however, along with the computers were also humans which were";
cout << verb2 << endl;
cout << "throughout the city";
cout << "Altough at the end of the day, the computers were better than all the humans";
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
cout << "fin" << endl;
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

}

int main()
{
   string noun;
   string verb;
   string adjective;
   string verb2; 

   cout << "Gimmie a location... " << endl;
   cin >> noun;

   cout << "Gimmie a verb... " << endl;
   cin >> verb;

   cout << "Now gimmie an adjective... " << endl;
   cin >> adjective;

   cout << "Finally, gimmie a verb again" << endl;
   cin >> verb2;

   madlib(noun, verb, adjective, verb2);

return 0;
}