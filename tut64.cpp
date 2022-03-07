#include <iostream>
#include <fstream>
using namespace std;

/*
These are some useful classes for working with files in C++
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase

In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
1. Using the constructor
2. Using the member function open() of the class
*/

int main()
{
    // Opening files using constructor and writing it
    // string st1 = "Adarsh ";
    // string st2 = "Arpan";
    // ofstream out("texts/tut64a.txt"); // Write operation
    // out << st1;
    // out << st2;
    // out.close();

    // Opening files using constructor and reading it
    string st3;
    ifstream in("texts/tut64b.txt"); // Read operation
    // in >> st3; // reading a word from a text file
    getline(in, st3); // reading line from a text file
    cout << st3;
    in.close();

    return 0;
}
