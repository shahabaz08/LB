// display number using for loop

#include<stdio.h>
void NoDisplay(int iValue)
{
    int iCnt=0;
    for(iCnt=0;iCnt<=iValue;iCnt++)
    {
        printf("%d\n",iCnt);
    }
}
int main()
{
    int iNo=0;

    printf("Enter the number where you want to print ...\n");
    scanf("%d",&iNo);
    NoDisplay(iNo);
    return 0;
}