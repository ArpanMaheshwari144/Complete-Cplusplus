// OOPs - Classes and objects
// by default class mei sab private hota hai
// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            Class definition
        } arpan, adarsh;
*/
// arpan.salary = it makes no sense if salary is private

// Nesting of member functions

#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;
    void check_binary();

public:
    void read();
    void ones_compliment();
    void display();
};

void binary::read()
{
    cout << "Enter a binary number: ";
    cin >> s;
}

void binary::check_binary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0); // program exit
        }
    }
}

void binary::ones_compliment()
{
    check_binary(); // nesting of class member function
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary::display()
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
        // cout << s[i];
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}
