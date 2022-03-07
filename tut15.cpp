#include <iostream>
using namespace std;

int sum(int a, int b); // this is function prototyping which assure that this function is present inside the program
// OR
// int sum(int, int);

void greet();

int main()
{
    // num1 and num2 are actual parameters
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "The sum is: " << sum(num1, num2);
    greet();
    return 0;
}

int sum(int a, int b)
{
    // Formal Parameters a and b will be taking values from actual parameters num1 and num2.
    int c = a + b;
    return c;
}

void greet()
{
    cout << "\nGreet function calls and says Hello";
}