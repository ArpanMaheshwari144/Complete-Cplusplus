#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    void setData(string n, int a)
    {
        name = n;
        age = a;
    }
    void display()
    {
        cout << name << " " << age << endl;
    }
};

// this is inherited private by default so if we inherited through private visiblity mode so public members of the base class becomes private members of the derived class
// class Student : Person

// this is inherited public so if we inherited through public visiblity mode so public members of the base class becomes public members of the derived class
class Student : public Person
{
private:
    int level;

public:
    void setLevel(int l)
    {
        level = l;
    }
    void displayLevel()
    {
        cout << level << endl;
    }
};

int main()
{
    Person p1;
    p1.setData("Arpan", 100);
    p1.display();

    Student s1;
    s1.setData("Verma", 100);
    s1.setLevel(11);
    s1.display();
    s1.displayLevel();

    return 0;
}