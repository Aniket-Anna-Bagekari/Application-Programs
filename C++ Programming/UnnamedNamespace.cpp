#include<iostream>
// using namespace std;

namespace     // [there is no name to our namespace which is BAD programming]
{
    class Demo
    {
        public:
            int i,j;
            void fun()
            {
                std::cout<<"Inside fun of Demo from Unnamed namespace\n";     // cout is a object of a ostream class which is written in namespace standard; 
            }
    };
}

int main()
{
    Demo obj;     // A      [because there is no name to our namespace]

    obj.fun();    // It can be accessed in only this file because there is no name to the namespace

    return 0;
}