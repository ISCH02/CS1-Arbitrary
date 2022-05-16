#include <iostream>
using namespace std;

int main()
{   
    int answer;
    int first_num;
    int last_num;

    cout << "What is your first number? " << endl;
    cin >> first_num;

    cout << "What is your last number? " << endl;
    cin >> last_num;

    answer = sum(first_num, last_num);
   
    printAnswer(answer);

return 0;
}

void printAnswer(int answer){
    cout << "the sum of your two numbers is..." << endl;
    cout << answer << endl;
}

int sum(int a, int b)
{
    int answer = a + b;
    return answer;

}