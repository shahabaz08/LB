// count the white spaces in the string

#include<stdio.h>
int CheckSpace(char *str)
{
    int iCnt=0;
    while(*str!='\0')
    {
        if(*str==' ')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[30];
    int iRet=0;

    printf("enter the string :\n");
    scanf("%[^'\n']s",&Arr);
    iRet=CheckSpace(Arr);
    printf("ehr number of white spaces are:\n%d",iRet);




    return 0;
}