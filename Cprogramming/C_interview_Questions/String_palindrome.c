#include<stdio.h>
#include<string.h>
int main()
{
    char arry[50];
    int flag = 0;
    printf("Enter the string : \n");
    scanf("%s",arry);
    int length = strlen(arry);
    for(int i = 0; i < length; i++)
    {
        if(arry[i] != arry[length - i-1])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("string is palindrome.");
    }
    else{
        printf("Not a palindrome.");
    }
    return 0;
}