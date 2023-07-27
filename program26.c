// Accept number from user and check number prerfect or not

#include<stdio.h>
#include<stdbool.h>
int DisplayFactors(int iNo)
{  
    int iCnt=0;
    int iSum=0;

    
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iSum=iSum+iCnt;
        
        }
     
    }
    return iSum;

}
bool CheckPerfect(int iData)
{
    int iAns=0;
    iAns=DisplayFactors(iData);
    if (iAns==iData)
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
    printf("Enter the Number:\n");
    scanf("%d",&iValue);
    bRet=CheckPerfect(iValue);
    if (bRet==true)
    {
        printf("The number %d is perfect\n",iValue);
    }
    else
    {
        printf("the number %d is not perfect\n",iValue);
    }
    
    return 0;
}

// perfect numbers are 6 ,28,