#include <iostream>
using namespace std;

int main()
{
    // Basic Example
    // int a = 4;
    // int *ptr = &a;                                  // & -> (address at) operator
    // cout << "The value of a is " << *(ptr) << endl; // * -> (value at) operator
    // cout << "The address of a in which value " << a << " is stored " << ptr << endl;
    // cout << "The address of a in which value " << a << " is stored " << &a << endl;

    // int a = 4;
    // int *ptr = &a; // & -> (address at) operator
    // *ptr = 999;
    // cout << "The value of a is " << *(ptr) << endl; // * -> (value at) operator
    // cout << "The address of a in which value " << a << " is stored " << ptr << endl;
    // cout << "The address of a in which value " << a << " is stored " << &a << endl;

    // new operator
    // int *p1 = new int(40);
    // float *p2 = new float(40.78);
    // cout << "The value at address p1 is " << *(p1) << endl;
    // cout << "The address of p1 is " << &p1 << endl;
    // cout << "The value at address p2 is " << *(p2) << endl;
    // cout << "The address of p2 is " << &p2 << endl;

    // int *arr = new int[3];
    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;
    // cout << "The value of arr[0] is " << arr[0] << endl;
    // cout << "The value of arr[1] is " << arr[1] << endl;
    // cout << "The value of arr[2] is " << arr[2] << endl;

    // int *arr = new int[3];
    // arr[0] = 10;
    // *(arr + 1) = 20;
    // arr[2] = 30;
    // cout << "The value of arr[0] is " << arr[0] << endl;
    // cout << "The value of arr[1] is " << arr[1] << endl;
    // cout << "The value of arr[2] is " << arr[2] << endl;

    // delete operator -> always requires pointer as input
    // int *ptr1 = new int;
    // int *ptr2 = new int(20);
    // delete ptr1; // Destroying ptr1
    // delete ptr2; // Detroying ptr2
    // cout << "Value of ptr1 = " << *ptr1 << "\n";
    // cout << "Value of ptr2 = " << *ptr2 << "\n";

    // delete operator
    int *arr1 = new int[1];
    arr1[0] = 10;
    int *arr2 = new int[3];
    arr2[0] = 20;
    arr2[1] = 30;
    arr2[2] = 40;
    delete arr1;
    delete arr2;
    cout << "The value of arr1[0] is " << arr1[0] << endl;
    cout << "The value of arr2[0] is " << arr2[0] << endl;
    cout << "The value of arr2[1] is " << arr2[1] << endl;
    cout << "The value of arr2[2] is " << arr2[2] << endl;

    return 0;
}