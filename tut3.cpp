#include <iostream>
using namespace std;

// if local and global variable have same name so lacal varable will take the precedence

int glo = 6; // global variable declared outside any function and can be accessed from anywhere
void sum()
{
    int a;
    cout << glo << "\n"; // it search globally bcoz there is no glo variable inside sum function
}

int main()
{
    int glo = 9; // local variable
    int a = 14, b = 15;
    float pi = 3.14;
    char c = 'd';
    bool is_true = false; // true -> 1 and false -> 0
    sum();
    cout << glo << "\n";
    cout << "Here the value of a is " << a << ".\nThe value of b is " << b;
    cout << "\nThe value of pi is: " << pi;
    cout << "\nThe value of c is: " << c;
    cout << "\nThe value of is_true is: " << is_true;
    return 0;
}
