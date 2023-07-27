//take number from user make it reverse ,
//ip=123
//op=321
//seperate function


#include<stdio.h>
#include<stdbool.h>
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
bool Checkpallindrome(int iData)
{
    int iReverse=0;
    iReverse=ReverseDigits(iData);
    return (iReverse==iData);
}
int main()
{
     int iValue=0;
    bool iRet=false;
    printf("enter thr numer:");
    scanf("%d",&iValue);

    iRet=CheckPallindrome(iValue);
    if(iRet==true)
    {
    printf("the number is pallindrome");
    }
    else
    {
        printf("the number is not pallidreome");
    }

    return 0;
        
}