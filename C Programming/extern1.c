#include<stdio.h>

int iA = 10;    // Global Variable

extern int iB;  // to access variable from another file

int main()
{
    printf("Value of A is : %d\n",iA);
    printf("Vlaue of B from other file is : %d\n",iB);
    
    return 0;
}
