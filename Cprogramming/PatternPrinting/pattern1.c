#include<stdio.h>
int main()
{
    int row,column,num = 5;
    for(row =1; row <= num; row++)
    {
        for(int space =1; space < num -row; space++)
        {
            printf(" ");
        }
        for(column = 1; column <= row; column++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}