#include<stdio.h>

int main()
{
     int Arr[5] = {10,20,30,40,50};

     printf("Base address of array : %p\n",Arr);
     printf("Base address of array : %p\n",&Arr);
     printf("Size of array : %d\n",sizeof(Arr));

     return 0;
}