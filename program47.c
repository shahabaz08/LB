// sum of array numbers from static allocation

#include<stdio.h>
int Summation(int Data[],int iSize)
{
    int iCnt=0,iSum=0;
    for (iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum=iSum+Data[iCnt];
    }
    return iSum;

}


int main()
{
    int Arr[5];
    int iCnt=0,iRet=0;
    printf("Enter the elements:");
    for(iCnt=0;iCnt<5;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    printf("Elements of array are:\n");
    for(iCnt=0;iCnt<5;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

    iRet=Summation(Arr,5);
    printf("addition of all elements is :%d",iRet);


    return 0;
}