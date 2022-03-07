/*Question -> Take a positive integer from the user and find what are the first and last digit of that number. If it is a single digit, consider first digit as 0.*/

#include <iostream>
using namespace std;

void number(int arr[], int n)
{
    if (n == 1)
    {
        cout << "First element is " << 0 << endl;
        cout << "Last element is " << arr[0] << endl;
    }
    else if (n > 1)
    {
        cout << "First element is " << arr[0] << endl;
        cout << "Last element is " << arr[n - 1] << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "There is no such elements present in the array";
        exit(0);
    }
    else
    {
        int arr[n];
        cout << "Enter elements of the array: ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        number(arr, n);
    }

    return 0;
}