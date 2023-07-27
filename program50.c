// count even numbers from numbers
#include<stdio.h>
#include<stdlib.h>
int checkEven(int Arr[],int iSize)
{
    int iEvenCnt=0,iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            iEvenCnt++;
        }
    }
    return iEvenCnt;


}

int main()
{
    int *ptr=NULL;
    int iLength=0,iRet=0,iCnt;
    printf("enter the number of numbers:");
    scanf("%d",&iLength);
    ptr=(int *)malloc(iLength*sizeof(int));
    printf("enter thr numberas");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);

    }
    iRet=checkEven(ptr ,iLength);
    printf("evrn numbers are :%d",iRet);
    free(ptr);

    return 0;
}

