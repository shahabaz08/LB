// accept a number and make a table of it
#include<stdio.h>
 void DisplayTable(int iValue)
 {
    int iCnt=0;
    int iAns=0;
    for(iCnt=1;iCnt<=10;iCnt++)
    {
        iAns=iCnt*iValue;
        printf("%d ",iAns);
    }

 }
int main()
{
    int iNo=0;
    printf("Enter the number :");
    scanf("%d",&iNo);
    printf("The Table of number is :");
    DisplayTable(iNo);

    return 0;

}   