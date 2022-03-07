#include <iostream>
using namespace std;

void fibonacci(int n)
{
    int n1 = 0, n2 = 1, n3;

    cout << "The fibonacci series is: ";
    cout << n1 << " " << n2 << " ";
    for (int i = 2; i < n; i++)
    {
        n3 = n1 + n2;
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
    }
}

int main()
{

    int number;
    cout << "Enter a number as far as you want to print the Fibonacci series: ";
    cin >> number;
    fibonacci(number);

    return 0;
}