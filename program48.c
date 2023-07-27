// sum of array numbers from static allocation

#include<stdio.h>
#include<stdlib.h>
int Summation(int Arr[],int iSize)
{
    int iCnt=0,iSum=0;
    for (iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum=iSum+Arr[iCnt];
    }
    return iSum;

}


int main()
{
    int *ptr=NULL;
    int iCnt=0,iRet=0,iLength=0;

    printf("Enter number of elements you want to store");
    scanf("%d",&iLength);
    ptr=(int*)malloc(iLength*sizeof(int));
    printf("Enter the elements:");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Elements of array are:\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iRet=Summation(ptr,iLength);
    printf("addition of all elements is :%d",iRet);
    free(ptr);


    return 0;
}