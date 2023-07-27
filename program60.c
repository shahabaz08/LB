//n number and return last number of array
//bidirectional traversal
//return thr index at which the number occurs for last time in an array if no number retun -1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Step 5 : Perform the operation on array
bool CheckLastOccurance(int Arr[], int iSize, int iNo)
{
    int iCnt =0;

    for(iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
   return iCnt;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iValue = 0,iRet=0;

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

    printf("Enter the element to findout the last occurance : \n");
    scanf("%d",&iValue);

    // Step 4 : Call the function
    iRet = CheckLastOccurance(ptr, iLength, iValue);
    printf("last number return is %d",iRet);

    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}