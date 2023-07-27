// display number using for loop

#include<stdio.h>
void NoDisplay(int iValue)
{
    int iCnt=0;
    while(iCnt<=iValue)
    {
        printf("%d\n",iCnt);
        iCnt++;
    }
}
int main()
{
    int iNo=0;

    printf("Enter the number of iterations...\n");
    scanf("%d",&iNo);
    NoDisplay(iNo);
    return 0;
}