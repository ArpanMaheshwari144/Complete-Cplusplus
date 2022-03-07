#include <iostream>
using namespace std;

class Base
{
    int data1; // private by default and is not inheritable
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base ::setData()
{
    data1 = 10;
    data2 = 20;
}

int Base::getData1()
{
    return data1;
}

int Base::getData2()
{
    return data2;
}

class Derived : private Base // Class is being derived privately
{
    int data3;

public:
    void process();
    void display();
};

void Derived ::process()
{
    // agar base class private hai to hum uske functions ko derived class ke andar jo functions hai unse call kar sakte hai
    setData();
    data3 = data2 * getData1();
}

void Derived ::display()
{
    cout << "Value of data 1 is " << getData1() << endl;
    cout << "Value of data 2 is " << data2 << endl;
    cout << "Value of data 3 is " << data3 << endl;
}

int main()
{
    Derived obj;
    obj.process();
    obj.display();

    return 0;
}