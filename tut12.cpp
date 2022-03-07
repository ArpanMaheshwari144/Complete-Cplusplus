#include <iostream>
using namespace std;

int main()
{
    // Array Example
    // int marks[4] = {23, 45, 56, 89};
    // OR
    // int marks[] = {23, 45, 56, 89};

    // You can change the value of an array
    // marks[2] = 55;

    // cout << "These are marks" << endl;
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;

    // for (int i = 0; i < 4; i++)
    // {
    //     cout << "The value of marks " << i << " is " << marks[i] << endl;
    // }

    // int mathMarks[] = {23, 45, 56, 89};
    // OR
    // int mathMarks[4];
    // mathMarks[0] = 23;
    // mathMarks[1] = 45;
    // mathMarks[2] = 56;
    // mathMarks[3] = 89;

    // cout << "These are math marks" << endl;
    // cout << mathMarks[0] << endl;
    // cout << mathMarks[1] << endl;
    // cout << mathMarks[2] << endl;
    // cout << mathMarks[3] << endl;

    // for (int i = 0; i < 4; i++)
    // {
    //     cout << "The value of math marks " << i << " is " << mathMarks[i] << endl;
    // }

    // Pointers and arrays
    int marks[] = {20, 40, 6, 80};
    int *p = marks; // address of first block

    // cout << *(p++) << endl;
    // cout << *p << endl;
    // cout << *(++p) << endl;
    // cout << *p << endl;

    cout << "The value of *p is " << *p << endl;
    cout << "The value of *(p + 1) is " << *(p + 1) << endl;
    cout << "The value of *(p + 2) is " << *(p + 2) << endl;
    cout << "The value of *(p + 3) is " << *(p + 3) << endl;

    return 0;
}
