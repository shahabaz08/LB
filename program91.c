//check Capital character 

#include<stdio.h>
#include<stdbool.h>
bool CheckCapital(char ch)
{
    if((ch>='A')&&(ch<='Z'))
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

    bRet=CheckCapital(cValue);
    if(bRet==true)
    {
        printf("%c is a Capital case",cValue);

    }
    else
    {
        printf("%c is not Capital case",cValue);
    }


    return 0;
}