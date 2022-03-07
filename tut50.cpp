#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        // Ambiguity Resolution in inheritance
        Base1 ::greet(); // Base1 class ka greet function
        // Base2 ::greet(); // Base2 class ka greet function
    }
};

class B
{
public:
    void say()
    {
        cout << "Hello world" << endl;
    }
};

class D : public B
{
    int a;

public:
    // D class say() function will override base class say() function
    void say()
    {
        cout << "Jai Hind" << endl;
    }
};

int main()
{
    // Ambiguity 1
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    Derived obj;
    obj.greet();

    // Ambibuity 2
    B obj1;
    obj1.say();

    D obj2;
    obj2.say();

    return 0;
}