//accept number from user and check whether it is divisible by 5 or not

//Algorithm

#include<stdio.h>
#include<stdbool.h>

bool DivisibleByFive(int iNo)
{
    int iAns=0;
    iAns=iNo % 5;

    if (iAns==0)
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
    bool bRet;

    printf("Enter Number:");
    scanf("%d",&iValue);
     
     bRet=DivisibleByFive(iValue);

     if(bRet==true)
     {
        printf("%d Number is Divisible By 5",iValue);

     }
     else
     {
        printf("%d is Not Divisible By 5 ",iValue);
     }
}