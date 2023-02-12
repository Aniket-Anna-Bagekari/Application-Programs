#include<stdio.h>

// Structure Declaration
// There is NO memory Allocation at this Point
struct Demo
{
    int i;     // 4
    float f;   // 4
    int j;     // 4
    double d;  // 8
};             // semicolan is compulsory because it is part of the syntax

int main()
{
    // structure object | variable creation                                   // size of Structure is sum of size of each elements of that structure
    // Memory gets allocated at this point
    struct Demo obj1;
    struct Demo obj2;
    
    // Member initialisation
    obj1.d = 11.0;
    obj2.i = 21;
   

    printf("Size of obj1 is = %d\n",sizeof(obj1));
    printf("Size of obj2 is = %d\n",sizeof(obj2));
    printf("Value of i is = %lf\n",obj1.d);

    return 0;
}
