//check small character 

#include<stdio.h>
#include<stdbool.h>
bool CheckSmall(char ch)
{
    if((ch>='a')&&(ch<='z'))
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
        printf("%c is a small case",cValue);

    }
    else
    {
        printf("%c is not small case",cValue);
    }


    return 0;
}