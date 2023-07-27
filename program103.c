// accept string and one char count no of occurance of char



#include<stdio.h>
int CountFrequency(char *str,char ch)
{
    int iCnt=0;
    while(*str!='\0')
    {
        if(*str==ch)
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
    scanf(" %c",&cValue);


    iRet=CountFrequency(Arr,cValue);
    printf("Frequency  letter is:%d",iRet);


    return 0;
}
//(line 29) \n remains in overflow so scanf considers it as a enter (input buffer)
//so it not stopping to accept scanf

//if we put Space before seconf scanf it is a solution
// due to space in scanf enter (\n) removed from the input before