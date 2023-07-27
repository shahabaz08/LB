// Sum of numbers from user//

#include<stdio.h>
int Summation(int iValue)
{
   int iSum=0;
   int iCnt=0;
   for(iCnt=1;iCnt<=iValue;iCnt++)
   {
    iSum=iSum+iCnt;

   }
   return iSum;


    
}
int main()
{
    int iRet=0;
    int iNo=0;
    printf("Enter the Number:");
    scanf("%d",&iNo);

    
    iRet=Summation(iNo);
    printf("Summation is :%d\n",iRet);
    return 0;

}