//Addition of digits


#include <stdio.h>

int  DisplayDigit(int iNo)
{
    int iDigit=0;
    static int iSum=0;
    static int iCnt=0;
    if(iNo!=0)
    {
        iDigit=iNo%10;
        iSum=iSum+iDigit;
        iNo/=10;
        DisplayDigit(iNo);

    }
    return iSum;

}
int main()
{
    int iNo=0;
    int iRet=0;
    printf("enter the numebr :");
    scanf("%d",&iNo);

    iRet=DisplayDigit(iNo);
    printf("the Sum of digits is :%d",iRet);


    return 0;
}