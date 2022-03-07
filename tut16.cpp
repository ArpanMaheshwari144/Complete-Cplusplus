#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// This will not swap a and b
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Call by reference using pointers
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by reference using reference Variables
void swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Return by reference
int &returnByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}

int main()
{
    int x = 4, y = 5;
    // cout << "The sum of " << x << " and " << y << " is " << sum(x, y) << endl;

    // cout << "The value of x is " << x << " and the value of y is " << y << endl;
    // swap(x, y); // this will not swap x and y bcoz x and y arguments ki copy swap function me jayegi actual arguments nhi jayenge
    // cout << "The value of x is " << x << " and the value of y is " << y << endl;

    // cout << "The value of x is " << x << " and the value of y is " << y << endl;
    // swapPointer(&x, &y); //This will swap x and y using pointer reference bcoz x and y arguments ke address swap function me jayenge so value swap ho jayengi
    // cout << "The value of x is " << x << " and the value of y is " << y << endl;

    // cout << "The value of x is " << x << " and the value of y is " << y << endl;
    // swapReferenceVar(x, y); //This will swap a and b using reference variables
    // cout << "The value of x is " << x << " and the value of y is " << y << endl;

    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    returnByReference(x, y) = 10;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;

    return 0;
}
