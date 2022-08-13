#include<stdio.h>
int main()
{
    int count = 5;
    for(int i = 1; i<=count; i++)
    {
        for(int j = 0; j<i; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}