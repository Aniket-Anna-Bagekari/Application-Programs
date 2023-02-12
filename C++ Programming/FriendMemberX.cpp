#include<iostream>
using namespace std;

class Marvellous        // Size of Marvellous object will be 1 byte [because it is a empty class]
{
    public:
        void fun();     // Member Function
        void gun();     // Member Function                           
};
class Demo
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        Demo()
        {
            i = 10;
            j = 20;
            k = 30;
        }
    friend void Marvellous::fun();
    friend void Marvellous::gun();          
};
void Marvellous::fun()                         
{
    Demo obj;
    cout<<"Value of i : "<<obj.i<<"\n";
    cout<<"Value of j : "<<obj.j<<"\n";
    cout<<"Value of k : "<<obj.k<<"\n";
}
void Marvellous::gun()                         
{
    Demo obj;
    cout<<"Value of i : "<<obj.i<<"\n";
    cout<<"Value of j : "<<obj.j<<"\n";
    cout<<"Value of k : "<<obj.k<<"\n";
}
int main()
{
    Marvellous mobj;
    mobj.fun();
    mobj.gun();
    return 0;
}
