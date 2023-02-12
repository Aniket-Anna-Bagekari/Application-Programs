#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char fName[20];
    int fd = 0;

    printf("Please enter file name that you want to create\n");
    scanf("%s",fName);

    fd = creat(fName,0777);
    if(fd == -1)
    {
        printf("Unable to create the file\n");
    }
    else
    {
        printf("File is succesfully created with FD %d\n",fd);
    }

    return 0;
}
