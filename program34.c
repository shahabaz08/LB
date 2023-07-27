// Display Odd Factors

#include<stdio.h>
void DisplayOddFactors(int iValue)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iValue/2;iCnt=iCnt+2) // or iCnt+=2
    {
        if(iValue%iCnt==0)
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

    DisplayOddFactors(iNo);
    return 0;
}
