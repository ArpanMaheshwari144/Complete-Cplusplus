#include <iostream>

using namespace std;

int c = 45;

int main()
{

    // *************Build in Data types****************
    // int a, b, c;
    // cout << "Enter the value of a: ";
    // cin >> a;
    // cout << "Enter the value of b: ";
    // cin >> b;
    // c = a + b;
    // cout << "The sum is: " << c;
    // cout << "\nThe global c is " << ::c;

    // ************* Float, double and long double Literals****************
    // float d = 34.4F;                                        // or float d = 34.4f;
    // long double e = 34.4L;                                  // or  long double e = 34.4l;
    // cout << "The size of 34.4 is " << sizeof(34.4) << endl; // (by default it will take this as a double)
    // cout << "The size of 34.4f is " << sizeof(34.4f) << endl;
    // cout << "The size of 34.4F is " << sizeof(34.4F) << endl;
    // cout << "The size of 34.4l is " << sizeof(34.4l) << endl;
    // cout << "The size of 34.4L is " << sizeof(34.4L) << endl;
    // cout << "The value of d is " << d << endl;
    // cout << "The value of e is " << e << endl;

    // *************Reference Variables****************
    // float x = 455;
    // float &y = x; // y is a reference variable which points x
    // cout << x << endl;
    // cout << y << endl;

    // *************Typecasting****************
    int a = 45;
    float b = 45.46;
    cout << "The value of a is " << (float)a << endl;
    cout << "The value of a is " << float(a) << endl;

    cout << "The value of b is " << (int)b << endl;
    cout << "The value of b is " << int(b) << endl;

    int c = int(b);
    cout << "The value of c is " << c << endl;

    cout << "The expression is " << a + b << endl;
    cout << "The expression is " << a + int(b) << endl;
    cout << "The expression is " << a + (int)b << endl;

    return 0;
}
