#include <iostream>
using namespace std;

// By using normal functions -

// float average1(int a, int b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }
// float average2(int a, float b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }

// *****************OR*********************

// By using templates -

template <class T1, class T2>
float average(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

int main()
{
    // float a, b;
    // a = average1(5, 2);
    // b = average2(5, 2.7474);
    // cout << "The average of these numbers are " << a << endl;
    // cout << "The average of these numbers are " << b << endl;

    // *****************OR*********************

    float a;
    a = average(5, 2.7474);
    cout << "The average of these numbers are " << a << endl;

    return 0;
}