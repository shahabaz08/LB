// accept number  and add from 1 to that number 
// 4
// 1+2+3+4=10

//
#include<stdio.h>
int AdiitionR(int No)
{
   static int iSum=0;
    static int iCnt=1;;

    if(iCnt<=No)
    {
        iSum=iSum+iCnt;
        iCnt++;
        AdiitionI(No);
    }
    return iSum;
}


int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number :\n");
    scanf("%d",&iValue);
    iRet=AdiitionR(iValue);
    printf("Addition is :%d",iRet);
   
    return 0;
}