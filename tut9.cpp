#include <iostream>
using namespace std;

/*Loops in C++:
    There are three types of loops in C++:
        1. For loop
        2. While Loop
        3. do-While Loop
*/

int main()
{

    /*For loop in C++*/
    // Syntax for for loop
    // for(initialization; condition; updation)
    // {
    //     loop body(C++ code);
    // }

    // for (int i = 1; i <= 40; i++)
    // {
    //     cout << i << endl;
    // }

    /*While loop in C++*/
    // Syntax:
    // while(condition)
    // {
    //     C++ statements;
    // }

    // Printing 1 to 40 using while loop
    // int i = 1;
    // while (i <= 40)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    /* do-while loop in C++*/
    // Syntax:
    // do
    // {
    //     C++ statements;
    // }while(condition);

    // do-while loop execute once definitly
    //  Printing 1 to 40 using do-while loop
    int i = 1;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= 40);

    return 0;
}
