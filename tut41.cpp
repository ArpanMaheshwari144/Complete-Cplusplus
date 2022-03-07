#include <iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value
int count = 0;

class num
{
public:
    //constructor -> jab object banega tab contructor call hoga
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object number" << count << endl;
    }

    // destructor -> or jab us object ka kaam khatam ho jayega tab destructor call hoga
    ~num()
    {
        cout << "This is the time when destructor is called for object number" << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside our main function" << endl;
    cout << "Creating first object n1" << endl;

    // this is block -> jo bhi iske andar hoga wo block ke exit hone ke baad destroy ho jayenge
    num n1; // jab main exit hoga tab n1 bhi destroy ho jayega
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}
