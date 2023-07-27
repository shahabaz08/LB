//accept string and calculate frequenct of letter 'a'


#include<stdio.h>
int CountCh(char *str)
{
    int iCnt=0;
    while(*str!='\0')
    {
        if((*str=='a'))
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

    printf("enter the string\n");
    scanf("%[^'\n']s",Arr);
    iRet=CountCh(Arr);


    printf("Frequency of a is:%d",iRet);


    return 0;
}
