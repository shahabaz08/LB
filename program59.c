

//accept n numbers from user and find smallest number from numbers
#include<stdio.h>
#include<stdlib.h>


void DisplayReverse(int Arr[],int iSize)
{
    int iCnt=0;
    for(iCnt=iSize-1;iCnt>=0 ;iCnt--)
    {
        printf("%d\n",Arr[iCnt]);

    }

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
    printf("Elements in reverse order is :\n");



    // Step 4 : Call the function
    DisplayReverse(ptr, iLength);

    
    free(ptr);

    return 0;
}