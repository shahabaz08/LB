// addition of factors 


//
#include<stdio.h>
int  FactorsI(int No)
{
   static int iCnt=1;
   static int iSum=0;
   if(iCnt<=No/2)
   {
        if(No%iCnt==0)
        {
            iSum=iSum+iCnt;
        }
        iCnt++;
        FactorsI(No);
   }
   return iCnt;
}


int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number :\n");
    scanf("%d",&iValue);
    iRet=FactorsI(iValue);
    printf("Additio is :%d",iRet);
   
   
    return 0;
}