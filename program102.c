//accept string and calculate frequency of capital case letters


#include<stdio.h>
int CountCh(char *str)
{
    int iCnt=0;
    while(*str!='\0')
    {
        if((*str>='A')&&(*str<='Z'))
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
    char cValue='\0';

    printf("enter the string\n");
    scanf("%[^'\n']s",Arr);
    printf("enter the Character :\n");
    scanf("%c",&cValue);
    iRet=CountCh(Arr);


    printf("Frequency of small case letter is:%d",iRet);


    return 0;
}
