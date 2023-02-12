#include<iostream>
using namespace std;

class Base
{
        int X;          // Default Access Specifier for a variable is == private [only if we do not specify public, private, protected]
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        Base()
        {
            i = 10;
            j = 20;
            k = 30;
        }
        void fun()
        {
            cout<<"Value of public i : "<<i<<"\n";      // A     /* Inside a Class we can access anything irrespective of the Access Specifier
            cout<<"Value of private j : "<<j<<"\n";     // A        [it dosent matter whether it is public, private, protected]  */
            cout<<"Value of protected k : "<<k<<"\n";   // A        
        }            
};

int main()
{
    Base dobj;                                       // Static Memory Allocation   // 12 bytes
    cout<<"Value of public i : "<<dobj.i<<"\n";      // A
 // cout<<"Value of private j : "<<dobj.j<<"\n";     // NA
 // cout<<"Value of protected k : "<<dobj.k<<"\n";   // NA

    dobj.fun();

    return 0;
}
