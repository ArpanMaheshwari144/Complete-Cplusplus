#include <iostream>
#include <iomanip> // this is for setw
using namespace std;

int main()
{
    // int a = 34;
    // cout << "The value of a was: " << a << endl;
    // a = 45;
    // cout << "The value of a is: " << a << endl;

    // Constants in C++
    // const int a = 3; // if you change the value of 'a' so you will get an error because 'a' is a constant
    // cout << "The value of a was: " << a << endl;

    // Manipulators in C++
    // int a = 3, b = 78, c = 1233;
    // cout << "The value of a without setw is: " << a << endl;
    // cout << "The value of b without setw is: " << b << endl;
    // cout << "The value of c without setw is: " << c << endl;
    // cout << "The value of a is: " << setw(4) << a << endl; // setw(4) -> 4 caharcter ki space lega no matter what
    // cout << "The value of b is: " << setw(4) << b << endl;
    // cout << "The value of c is: " << setw(4) << c << endl;

    // Operator Precedence -> konsa operator sabse phle evaluate hoga
    // jab operators ki precedence same hoti tab associativity kaam krti hai
    int a = 3, b = 4;
    // int c = (a * 5) + b;
    int c = ((((a * 5) + b) - 45) + 87);
    cout << c;

    return 0;
}
