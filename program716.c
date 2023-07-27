

#include<stdio.h>

void Display(int Arr[],int iSize)
{
    static int iCnt=0;

   if(iCnt<iSize)
    {
        printf("%d\n",Arr[iCnt]);
        iCnt++;
        Display(Arr,iSize);
    }
  
} 
int main()
{
    int Arr[20]={10,20,30,40,50};

    printf("Enter the string:\n");

    

    Display(Arr,5);
    
    return 0;
}