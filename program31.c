// take a number from user and print reverse to 1 from number 

#include<stdio.h>
void DisplayReverse(int iValue)
{
    int iCnt=0;
    for(iCnt=iValue;iCnt>=1;iCnt--)
    {
        printf("%d\n",iCnt);
    }
}
int main()
{
    int iNo=0;
    printf("enter ther number :");
    scanf("%d",&iNo);

    DisplayReverse(iNo);
    return 0;
}
