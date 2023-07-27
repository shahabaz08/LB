// Factors display

//
#include<stdio.h>
void FactorsI(int No)
{
   static int iCnt=1;
   if(iCnt<=(No/2))
   {
        if((No%iCnt)==0)
        {
            printf("%d\n",iCnt);
        }
        iCnt++;
            FactorsI(No);
   }
}


int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number :\n");
    scanf("%d",&iValue);
    FactorsI(iValue);
   
   
    return 0;
}