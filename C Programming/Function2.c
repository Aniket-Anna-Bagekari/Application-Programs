#include<stdio.h>

int Addon(int iA,int iB)
   {
       int Add = 0;
       Add = iA + iB;

       return Add;
   }

int main()
  {
       int iA = 10;
       int iB = 100;
       int iAns = 0;

       iAns = Addon(iA,iB);

       printf("Addition is = %d\n",iAns);

       return 0;
}
