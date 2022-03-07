#include <bits/stdc++.h>
using namespace std;

void demo1()
{
    int count = 0;
    cout << count << " ";

    // value is updated and will not be carried to next function call
    count++;
}

void demo2()
{
    static int count = 0;
    cout << count << " ";

    // value is updated and will be carried to next function calls
    count++;
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        demo1();
    }

    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        demo2();
    }

    return 0;
}