#include <iostream>
using namespace std;

/*
For a protected member:
                        Public Derivation   Private Derivation   Protected Derivation
    1. Private members      Not Inherited   Not Inherited       Not Inherited
    2. Protected members    Protected       Private             Protected
    3. Public members       Public          Private             Protected
*/

// protected means -> mei ek private jaisa variable hu but mei inherited ho sakta hai
class Base
{
protected:
    int a = 10;

private:
    int b = 20;
};

class Derived : protected Base
{
};

int main()
{
    Base obj1;
    Derived obj2;
    // cout << obj1.a; // will not work sice a is protected in both base class as well as derived class
    // cout << obj1.b; // will not work sice a is private
    // cout << obj2.a; // will not work sice a is protected in both base class as well as derived class
    // cout << obj2.b; // will not work sice a is private
    return 0;
}