// accept full name and display

#include<stdio.h>
int strlenX(char str[])
{
    int iCnt=0,i=0;

    for(i=0;str[i]!='\0';i++)
    {
        iCnt++;
        
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