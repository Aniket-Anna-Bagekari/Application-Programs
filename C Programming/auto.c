#include<stdio.h>

int main()
{
        auto int iA = 10;    // default storage class of data type is auto
        auto int iB = 11;    // default storage class of data type is auto
        auto int iAns = 0;   // default storage class of data type is auto

        iAns = iA + iB;

        printf("Addition is : %d\n",iAns);


       return 0;
}