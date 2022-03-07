#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee() {}
    Employee(int inpId)
    {
        id = inpId;
        salary = 3444.0;
    }
};

// Derived Class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Note:
1. Default visibility mode is private
2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
3. Private Visibility Mode: Public members of the base class becomes Private members of the derived class
4. Private members are never inherited
*/

// jab hum derived class banate hai from base class se to automatically base class ka constrctor call hota hai
// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    string languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = "Python";
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee arpan(1), adarsh(2);
    cout << arpan.salary << endl;
    cout << adarsh.salary << endl;
    Programmer ben(3);
    cout << ben.languageCode << endl;
    cout << ben.id << endl;
    ben.getData();
    return 0;
}