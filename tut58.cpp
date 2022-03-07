#include <iostream>
using namespace std;
class A
{
    int a;

public:
    A &setData(int a)
    {
        this->a = a;
        return (*this);
    }

    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    // 'this' -> it is a keyword which is a pointer which points to the object which invokes the member function
    A obj;
    obj.setData(1).getData();
    return 0;
}