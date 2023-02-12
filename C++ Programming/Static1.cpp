#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;          // Instance Variable                      
        int j;          // Instance Variable                   
        static int k;   // Class Variable
        static int l;

        Demo()          // Default Constructor
        { 
            i = 0;
            j = 0;
        }

        Demo(int a, int b)  // Parameterised Constructor
        {
            i = a;
            j = b;
        }

        void fun()     // Instance Method
        {
            cout<<"Inside non static method fun\n";
            cout<<"Vlaue of i : "<<this->i<<"\n";
            cout<<"Value of j : "<<this->j<<"\n";
            cout<<"Value of k : "<<k<<"\n";
            cout<<"Value of l : "<<l<<"\n";
        }

        static void gun()   // Class Method
        {
            cout<<"Inside gun\n";
            cout<<"Value of k : "<<k<<"\n";
            cout<<"Value of l : "<<l<<"\n";
        }
};

// Load Time Variables  [very very very important]
int Demo::k = 0;       // This is not a global variable  [very very important point to remember]
int Demo::l = 0;       // This is not a global variable  [very very important point to remember]
// Before entering main function memory for k and l gets allocated

int main()
{
    cout<<"Inside main\n";
    cout<<"Value of k : "<<Demo::k<<"\n";    // 0
    cout<<"Value of l : "<<Demo::l<<"\n";    // 0
    
    Demo::gun();
    Demo obj1(10,11);
    Demo obj2(20,21);
    Demo obj3;

    cout<<"Value of i : "<<obj1.i<<"\n";    // 10
    cout<<"Value of i : "<<obj2.i<<"\n";    // 20

    cout<<"Value of j : "<<obj1.j<<"\n";    // 11
    cout<<"Value of j : "<<obj2.j<<"\n";    // 21

    obj1.fun();   // fun(&obj1);
    obj2.fun();
    obj1.gun();   // can be done as Demo::gun(); also [this is bad programming practice]

    return 0;             
}
