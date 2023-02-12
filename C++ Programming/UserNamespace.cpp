#include<iostream>
// using namespace std;

namespace Marvellous
{
    class Demo
    {
        public:
            int i,j;
            void fun()
            {
                std::cout<<"Inside fun of Demo from Marvellous\n";     // cout is a object of a ostream class which is written in namespace standard; 
            }
    };
    class Hello
    {
        public:
            int x,y; 
    };
}
namespace Infosystems
{
    class Demo
    {
        public:
            int a,b;
            void fun()
            {
                std::cout<<"Inside fun of Demo from Infosystems\n";     // std::cout is used if we not use using namespace std in our program;
            }
    };
}
int main()
{
    Marvellous::Demo obj1;
    obj1.fun();
    Infosystems::Demo obj2;
    obj2.fun();

    using namespace Marvellous;
    Hello obj3;
    Demo obj4;

    return 0;
}