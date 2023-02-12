#include<stdio.h>

int main()
{    
    int Arr[4] = {10,20,30,40};

    Arr[0];              // 10
    sizeof(Arr);         // 16
    sizeof(Arr[2]);      // 4
    &(Arr[3]);           // 112 (Base address of value stored at index 3)

    &Arr;                // 100 (Base address of whole array [which is same as address of first element])
    Arr;                 // 100 (Base address of first element of array)
    &(Arr[0]);           // 100 (Base address of value stored at index 0)

    return 0;
}
