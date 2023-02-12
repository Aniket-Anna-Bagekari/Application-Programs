#include<stdio.h>
#include<stdbool.h>

// %  :- Mod
// == :- Equality
bool CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;  
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;        // false is internally considered as 0 for boolean

    printf("Enter one Number = ");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);
    if(bRet == true)
    {
        printf("\nIt is a Even Number\n");
    }
    else
    {
        printf("\nIt is a Odd Number\n");
    }
    
    return 0;
}
