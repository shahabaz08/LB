//count even and odd digits of the number 

#include<stdio.h>
void DisplayEvenDigits(int iNo)
{
    int iDigit=0;
    int iCnt1=0;
    int iCnt2=0;
    if (iNo==0)
    {
   // printf("Evwn numbers:1");
    //printf("Odd numbers:1");
    iCnt1++;
    //return; //if not use line 36 and 37 printf aldo gets displayed
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
            iCnt1++;
            
        }
        else
        {
            iCnt2++;
            
        }
       iNo=iNo/10;
        
        
    }
    printf("Evwn numbers:%d\n",iCnt1);
    printf("Odd numbers:%d",iCnt2);

}
int main()
{
    int iValue=0;
    printf("enter thr numer:");
    scanf("%d",&iValue);

    DisplayEvenDigits(iValue);


    return 0;
}