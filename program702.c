// accept number  and add from 1 to that number 
// 4
// 1+2+3+4=10

//
#include<stdio.h>
int AdiitionI(int No)
{
    int iSum=0;
    int iCnt=1;;

    while(iCnt<=No)
    {
        iSum=iSum+iCnt;
        iCnt++;
    }
    return iSum;
}


int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number :\n");
    scanf("%d",&iValue);
    iRet=AdiitionI(iValue);
    printf("Addition is :%d",iRet);
   
    return 0;
}