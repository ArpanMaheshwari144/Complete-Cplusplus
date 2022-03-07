#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator iter;

    for (iter = lst.begin(); iter != lst.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1; // list of 0 length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    list1.push_back(12);
    display(list1);

    // Removing elements from the list
    // list1.pop_back();   // it pop from the back of the list
    // list1.pop_front();  // it pop from front og the list
    // list1.remove(1); // it remove all the occurences if multiple occurences is occur
    // display(list1);

    // Sort the list
    // list1.sort();
    // display(list1);

    // Reversing the list
    // list1.reverse();
    // display(list1);

    // Removing duplicate from the list
    // list1.unique();
    // display(list1);

    list<int> list2(5); // Empty list of size 5
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    *iter = 23;
    iter++;
    *iter = 44;
    iter++;
    display(list2);

    // Merging of two lists
    // list1.merge(list2);
    // cout << "Both the Lists after merging: ";
    // display(list1);

    // First Method -> Sort and Merging of two lists
    // list1.sort();
    // list2.sort();
    // list1.merge(list2);
    // cout << "Both the Lists after merging: ";
    // display(list1);

    // Second Method -> Sort and Merging of two lists
    // list1.merge(list2);
    // list1.sort();
    // cout << "Both the Lists after merging: ";
    // display(list1);

    // Swaping the elements of two lists
    // list1.swap(list2);
    // cout << "Both the lists after swaping the" << endl;
    // display(list1);
    // display(list2);

    return 0;
}