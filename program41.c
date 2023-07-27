//check whether number is palindrome ornot
//ip=121
//op=//take number from user make it reverse ,
//ip=123
//op=321


#include<stdio.h>
#include<stdbool.h>
bool CheckPallindrome(int iNo)
{
    int iDigit=0,iRev=0;
    int iTemp=0;
    iTemp=iNo;

    while(iNo!=0)
    {
        iDigit=iNo%10;
        iRev=iRev*10+iDigit;
        iNo=iNo/10;
        
    }
    if(iRev==iTemp)// insteAD THIS CONDITION WE CAN USE
                     //(return iRev==iTemp) 
    {
        return true;
    }
    else{
        return false;
    }
    

}
int main()
{
    int iValue=0;
    bool iRet=false;
    printf("enter thr numer:");
    scanf("%d",&iValue);

    iRet=CheckPallindrome(iValue);
    if(iRet==true)
    {
    printf("the number is pallindrome");
    }
    else
    {
        printf("the number is not pallidreome");
    }

    return 0;
}