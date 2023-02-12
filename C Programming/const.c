#include<stdio.h>

int main()
{
    int iNo1 = 10;
    const int iNo2 = 10;

    printf("%d\n",iNo1);
    printf("%d\n",iNo2);                                                      // A = Allowed and NA = Not Allowed //                                                                              NA = Not Allowed */

    iNo1++;    // A
    iNo2++;    // NA

    iNo1 = 20; // A
    iNo2 = 20; // NA

    iNo1--;    // A
    iNo2--;    // NA

    return 0;
}
