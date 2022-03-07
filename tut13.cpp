#include <iostream>
using namespace std;

// A structure is a user-defined data type available in C++ that allows to combining data items of different kinds. Structures are used to represent a record.

// without typedef keyword
// struct employee
// {
//     int eId;
//     string name;
//     float salary;
// };

// with typedef keyword
// typedef struct employee
// {
//     int eId;
//     string name;
//     float salary;
// } emp;

// A union is a special data type available in C++ that allows storing different data types in the same memory location.

union money {
    int rice;
    char car;
    float pounds;
};

int main()
{

    // without typedef keyword
    // struct employee emp1;
    // emp1.eId = 1;
    // emp1.name = "Arpan";
    // emp1.salary = 12000;
    // cout << "The id of employee is " << emp1.eId << endl;
    // cout << "The name of employee is " << emp1.name << endl;
    // cout << "The salary of employee is " << emp1.salary << endl;

    // with typedef keyword
    // emp emp1;
    // emp1.eId = 1;
    // emp1.name = "Arpan";
    // emp1.salary = 12000;
    // cout << "The id of employee is " << emp1.eId << endl;
    // cout << "The name of employee is " << emp1.name << endl;
    // cout << "The salary of employee is " << emp1.salary << endl;

    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    cout << m1.rice << endl;
    cout << m1.car;

    return 0;
}
