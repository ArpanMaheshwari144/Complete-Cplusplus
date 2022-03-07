/*The dot and arrow operator are both used in C++ to access the members of a class. They are just used in different scenarios. In C++, types declared as class, struct, or union are considered "of class type". So the following refers to all three of them.

a.b is only used if b is a member of the object (or reference[1] to an object) a. So for a.b, a will always be an actual object (or a reference to an object) of a class.
a→b is essentially a shorthand notation for (*a).b, ie, if a is a pointer to an object, then a→b is accessing the property b of the object that a points to.
Note that . is not overloadable. → is overloadable operator, so we can define our own function(operator→()) that should be called when this operator is used. so if a is an object of a class that overloads operator→ (common such types are smart pointers and iterators), then the meaning is whatever the class designer implemented.

[1] References are, semantically, aliases to objects, so I should have added "or reference to a pointer" to the #3 as well. However, I thought this would be more confusing than helpful, since references to pointers (T*&) are rarely ever used.

----------------------------------------------------------------------------------------------------------------

1. for accessing object member variables and methods via pointer to object
Foo *foo = new Foo();
foo->member_var = 10;
foo->member_func();

2. for accessing object member variables and methods via object instance
Foo foo;
foo.member_var = 10;
foo.member_func();
*/

#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int b;
    A() { b = 5; }
};

int main()
{
    A a;
    A *x = &a;
    std::cout << "a.b = " << a.b << "\n";
    std::cout << "x->b = " << x->b << "\n";

    return 0;
}