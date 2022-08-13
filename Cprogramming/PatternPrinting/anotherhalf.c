#include<stdio.h>
int main()
{
    int n =5;
    for(int i=n;i>0;i--)
    {
        for(int j =0; j< n;j++)
        {
            if(j < (i-1))
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}