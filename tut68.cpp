#include <iostream>
using namespace std;

template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    vector<int> v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 1;
    vector<int> v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 9;
    v2.arr[2] = 4;
    int a = v1.dotProduct(v2);
    cout << "The integer value by using integer class template is " << a << endl;

    vector<float> v3(3);
    v3.arr[0] = 1.4;
    v3.arr[1] = 3.3;
    v3.arr[2] = 0.1;
    vector<float> v4(3);
    v4.arr[0] = 0.1;
    v4.arr[1] = 1.90;
    v4.arr[2] = 4.1;
    float b = v3.dotProduct(v4);
    cout << "The float value by using float class template is " << b << endl;

    vector<double> v5(3);
    v5.arr[0] = 1.423;
    v5.arr[1] = 3.312;
    v5.arr[2] = 0.112;
    vector<double> v6(3);
    v6.arr[0] = 0.165;
    v6.arr[1] = 1.903;
    v6.arr[2] = 4.112;
    float c = v5.dotProduct(v6);
    cout << "The double value by using double class template is " << c << endl;

    return 0;
}