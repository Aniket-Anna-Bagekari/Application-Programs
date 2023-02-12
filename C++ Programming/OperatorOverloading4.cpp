#include<iostream>
using namespace std;

class Demo
{
    private:
        int A,B;
    public:    
        Demo(int i = 0, int j = 0)
        {
            A = i;
            B = j;
        }
        void Display()
        {
            cout<<A<<"\n";
            cout<<B<<"\n";
        }
        friend Demo operator + (Demo, Demo);
};
// + is an opertaor overloaded function which accepts 2 parameters and both are objects of Demo class
// this function returns the object of Demo class
Demo operator + (Demo obj1, Demo obj2)
{
    int iNo1 = 0;
    int iNo2 = 0;

    iNo1 = obj1.A + obj2.A;
    iNo2 = obj1.B + obj2.B;

    return Demo(iNo1, iNo2);
}

int main()
{
    Demo X(10,20);            
    Demo Y(30,40);       
    Demo Ans(0,0); 

    Ans = X + Y;          //   +(X,Y);
    
    Ans.Display();
  
    return 0;
}
