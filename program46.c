//minimum digit from number (with optimization)
//ip=751
//op=1
#include<stdio.h>
int MinDigit( int iNo)
{
    int iDigit=0,iMin=9;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit<iMin) // we can use 2nd if in 1sr if
        {
            iMin=iDigit;
        }
        if(iMin==0)
        {
            break;
        }

        iNo=iNo/10;
    }
    return iMin;

}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet=MinDigit(iValue);

    printf("smallest number is :%d",iRet);

    return 0;
}
