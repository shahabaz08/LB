//return such a digit from a number which is largest
//ip=751
//op=7
#include<stdio.h>
int MaxDigit( int iNo)
{
    int iDigit=0,iMax=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit>iMax) // we can use 2nd if in 1sr if
        {
            iMax=iDigit;
        }
        if(iMax==0)
        {
            break;
        }

        iNo=iNo/10;
    }
    return iMax;

}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet=MaxDigit(iValue);

    printf("largest number is :%d",iRet);

    return 0;
}
