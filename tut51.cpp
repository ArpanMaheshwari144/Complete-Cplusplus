#include <iostream>
using namespace std;

/*
Inheritance:
student -->test 
student-->sports
test --> result
sports --> result
*/

// Virtual base classes are used in virtual inheritance in a way of preventing multiple “instances” of a given class appearing in an inheritance hierarchy when using multiple inheritances.
class Student
{
protected:
    int roll_no;

public:
    void set_roll_number(int a)
    {
        roll_no = a;
    }
    void print_roll_number()
    {
        cout << "Your roll no is " << roll_no << endl;
    }
};

// class Test : public virtual Student
class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }

    void print_marks()
    {
        cout << "Your result is here: " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }

    void print_score()
    {
        cout << "Your PT score is " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        print_roll_number();
        print_marks();
        print_score();
        cout << "Your total score is: " << total << endl;
    }
};

int main()
{
    Result arpan;
    arpan.set_roll_number(1);
    arpan.set_marks(78.9, 99.5);
    arpan.set_score(90);
    arpan.display();
    return 0;
}