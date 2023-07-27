/* row 4 col 4 
   *  *  *  *
   #  #  #  # 
   *  *  *  *
   #  #  #  #

*/


#include<stdio.h>
void Display(int iRow,int iCol)
{
     int i=0,j=0;
    for(i=1;i<=iRow;i++)
    {
        if(i%2!=0)
        {
            for(j=1;j<=iCol;j++)
            {
                printf("*\t");

            }
            

        }
        else
        {
             for(j=1;j<=iCol;j++)
            {
                printf("#\t");

            }
        }
        printf("\n");
    }
    



}

int main()
{
    int iValue1=0,iValue2=0;
    printf("enter the number of rows:\n");
    scanf("%d",&iValue1);

    printf("enter the number of columns:\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);


    return 0;
}