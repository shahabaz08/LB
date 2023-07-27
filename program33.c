// Display Even Factors

#include<stdio.h>
void DisplayEvenFactors(int iValue)
{
    int iCnt=0;
    for(iCnt=2;iCnt<=iValue/2;iCnt=iCnt+2) // or iCnt+=2
    {
        if((iValue%iCnt==0)&&(iCnt%2==0))
        {
            printf("%d\n",iCnt);
        }
        
    }
}
int main()
{
    int iNo=0;
    printf("enter ther number :");
    scanf("%d",&iNo);

    DisplayEvenFactors(iNo);
    return 0;
}
