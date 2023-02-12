#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        int j;
        
        // Parameterised constructor with DEFAULT values
        Demo(int x = 10, int y = 20)
        {
            i = x;
            j = y;
        }
        void fun()
        {
            i++;
            j++;
        }
        void gun() const     
        {
            i++;        // this will not work because function is of type constant
            j++;        // this will not work because function is of type constant
        }
};

int main()
{ 
    Demo obj1;          // 10     20
    Demo obj2(11);      // 11     20
    Demo obj3(11,21);   // 11     21

    obj3.fun();     
    obj3.gun();     

    return 0;
}
