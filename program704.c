// Factorial

//
#include<stdio.h>
int FactorialR(int No)
{
   static int iSum=1;
    static int iCnt=1;;

    if(iCnt<=No)
    {
        iCnt++;
        FactorialR(No);
    
        iSum=iSum*iCnt;
        
    }
        
    return iSum;
}


int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number :\n");
    scanf("%d",&iValue);
    iRet=FactorialR(iValue);
    printf("factorial is :%d",iRet);
   
    return 0;
}