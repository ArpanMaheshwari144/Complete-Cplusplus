#include <iostream>
using namespace std;

template <class T>
class Arpan
{
public:
    T data;
    Arpan(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Arpan<T>::display()
{

    cout << data;
}

void func(int a)
{
    cout << "I am first function and the value of a is " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "I am templatised function and the value of a is " << a << endl;
}

template <class T>
void func1(T a)
{
    cout << "I am templatised function1 and the value of a is " << a << endl;
}
int main()
{
    // Arpan<float> a(5.77);
    // Arpan<int> a(5);
    // Arpan<char> a('a');
    // cout << a.data << endl;
    // a.display();

    func(4); // Exact match takes the highest priority
    func(4.66);
    func1(4);

    return 0;
}