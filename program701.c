// accpet number and print number of stars
#include<stdio.h>

void DisplayR(int No)
{
    static int iCnt=1;  

    if(iCnt<=No)
    {
        printf("*\t");
        iCnt++;
        DisplayR(No);    //Recursive call
    }
}

int main()
{
    int iValue=0;
    printf("Enter the number :\n");
    scanf("%d",&iValue);
    DisplayR(iValue);
    return 0;
}
