// data -> structure
// data and functions -> classes

#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;

    // function declare only but implements later
    void setData(int a1, int b1, int c1);

    // function declare and implement
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};

void Employee ::setData(int a1, int b1, int c1) // :: scope resolution operator
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee emp;
    // emp.a = 134; -->This will throw error as 'a' is private
    emp.d = 34;
    emp.e = 89;
    emp.setData(1, 2, 4);
    emp.getData();
    return 0;
}
