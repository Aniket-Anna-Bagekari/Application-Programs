#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
};

class Derived : public Base
{
    public:
        int X,Y;
};

int main()
{
    Base *bp = NULL;
    Derived *dp = NULL;

    Base obj1;
    Derived obj2;

    bp = &obj1;          // No Casting       (Allowed)
    dp = &obj2;          // No Casting       (Allowed)
    bp = &obj2;          // Up Casting       (Allowed)
    // dp = &obj1;       // Down Casting     (Not Allowed)

    return 0;
}
