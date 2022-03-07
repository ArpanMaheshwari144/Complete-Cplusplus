#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // connecting our file with out stream
    ofstream out("files/tut65a.txt");

    // creating a name string and filling it to the file which is entered by the user
    string name;
    cout << "Enter your name: ";
    cin >> name;

    // writing a string to the file
    out << "My name is " << name; // out << "My name is " + name;  bcoz  we use file out function and do not use cout
    out.close();

    ifstream in("files/tut65a.txt");
    string content;
    // in >> content; // reading a word from a text file
    getline(in, content); // reading a line from a text file
    cout << "The content of the file is: " << content;
    in.close();

    return 0;
}