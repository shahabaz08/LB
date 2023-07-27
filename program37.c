
#include<stdio.h>
int SumOfDigits(int iNo)
{
    int iDigit=0,iSum=0;
    int iCnt=0;
    
    if(iNo<0)   //updater for negeative number
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        iSum=iSum+iDigit;
        iNo=iNo/10;
        
    }
    return iSum;

}
int main()
{
    int iValue=0,iRet=0;
    printf("enter thr numer:");
    scanf("%d",&iValue);

    iRet=SumOfDigits(iValue);
    printf("sum of digits is :%d",iRet);

    return 0;
}