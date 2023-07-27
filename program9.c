// dividible by five and theree

#include<stdio.h>
#include<stdbool.h>

bool DivisibleByThreeAndFive(int iNo)
{
   if( (iNo%3==0) &&  (iNo%5==0) )
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
   printf("Enter The Number:");
   scanf("%d ",&iValue);

   bRet=DivisibleByThreeAndFive(iValue);

   if (bRet==true)
   {
    printf("the Number is divisible by 3 and 5\n");

   }
   else
   {
    printf("Number is not divisible by 3 and 5 ");
   }
   
   

   


return 0;
}