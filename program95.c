// accept full name and display

#include<stdio.h>
int strlenX(char *str)
{
    int iCnt=0;

    while(*str!='\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;

}
int main()
{

    char Arr[30];
    int iRet=0;

    printf("enter the string\n");
    scanf("%[^'\n']s",Arr);
    iRet=strlenX(Arr);


    printf("number of characters are %d",iRet);


    return 0;
}

template