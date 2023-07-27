// for loop
#include<stdio.h>

int Display(int iValue)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iValue;iCnt++)
    {
        printf("Hello World...\n");
    }
    
}


int main()
{
    int iNo=0;
    printf("Enter the No of iterations ...\n");
    scanf("%d",&iNo);
    Display(iNo);

    return 0;
}