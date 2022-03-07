// Data Abstraction

// 1.Abstraction means Data hiding ,in other word we can say that in this type of programming essential data is shown to the user or outside class and unessential data is hidden.
// 2.Members defined with a public access specifier are accessible throughout the program.
// 3.Members defined with a private access specifier are not accessible throughout the program means private element of a class can be accessed only inside in its own class.

#include <iostream>
using namespace std;

class Vehicle
{
public:
    void company()
    {
        cout << "Renault\n";
    }

public:
    void model()
    {
        cout << "Duster\n";
    }

public:
    void color()
    {
        cout << "Red/Brown/Silver\n";
    }

public:
    void cost()
    {
        cout << "Rs. 600,000 to 900,000\n";
    }

public:
    void oil()
    {
        cout << "Petrol\n";
    }

private: //it can not be accessed outside that class
    void piston()
    {
        cout << "4 piston\n";
    }

private: //it can not be accessed outside that class
    void manWhoMade()
    {
        cout << "Markus Librette\n";
    }
};
int main()
{ //Creating instance of class
    Vehicle obj;
    obj.company();
    obj.model();
    obj.color();
    obj.cost();
    obj.oil();

    return 0;
}