#include<iostream>
using namespace std;

class Base
{
    public:
        int A;
        int B;

        Base()
        {
            cout<<"Inside Base Constructor\n";
        }
        ~Base()
        {
            cout<<"Inside Base Destructor\n";
        }
        void fun()
        {
            cout<<"Inside Base fun\n";
        }
};

class Derived : public Base      // class Derived extends Base (Syntax of JAVA)
{
    public:
        int X;
        int Y;

        Derived()
        {
            cout<<"Inside Derived Constructor\n";
        }
        ~Derived()
        {
            cout<<"Inside Derived Destructor\n";
        }
        void gun()
        {
            cout<<"Inside Derived gun\n";
        }
};

class DerivedX : public Derived
{
    public:
        int i;
        int j;

        DerivedX()
        {
            cout<<"Inside DerivedX Constructor\n";
        }
        ~DerivedX()
        {
            cout<<"Inside DerivedX Destructor\n";
        }
        void sun()
        {
            cout<<"Inside DerivedX sun\n";
        }
};

int main()
{
    cout<<"Size of Base : "<<sizeof(Base)<<"\n";            // 8
    cout<<"Size of Derived : "<<sizeof(Derived)<<"\n";      // 16
    cout<<"Size of DerivedX : "<<sizeof(DerivedX)<<"\n";    // 24

    DerivedX obj1;

    obj1.fun();
    obj1.gun();
    obj1.sun();

    return 0;
}
