// take string from user and solve strlen using ecursion


#include<stdio.h>

int strlenI(char *str)
{
    static int iCnt=0;

    if(*str !='\0')
    {
        iCnt++;
        str++;
        strlenI(str);
    }
    return iCnt;

}
int main()
{
    char Arr[20];
    int iRet=0;
    printf("Enter the string:");

    scanf("%[^'\n]s",Arr);

    iRet=strlenI(Arr);

    printf("String length is :%d",iRet);

    


    return 0;
}