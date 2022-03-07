#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter the value of the num1: "; // '<<' this is insertion operator
    cin >> num1;                             // '>>' this is extraction operator

    cout << "Enter the value of the num2: ";
    cin >> num2;

    cout << "The addition of " << num1 << " and " << num2 << " is " << num1 + num2;

    return 0;
}