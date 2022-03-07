#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("files1/tut66a.txt");
    out << "This is me\n";
    out << "This is me\n";
    out << "This is me\n";
    out << "This is me\n";
    out << "This is me\n";
    out.close();

    ifstream in;
    string str;
    in.open("files1/tut66a.txt");

    // this will read and print word only
    // in >> str;
    // cout << str;

    while (in.eof() == 0)
    {
        getline(in, str);
        cout << str << endl;
    }

    in.close();
    return 0;
}