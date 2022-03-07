#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    // Function Objects or (Functor): Function wrapped in a class so that it available like an object
    int arr[] = {1, 73, 4, 2, 54, 7};

    // sort(arr, arr + 6); // this will sort the array upto six length in increasing order(by default)
    sort(arr, arr + 6, greater<int>()); // this will sort the array upto six length in decreasing order

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}