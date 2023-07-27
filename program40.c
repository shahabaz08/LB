//take number from user make it reverse ,
//ip=123
//op=321


#include<stdio.h>
int ReverseDigits(int iNo)
{
    int iDigit=0,iRev=0;
    
    
    if(iNo<0)   //updater for negeative number
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        iRev=iRev*10+iDigit;
        iNo=iNo/10;
        
    }
    return iRev;

}
int main()
{
    int iValue=0,iRet=0;
    printf("enter thr numer:");
    scanf("%d",&iValue);

    iRet=ReverseDigits(iValue);
    printf("reverse of digits is :%d",iRet);

    return 0;
}