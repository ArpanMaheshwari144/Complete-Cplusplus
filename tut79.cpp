#include <iostream>
using namespace std;

// Question -> Create a generic function that finds maximum element from the array

template <class T>
T max(T *list, int size)
{
    int i;
    T max;
    max = list[0];
    for (i = 1; i < size; i++)
    {
        if (max < list[i])
        {
            max = list[i];
        }
    }
    return max;
}

int main()
{
    int a[] = {100, 1000, 897, 787, 367};
    float b[] = {100.23, 99.647, 898.647, 1000.887};
    char c[] = {'a', 'b', 'c', 'd', 'e'};
    string d[] = {"Arpan", "Darpan", "Verma", "Patra", "Adarsh", "Zaka"};
    cout << max(a, 5) << endl;
    cout << max(b, 5) << endl;
    cout << max(c, 5) << endl;
    cout << max(d, 6) << endl;

    return 0;
}