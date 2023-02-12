#include<stdio.h>
int main()
{
     int iNo = 11;
     
     int *p = &iNo;
     
     printf("%d\n",iNo);             // 11
     printf("%d\n",p);               // Address of iNo
     printf("%d\n",&iNo);            // Address of iNo
     printf("%d\n",&p);              // Address of p
     printf("%d\n",sizeof(iNo));     // 4
     printf("%d\n",sizeof(p));       // Size of pointer dependant on compiler and platform (for 32bit = 8)
             
     return 0;
}