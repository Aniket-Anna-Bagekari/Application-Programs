#include<stdio.h>

int Addition(int iNo1, int iNo2)
{
    int iAns = 0;
    iAns = iNo1 + iNo2;
    return iAns;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter First number = ");
    scanf("%d",&iValue1);

    printf("Enter Second number = ");
    scanf("%d",&iValue2);

    iRet = Addition(iValue1, iValue2);

    printf("\nAddition is = %d\n",iRet);

    return 0;
}
