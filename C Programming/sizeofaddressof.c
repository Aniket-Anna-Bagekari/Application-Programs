#include<stdio.h>

int main()
{
     char ch = 'A';
     int i = 11;
     float f = 3.14;
     double d = 9.567; 

     printf("\nValue of Variables are :\n");

     printf("character : %c\n",ch);
     printf("integer : %d\n",i);
     printf("float : %f\n",f);
     printf("double : %lf\n",d);

  
     printf("\nSize of Each Data types are :\n");

     printf("Size of character : %d\n",sizeof(ch));
     printf("Size of integer : %d\n",sizeof(i));
     printf("Size of float : %d\n",sizeof(f));
     printf("Size of double : %d\n",sizeof(d));


     printf("\nAddress of each Variable is :\n");

     printf("Address of A is : %d\n",&ch);
     printf("Address of 11 is : %d\n",&i);
     printf("Address of 3.14 is : %d\n",&f);
     printf("Address of 9.567 is : %d\n",&d);

     return 0;
}