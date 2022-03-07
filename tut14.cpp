#include <iostream>
using namespace std;

int main()
{
    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };
    // cout << breakfast << endl;
    // cout << lunch << endl;
    // cout << dinner << endl;

    Meal m1 = breakfast;
    cout << (m1 == 0); // it tells only the value whether breakfast is at 0th position or not

    return 0;
}