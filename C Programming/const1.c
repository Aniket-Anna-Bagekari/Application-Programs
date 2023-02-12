#include<stdio.h>

const int iNo1 = 10;
const int iNo2;         /* Global constant variable should be intialised immediately if we do not intialise it then the default value of 
                           extern variable [0] will be contantly stored in it */

int main()
{
    const int iNo3 = 10;
    const int iNo4;     /* Local constant variable should be intialised immediately if we do not intialise it then the garbage value will
                           be contantly stored in it */
                     
    return 0;
}
