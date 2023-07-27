// Display non factors of a number
//input 6  output =4,5;

//Sum of non factors numbers 


#include<stdio.h>
int SumNonFactors(int iNo)
{
    int iCnt =0;
    int iSum=0;
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt!=0)
        {
          iSum=iSum+iCnt;
        }
    }
    return iSum;

}

int main ()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number :");
    scanf("%d",&iValue);
    iRet=SumNonFactors(iValue);
    printf("THe sum of non factors is %d\n ",iRet);




    return 0;
}

// input 15  output 96