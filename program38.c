//count even digits of the number 

#include<stdio.h>
int CountEvenDigits(int iNo)
{
    int iDigit=0;
    int iCnt=0;
    if (iNo==0)
    {
        return 1;
    }
    if(iNo<0)   //updater for negeative number
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit%2==0)
        {
            iCnt++;
        }
       iNo=iNo/10;
        
        
    }
    return iCnt;

}
int main()
{
    int iValue=0,iRet=0;
    printf("enter thr numer:");
    scanf("%d",&iValue);

    iRet=CountEvenDigits(iValue);
    printf( "Even digits iare :%d",iRet);

    return 0;
}