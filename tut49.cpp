#include <iostream>
#include <math.h>
using namespace std;
/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and perfoms +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and perfoms any four scientific operations of your chioice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using? ---> Multiple inheritance
    Q2. Which mode of Inheritance are you using? ---> public SimpleCalculator, public ScientificCalculator
    Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
    Q4. How is code reusability implemented?
*/
class SimpleCalculator
{
    int a, b;

public:
    void getDataSimple()
    {
        cout << "**********This is for Simple Calculator****************" << endl;
        cout << "Enter the value of a: ";
        cin >> a;
        cout << "Enter the value of b: ";
        cin >> b;
    }

    void performOperationsSimple()
    {
        cout << "The value of a + b is: " << a + b << endl;
        cout << "The value of a - b is: " << a - b << endl;
        cout << "The value of a * b is: " << a * b << endl;
        cout << "The value of a / b is: " << a / b << endl;
    }
};

class ScientificCalculator
{
    int a, b;

public:
    void getDataScientific()
    {
        cout << "**********This is for Scientific Calculator****************" << endl;
        cout << "Enter the value of a: ";
        cin >> a;
    }

    void performOperationsScientific()
    {
        cout << "The value of cos(a) is: " << cos(a) << endl;
        cout << "The value of sin(a) is: " << sin(a) << endl;
        cout << "The value of exp(a) is: " << exp(a) << endl;
        cout << "The value of tan(a) is: " << tan(a) << endl;
        cout << "The value of sqrt(a) is: " << sqrt(a) << endl;
        cout << "The value of log(a) is: " << log(a) << endl;
        cout << "The value of log10(a) is: " << log10(a) << endl;
        cout << "The value of " << a << " sqaure is: " << pow(a, 2) << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};
int main()
{
    HybridCalculator hcalc;
    hcalc.getDataSimple();
    hcalc.performOperationsSimple();
    hcalc.getDataScientific();
    hcalc.performOperationsScientific();

    return 0;
}