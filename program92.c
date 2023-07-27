//check Digit

#include<stdio.h>
#include<stdbool.h>
bool CheckSmall(char ch)
{
    if((ch>='0')&&(ch<='9'))
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
    char cValue='\0';
    bool bRet=false;

    printf("please enter one charater :\n");
    scanf("%c",&cValue);

    bRet=CheckSmall(cValue);
    if(bRet==true)
    {
        printf("%c is a Digit",cValue);

    }
    else
    {
        printf("%c is not Digit",cValue);
    }


    return 0;
}