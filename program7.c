//accept number from user and check whether it is divisible by 5 or not

//Algorithm

#include<stdio.h>

int DivisibleByFive(int iNo)
{
    int iAns=0;
    iAns=iNo % 5;

    if (iAns==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter Number:");
    scanf("%d",&iValue);
     
     iRet=DivisibleByFive(iValue);

     if(iRet==1)
     {
        printf("%d Number is Divisible By 5",iValue);

     }
     else
     {
        printf("%d is Not Divisible By 5 ",iValue);
     }
}