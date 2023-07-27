// check perfect


//
#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int No)
{
   static int iCnt=1;
   static int iSum=0;
   if(iCnt<=(No/2))
   {
        if((No%iCnt)==0)
        {
            iSum=iSum+iCnt;
        }
        iCnt++;
        CheckPerfect(No);
   }
   if(iSum==No)
   {
    return true;
   }
   else
   {
    return false;
   }
   
}


int main()
{
    int iValue=0;
    bool bRet=false;
    printf("Enter the number :\n");
    scanf("%d",&iValue);
    bRet=CheckPerfect(iValue);
    if(bRet==true)
    {
        printf("number is perfect");
    }
    else
    {
        printf("Not perfect");
    }
   
   
    return 0;
}