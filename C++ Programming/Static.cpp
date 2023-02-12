#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;         // 4                      // size of object is sumation of sizes of non static characteristics....
        int j;         // 4                      // Therefore size of obj is 8 Byte....
        static int k;  // 4
};

int main()
{
    Demo obj;

    cout<<sizeof(obj);    // size of object is sumation of sizes of non static characteristics....
    return 0;             // Therefore size of obj is 8 Byte....
}
