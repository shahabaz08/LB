//programming on file handling

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>// fille control.h

int main()
{
    char Fname[20];
    int fd=0;// file descripter

    printf("Enter the file name that u want to create");
    scanf("%s",Fname);

    fd=creat(Fname,0777);

    if(fd==-1)
    {
        printf("Unable to create file \n");

    }
    else
    {
        printf("File is successfully created with Fd %d",fd);

    }

    


    return 0;
}