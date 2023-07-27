//accept numer and 2 position and check on or off

// dynamically


#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo,UINT Pos1,UINT Pos2)
{
    UINT iMask=0X00000001;
    UINT iMask2=0X00000001;
    UINT Result=0,Result2=0;
    if((Pos1<1) || (Pos1 >32) ||(Pos2<1) ||(Pos2)>32)
    {
        printf("Invalid posotion it should be in between 1 - 32\n");
        return false;
    }

    iMask=iMask<< (Pos1-1);// dynamic mask formation
    iMask2=iMask2<<(Pos2-1);

    Result2=iMask|iMask2;

    Result=iNo&Result2;
    if(Result==Result2)
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
    UINT iPos1=0,iPos2=0;
    bool bRet=false;
    printf("Enter the number :\n");
    scanf("%d",&iValue);

    printf("Enter the position :\n");
    scanf("%d",&iPos1);

    printf("Enter the Second position:\n");
    scanf("%d",&iPos2);

    bRet=CheckBit(iValue,iPos1,iPos2);

    if(bRet==true)
    {
        printf("bit at the position %d ,%dis On",iPos1,iPos2);
    }
    else
    {
        printf("bit at the position %d ,%d is OFF",iPos1,iPos2);
    }

    return 0;
}


/*
pos1=3
pos2=6

iMAsk1=0x00000001;
iMAsk2=0x00000001;

iMAsk1=iMAsk1<<(ipos1-1); shift by 2
  0000 0100
iMAsk1=iMAsk2<<(ipos-2); shift by 5
  0010 0000;

nor 
result=iMask1 | iMAsk2;
0010 0100;


*/