#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    // Map is an associative array
    map<string, int> marks;
    marks["Arpan"] = 88;
    marks["Adarsh"] = 78;
    marks["Verma"] = 98;
    marks.insert({{"Patra", 87}, {"Shubham", 66}});

    map<string, int>::iterator iter;
    for (iter = marks.begin(); iter != marks.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }

    cout << "The size of this map is: " << marks.size() << endl;
    cout << "The maximum size of this map is: " << marks.max_size() << endl;
    cout << "Is this map is empty: " << marks.empty() << endl;

    return 0;
}