#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char fName[20];
    int fd = 0;

    printf("Please enter file name that you want to open\n");
    scanf("%s",fName);

    fd = open(fName,O_RDWR);  //  O_RDONLY    O_WRONLY    O_RDWR
    if(fd == -1)
    {
        printf("Unable to open the file\n");
    }
    else
    {
        printf("File is succesfully opened with FD %d\n",fd);
    }

    return 0;
}
