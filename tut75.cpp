#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Ways to create a vector
    vector<int> vec1; // zero length integer vector
    // int element, size;
    // cout << "Enter the size of the vector: ";
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter an element to add to this vector: ";
    //     cin >> element;
    //     vec1.push_back(element);
    // }
    // cout << "The elements in the vector after push back operation is: ";
    // display(vec1);

    vector<char> vec2(4); // 4-element character vector
    // vec2.push_back('A');
    // cout << "Elements in the vector after push back operation is: ";
    // display(vec2);

    vector<char> vec3(vec2); // 4-element character vector from vec2
    // vec3.push_back('A');
    // cout << "Elements in the vector after push back operation is: ";
    // display(vec3);

    vector<int> vec4(6, 3); // 6-element vector of 3's
    cout << "Elements in the vector are: ";
    display(vec4);
    cout << "The size of this vector is: " << vec4.size();

    return 0;
}