#include<iostream>
using namespace std;

int main()
{
    int ino = 11;

    int &x = ino;

    int *p = &ino;

    double d = 90.9;

    double &y = d;
    double &z = d;

    int &a = x;

    return 0;
}
