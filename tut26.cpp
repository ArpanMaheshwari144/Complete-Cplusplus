#include <iostream>
using namespace std;

// static variables are also called class variable

class Employee
{
private:
    int id;
    static int count;

public:
    void setData()
    {
        cout << "Enter the id: ";
        cin >> id;
        count++;
    }
    void getData()
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    // this is static function ye class name se hi direct call ho jayega
    static void getCount()
    {
        cout << "The value of count is " << count << endl;
    }
};

// Count is the static data member of class Employee
int Employee::count; // static variable ki value by default 0 hogi
// int Employee::count=1000; // to set some secific value

int main()
{
    Employee emp1, emp2;

    emp1.setData();
    emp1.getData();
    Employee::getCount(); // getCount() ek static function hai jo ki class name se direct call ho jayega

    emp2.setData();
    emp2.getData();
    Employee::getCount();

    return 0;
}
