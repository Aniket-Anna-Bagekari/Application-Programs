#include<stdio.h>

enum Days {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};  // Memory required for enum is 4 byte

int main()
{
    enum Days obj;
    printf("Size of Enum is = %d\n",sizeof(obj));
    printf("Mon = %d\n",Monday);
    printf("Tue = %d\n",Tuesday);
    printf("Wed = %d\n",Wednesday);
    printf("Thu = %d\n",Thursday);

    return 0;
}
