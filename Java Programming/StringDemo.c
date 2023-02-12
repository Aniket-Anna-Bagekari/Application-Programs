#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[5] = {'a','b','c','d','\0'};    // Case 1    // All this three methods 
    char Brr[5] = "abcd";                    // Case 2    // are used in 
    char Crr[] = "abcd";                     // Case 3    // C and C++

    printf("%s\n",Arr);  // abcd
    printf("%s\n",Brr);  // abcd
    printf("%s\n",Crr);  // abcd

    printf("Size of Arr : %d\n",sizeof(Arr));  // 5
    printf("Size of Brr : %d\n",sizeof(Brr));  // 5
    printf("Size of Crr : %d\n",sizeof(Crr));  // 5

    printf("Length of Arr : %d\n",strlen(Arr));  // 4
    printf("Length of Brr : %d\n",strlen(Brr));  // 4
    printf("Length of Crr : %d\n",strlen(Crr));  // 4

    return 0;
}
