#include<stdio.h>
int main()
{
    char str[] = "developersssss";
    int count = 0;
    for(int i = 0;  str[i] != '\0'; i++)
    {
        count++;
    }
    printf("COunt = %d",count);
    return 0;
}  