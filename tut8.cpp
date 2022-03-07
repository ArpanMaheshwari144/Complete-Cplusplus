#include <iostream>
using namespace std;

// 1. Selection control structure: If else-if else ladder
// 2. Selection control structure: Switch Case statements

int main()
{
    // int age;
    // cout << "Tell me your age: ";
    // cin >> age;
    // if ((age < 18) && (age > 0))
    // {
    //     cout << "You are a kid and you will get a kid pass to the party" << endl;
    // }
    // else if (age == 18)
    // {
    //     cout << "You are come to the party at your own risk" << endl;
    // }
    // else if (age < 1)
    // {
    //     cout << "You are not yet born" << endl;
    // }
    // else
    // {
    //     cout << "You can come to the party" << endl;
    // }

    int age;
    cout << "Tell me your age: ";
    cin >> age;
    switch (age)
    {
    case 18:
        cout << "You are 18" << endl;
        break;
    case 20:
        cout << "You are 20" << endl;
        break;
    case 22:
        cout << "You are 22" << endl;
        break;
    case 10:
        cout << "You are 10" << endl;
        break;
    default:
        cout << "No special cases" << endl;
        break;
    }
    cout << "Done with switch case";

    return 0;
}
