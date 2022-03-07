#include <iostream>
using namespace std;

int main()
{
    // What is a pointer? ----> Data type which holds the address of other data types
    int a = 3;
    int *b;
    b = &a;

    // & ---> (Address of) Operator
    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << b << endl;

    // * ---> (value at) Dereference operator
    cout << "The value at address b is " << *b << endl;

    // Pointer to pointer
    int **c;
    c = &b;
    cout << "The address of b is " << &b << endl;
    cout << "The address of b is " << c << endl;
    cout << "The value at address c is " << *c << endl;
    cout << "The value at address of address of c is " << **c << endl;

    // Pointer to pointer to pointer
    int ***d;
    d = &c;
    cout << "The address of d is " << &c << endl;
    cout << "The address of d is " << d << endl;
    cout << "The value at address d is " << **c << endl;
    cout << "The value at address of address of address of d is " << ***d << endl;

    return 0;
}
