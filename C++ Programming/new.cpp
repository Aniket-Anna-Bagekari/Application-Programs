#include<iostream>
using namespace std;

class Base
{
    private:
        int i;
        static int j;
    public:
        Base()
        {
            i = 10;        
        }
        static void fun()
        {
            cout<<"value of j : "<<j<<"\n";
        }       
};

int Base::j = 90;

int main()
{
    
    Base obj;

    obj.fun();
   
    return 0;
}
