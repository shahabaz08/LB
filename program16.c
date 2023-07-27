//while loop
#include<stdio.h>

int Display(int iValue)
{
    int iCnt=0;
    iCnt=1;
    while(iCnt<=iValue)
    {
        printf("Hello World...\n");
        iCnt++;
    }
    
}


int main()
{
    int iNo=0;
    printf("Enter the number of times...\n");
    scanf("%d",&iNo);
    Display(iNo);

    return 0;
}