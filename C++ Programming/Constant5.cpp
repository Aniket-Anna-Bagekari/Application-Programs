#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        const int j;              // Constant Characteristics
        
        // Parameterised constructor with DEFAULT values
        Demo(int x = 10, int y = 20) : j(y)
        {
            i = x;
        }
        void fun()          
        {
            int a = 10;
            const int b = 20;     // Constant Variable
            i++;     // A
            j++;     // NA
            a++;     // A
            b++;     // NA
        }
        void gun() const          // Constant Behaviour
        {
            int a = 10;
            const int b = 20;
            i++;     // NA                 
            j++;     // NA                 
            a++;     // A
            b++;     // NA
        }
};

int main()
{ 
    Demo obj1(11,21);             // 11   21
    const Demo obj2(11,21);       // 11   21     // Constant Object

    obj1.fun();     // A
    obj1.gun();     // A
    obj2.fun();     // NA
    obj2.gun();     // A

    obj1.i++;       // A
    obj1.j++;       // NA
    obj2.i++;       // NA
    obj2.j++;       // NA
    
    return 0;
}
