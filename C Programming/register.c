#include<stdio.h>

int main()
{
       register int iNo = 10;            // only valid for int and char
       register char cValue = 'A';   // used for fast access, but it is a request to CPU register(there is no garranty of availability of storage)

       return 0;
}