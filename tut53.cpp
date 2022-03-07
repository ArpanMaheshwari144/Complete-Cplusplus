#include <iostream>
using namespace std;

// initialization-section/initialization-list -> jo class ke data members hai unko value dene ka ek tarika hai

/*
Syntax for initialization list in constructor:
constructor (argument-list) : initialization-section
{
    assignment + other code;
}

class Test{
    int a;
    int b;
    public:
        Test(int i, int j) : a(i), b(j){constructor-body}
};

*/

class Test
{
    // jo bhi variable phle declare hoga vo phle execute kiya jayega
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    // {
    //     cout << "Constructor executed" << endl;
    //     cout << "Value of a is " << a << endl;
    //     cout << "Value of b is " << b << endl;
    // }

    // Test(int i, int j) : a(i), b(i + j)
    // {
    //     cout << "Constructor executed" << endl;
    //     cout << "Value of a is " << a << endl;
    //     cout << "Value of b is " << b << endl;
    // }

    // Test(int i, int j) : a(i), b(2 * j)
    // {
    //     cout << "Constructor executed" << endl;
    //     cout << "Value of a is " << a << endl;
    //     cout << "Value of b is " << b << endl;
    // }

    // Test(int i, int j) : a(i), b(a + j)
    // {
    //     cout << "Constructor executed" << endl;
    //     cout << "Value of a is " << a << endl;
    //     cout << "Value of b is " << b << endl;
    // }

    // this will create problem bcoz 'a' will be declare first
    // this will create no problem if 'b' is declare first
    // Test(int i, int j) : b(j), a(i + b)
    // {
    //     cout << "Constructor executed" << endl;
    //     cout << "Value of a is " << a << endl;
    //     cout << "Value of b is " << b << endl;
    // }

    // Test(int i, int j) : a(i)
    // {
    //     b = j;
    //     cout << "Constructor executed" << endl;
    //     cout << "Value of a is " << a << endl;
    //     cout << "Value of b is " << b << endl;
    // }

    Test(int i, int j)
    {
        a = i;
        b = j;
        cout << "Constructor executed" << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}