#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // OR
        // cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec1;
    int element, size;
    cout << "Enter the size of the vector: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector: ";
        cin >> element;
        vec1.push_back(element);
    }
    cout << "The elements in the vector after push back operation is: ";
    display(vec1);

    // Case 1:
    // vec1.pop_back();
    // cout << "The elements in the vector after pop back operation is: ";
    // display(vec1);

    // vector<int>::iterator iter = vec1.begin();
    // vec1.insert(iter, 10);
    // vec1.insert(iter + 1, 10);
    // vec1.insert(iter + 2, 2, 10);
    // display(vec1);

    // Case 3:
    // cout << "The front element of this vector is: " << vec1.front() << endl;
    // cout << "The last element of this vector is: " << vec1.back() << endl;

    return 0;
}