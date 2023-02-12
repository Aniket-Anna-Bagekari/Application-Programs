#include<stdio.h>

void Fun()         // Function Defination
{
        auto int iB = 20;       // default storage class of data type is auto (it is not neccesary to provide)
        register int iD = 20; 
        static int iE = 20;     // Local static variable
        
        iB++;      // Increment by One
        iD++;      // Increment by One
        iE++;      // Increment by One             

        printf("Value of auto Variable is : %d\n",iB);
        printf("Value of register Variable is : %d\n",iD);
        printf("Value of static Variable is : %d\n",iE);
}

int main()
{
        int iC = 30;

        printf("\nFirst Function Call\n"); 
        Fun();     // Function Call
        printf("\nSecond Function Call\n");
        Fun();     // Function Call
        printf("\nThird Function Call\n");
        Fun();     // Function Call          
       
        return 0;
}
