#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        int j;

        Demo()
        {
            i = 11;
            j = 21;
        }
        Demo(int x, int y)
        {
            i = x;
            j = y;
        }
};

int main()
{
    Demo obj1;
    Demo obj2(10,20);

    const Demo obj3;
    const Demo obj4(10,20);

    obj1.i++;        // A
    // obj4.i++;     // NA
    // obj3.j++;     // NA
    obj1.j++;        // A

    return 0;
}
