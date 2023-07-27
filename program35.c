// count the number of digits in that number
//ip=566
//op=3
#include<stdio.h>
int CountDigits(int iNo)
{   
    //int iDigit=0;
    int iCnt=0;
    if (iNo==0)  //Filter   /instead filter and updater 
                             //we can use != IN WHILE LOOP
    {
        return 1;
    }
    if(iNo<0)//updater
    {
        iNo=-iNo;
    }
    while(iNo > 0)//logic
    {
       // iDigit=iNo%10; this line is not necessary
        iNo=iNo/10;
        iCnt++;
    }
     return iCnt;
}

int main()
{   
    int iValue=0;
    int iRet=0;
    printf("enter the number:");
    scanf("%d",&iValue);

    iRet=CountDigits(iValue);
    printf("number of digits are:%d",iRet);


    

    return 0;

}