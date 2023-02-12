#include<iostream>
using namespace std;

class Base1          // 4 byte
{
    public: 
        int A; 

        Base1()
        {
            cout<<"Base1 Constructor\n";
        }
        ~Base1()
        {
            cout<<"Base1 Destructor\n";
        }
        void fun()
        {
            cout<<"Base1 fun\n";
        }
};

class Base2          // 12 byte
{
    public:
        int I;
        int J;
        int K;

        Base2()
        {
            cout<<"Base2 Constructor\n";
        }
        ~Base2()
        {
            cout<<"Base2 Destructor\n";
        }
        void gun()
        {
            cout<<"Base2 gun\n";
        }
};  
// Not Allowed in JAVA
class Derived : public Base1, public Base2          // 24 byte  //
{
    public:
        int X;
        int Y;

        Derived()
        {
            cout<<"Derived Constructor\n";
        }
        ~Derived()
        {
            cout<<"Derived Destructor\n";
        }
        void sun()
        {
            cout<<"Derived sun\n";
        }
};

int main()
{
    Derived obj;

    obj.fun();  // Base1
    obj.gun();  // Base2
    obj.sun();  // Derived

    return 0;
}
