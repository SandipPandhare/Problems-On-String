#include<stdio.h>
typedef unsigned int UINT;
UINT strlenX(char *str)
{
    int iCnt=0;
   if(str==NULL)
   {
       return 0;
   }
   while(*str!='\0')
   {
       iCnt++;
       str++;
   }
   return iCnt;
}
int main()
{
    char Arr[50];
    UINT iRet=0;
    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    iRet=strlenX(Arr);
    printf("Length of string is : %d\n",iRet);
    return 0;
}