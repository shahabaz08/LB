// Accept number from user and check number prerfect or not

#include<stdio.h>
#include<stdbool.h>
bool CheckPerfect(int iNo)
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
     if (iSum==iNo)
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

// perfect numbers are 6 ,28,496,8128