//sum of digits
#include<stdio.h>
int SumOfDigits(int iNo)
{
    int iDigit=0,iSum=0;
    int iCnt=0;

    while(iNo!=0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;
        iSum=iSum+iDigit;
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