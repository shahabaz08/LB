//Display Square pattern
//row 4
// column 4
/*
      * * * *
      * * * *
      * * * * 
      * * * * 



*/
#include<stdio.h>
void Display(int row,int column)
{
    int i =0,j=0;
    if(row!=column)
    {
        printf("invalid case:");
        return;
    }

    for(i=1;i<=row;i++)
    {   
       
        for(j=1;j<=column;j++)
        {
            printf("*\t");
        }
         printf("\n");
    }
    printf("\n");



}
int main()
{ 
    int iValue1=0,iValue2=0;
    printf("Enter the number of rows:\n");
    scanf("%d",&iValue1);
    printf("enter number of columns:\n");
    scanf("%d",&iValue2);

    Display(iValue1 , iValue2);



    return 0;
}


