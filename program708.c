// count the digits

#include <stdio.h>

int  DisplayDigit(int iNo)
{
    int iDigit=0;
    static int iCnt=0;
    if(iNo!=0)
    {
        //iDigit=iDigit%10;
        iCnt++;

        iNo/=10;
        DisplayDigit(iNo);

    }
    /*
    if(iNo!=0)
    {
        iCnt++;
        iNo/=10;
    }  
    */
    
    
    return iCnt;

}
int main()
{
    int iNo=0;
    int iRet=0;
    printf("enter the numebr :");
    scanf("%d",&iNo);

    iRet=DisplayDigit(iNo);
    printf("the number o digits are:%d",iRet);


    return 0;
}