#include<iostream>
using namespace std;

// Call by Value
void fun(int no)
{
    cout<<"Inside Call by value : "<<no<<"\n";
    no++;
}

// Call by Address
void gun(int *p)
{
    cout<<"Inside Call by address : "<<*p<<"\n";
    (*p)++;
}

// Call by Reference
void sun(int &ref)
{
    cout<<"Inside Call by reference : "<<ref<<"\n";
    ref++;
}    

int main()
{
    int i = 10;
    int j = 10;
    int k = 10;

    fun(i);         // fun(10);
    cout<<i<<"\n";  // 10

    gun(&j);        // gun(200);   200 is assumed address of variable j
    cout<<j<<"\n";  // 11

    sun(k);         // sun(k);
    cout<<k<<"\n";  // 11

    return 0;
}
