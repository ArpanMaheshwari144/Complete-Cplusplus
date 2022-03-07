#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << "i" << endl;
    }

    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    // Complex c1;
    // c1.setData(1, 23);
    // c1.getData();

    // OR

    // Complex c1;
    // Complex *ptr = &c1;
    // (*ptr).setData(1, 23); // . operator ki precedence higher hoti hai * operator se isilye (*ptr) likha gaya hai naki *ptr
    // (*ptr).getData();

    // OR

    // Complex *ptr = new Complex;
    // (*ptr).setData(1, 23);
    // (*ptr).getData();

    // OR

    // Complex *ptr = new Complex;
    // ptr->setData(1, 23); //  arrow(->) operator means pointer ko dereference karna
    // ptr->getData();      // ptr->getData() means ptr jis bhi object ko point kar raha hai uska getData call karo

    // Array of Objects
    Complex *ptr = new Complex[4];
    ptr->setData(1, 23);
    ptr->getData();
    return 0;
}