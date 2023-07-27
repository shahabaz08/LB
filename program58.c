//accept n numbers from user and find smallest number from numbers
#include<stdio.h>
#include<stdlib.h>


int MinimumNumber(int Arr[],int iSize)
{
    int iMin=Arr[0],iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin=Arr[iCnt];
        }
    }
    return iMin;
}

int main()
{
    int *ptr=NULL;
    int iLength = 0, i = 0,iRet=0;

    // Step 1 : Accept size of array
    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    // Step 2 : Allocate memory for array
    ptr = (int *)malloc(iLength * sizeof(int));

    // Step 3 : Accept the elements of array
    printf("Enter the elements : \n");

    for(i = 0 ;i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }



    // Step 4 : Call the function
    iRet = MinimumNumber(ptr, iLength);
    printf("Smallest number is :%d",iRet);

    
    free(ptr);

    return 0;
}