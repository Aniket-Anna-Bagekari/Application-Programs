#include<stdio.h>

enum Days {Monday = 2, Tuesday, Wednesday, Thursday, Friday, Saturday};  // Memory required for enum is 4 byte

int main()
{
    enum Days obj;
    printf("Size of Enum is = %d\n",sizeof(obj));
    printf("Mon = %d\n",Monday);
    printf("Tue = %d\n",Tuesday);
    printf("Wed = %d\n",Wednesday);
    printf("Thu = %d\n",Thursday);

    Monday++;   // In Enumeration Values are constant it can't be changed
    printf("%d\n",&Monday);
   
    return 0;
}
