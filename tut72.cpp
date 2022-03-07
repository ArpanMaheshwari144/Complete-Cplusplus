#include <iostream>
using namespace std;

template <class T>
void swapnumbers(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 3, b = 6;
    cout << "Before swapping the value are" << endl;
    cout << "The value of a is " << a << " and the value of b is " << b << endl;

    swapnumbers(a, b); // swap keyword is already present in namespace

    cout << "After swapping the value are" << endl;
    cout << "The value of a is " << a << " and the value of b is " << b << endl;

    return 0;
}