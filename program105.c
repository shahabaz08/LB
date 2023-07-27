// accpt string , char check whether it is present in string or not



#include<stdio.h>
#include<stdbool.h>
bool CheckOccurance(char *str,char ch)
{
    bool bFlag=false;

    while(*str!='\0')
    {
        if(*str==ch)
        {
            return true;
            break;
        }
        str++;
    }
    
}
int main()
{

    char Arr[30];
    
    char cValue='\0';
    bool bRet=false;

    printf("enter the string\n");
    scanf("%[^'\n']s",Arr);    
    printf("enter the Character :\n");
    scanf(" %c",&cValue);


    bRet=CheckOccurance(Arr,cValue);
    if(bRet==true)
    {
        printf("char is present\n");

    }
    else
    {
        printf("char is not present");
    }


    return 0;
}
//(line 29) \n remains in overflow so scanf considers it as a enter (input buffer)
//so it not stopping to accept scanf

//if we put Space before seconf scanf it is a solution
// due to space in scanf enter (\n) removed from the input before