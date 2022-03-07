#include <iostream>
using namespace std;

class Employee
{
    int id;

public:
    void setId()
    {
        cout << "Enter the id of employee: ";
        cin >> id;
    }

    void getId()
    {
        cout << "The id of this employee is " << id << endl;
    }
};

int main()
{
    // Employee emp1, emp2;
    // emp1.setId();
    // emp1.getId();

    // emp2.setId();
    // emp2.getId();

    Employee emp[2];
    for (int i = 0; i < 2; i++)
    {
        emp[i].setId();
        emp[i].getId();
    }

    return 0;
}
