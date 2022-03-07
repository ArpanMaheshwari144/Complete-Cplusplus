#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{1, 2, 3, 4, 5};

    // In this way we delete an element from the vector
    v.erase(v.begin() + 1); // it takes a iterator as an argument

    for (auto it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << " ";
    }

    return 0;
}