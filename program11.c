#include<stdio.h>
#include<stdbool.h>
bool CheckCapital(char c)
{
    if(c>='A' && c<='Z')
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
    char ch='\0';
    bool bRet=false;
    printf("Enter character : ");
    scanf("%c",&ch);
    bRet=CheckCapital(ch);
    if(bRet==true)
    {
        printf("It is Capital\n");
    }
    else
    {
        printf("It is not Capital\n");
    }
    return 0;
}