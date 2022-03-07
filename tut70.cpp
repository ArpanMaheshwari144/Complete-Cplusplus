#include <iostream>
using namespace std;

// Class Templates with Default Parameters
template <class T1 = int, class T2 = float, class T3 = char>
class Arpan
{
public:
    T1 a;
    T2 b;
    T3 c;
    Arpan(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
    }
};

int main()
{
    Arpan<> obj1(3, 5.774, 'a');
    cout << "******Class templates by using default parameters******" << endl;
    obj1.display();

    cout << endl;

    Arpan<float, char, int> obj2(3.777, 'c', 5);
    cout << "******Class templates by using giving parameters******" << endl;
    obj2.display();

    cout << endl;

    Arpan<float, char, char> obj3(4.534, 'c', 'o');
    obj3.display();

    return 0;
}