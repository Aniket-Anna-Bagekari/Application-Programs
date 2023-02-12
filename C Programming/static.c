#include<stdio.h>

void Demo()
{
        auto int iA = 10;
        iA++;                    // Increment value by 1

        printf("Value from Demo is : %d\n",iA);
}

void Hello()
{
        static int iB = 10;
        iB++;                    // Increment value by 1

        printf("Value from Hello is : %d\n",iB);
}

int main()
{
       Demo();
       Demo();
       Demo();
       Hello();
       Hello();
       Hello();

       return 0;
}