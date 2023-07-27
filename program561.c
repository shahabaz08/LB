
//accept number and position and check the bit at that position is on or off
// dynamically


#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo,UINT Pos)
{
    UINT iMask=0X00000001;
    UINT Result=0;
    if((Pos<1) || (Pos >32))
    {
        printf("Invalid posotion it should be in between 1 - 32\n");
        return false;
    }

    iMask=iMask<< (Pos-1);// dynamic mask formation

    Result=iNo&iMask;
    if(Result==iMask)
    {
        return true;
    }
    else
    {
        return false;
    }



}
int main()
{
    UINT iValue=0;
    UINT iPos=0;
    bool bRet=false;
    printf("Enter the number :\n");
    scanf("%d",&iValue);

    printf("Enter the position :\n");
    scanf("%d",&iPos);

    bRet=CheckBit(iValue,iPos);

    if(bRet==true)
    {
        printf("bit at the position %d is On",iPos);
    }
    else
    {
        printf("bit at the position %d is OFF",iPos);
    }

    return 0;
}