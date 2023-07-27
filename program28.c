// Display non factors of a number
//input 6  output =4,5;

#include<stdio.h>
void DisplayNonFactors(int iNo)
{
    int iCnt =0;
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt!=0)
        {
            printf("%d\n",iCnt);
        }
    }

}

int main ()
{
    int iValue=0;
    printf("Enter the number :");
    scanf("%d",&iValue);
    printf("non factors of %d are :",iValue);
    DisplayNonFactors(iValue);




    return 0;
}