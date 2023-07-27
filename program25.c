// Factors of the Number decreased time complexity O(N/2)//

#include<stdio.h>
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
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the Number:\n");
    scanf("%d",&iValue);
    iRet=DisplayFactors(iValue);
    printf("summation of factors :%d\n",iRet);
    return 0;
}