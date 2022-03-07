#include <iostream>
using namespace std;
class A
{
    int a, b, c, d;

public:
    void setData1(int a1)
    {
        a = a1;
    }

    void setData2(int b, int c)
    {
        this->b = b;
        this->c = c;
    }

    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
    }
};

int main()
{
    // 'this' -> it is a keyword which is a pointer which points to the object which invokes the member function
    A obj;
    obj.setData1(1);
    obj.setData2(2, 3);
    obj.getData();
    return 0;
}