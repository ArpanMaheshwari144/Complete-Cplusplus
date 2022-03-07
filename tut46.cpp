#include <iostream>
using namespace std;

// base class
class Parent
{

protected: // protected data members
    int id_protected;
};

// member function of the derived class can access the protected data members of the base class
// sub class or derived class
class Child : public Parent
{

public:
    void setId(int id)
    {
        // Child class is able to access the inherited protected data members of base class

        id_protected = id;
    }

    void displayId()
    {
        cout << "id_protected is: " << id_protected << endl;
    }
};

// main function
int main()
{
    Child obj;
    obj.setId(81);
    obj.displayId();
    return 0;
}
