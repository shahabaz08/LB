//check whether number is present in that array or not


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CalculateFrequency(int Arr[], int iSize, int iNo)
{
    int iCnt =0, iFrequency = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return true;
         //   break;
        }
        else 
        {
            return false;
        }
    }
    
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iValue = 0;
    bool iRet = false;

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

    printf("Enter the element to to find : \n");
    scanf("%d",&iValue);

    iRet = CalculateFrequency(ptr, iLength, iValue);
    if (iRet==true)
    {
        printf("number found");
    }
    else{
        printf("number not found");
    }
    free(ptr);

    return 0;
}




    