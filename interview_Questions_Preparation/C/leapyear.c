#include<stdio.h>
int main()
{
    int year  = 0;
    printf("Enter the year : \n");
    scanf("%d",&year);
    if((year % 400 == 0) || (year % 4 == 0) && (year % 100 != 0))
    {
        printf("%d is a Leap Year.\n",year);
    }
    else
    {
        printf("Not a leap Year!!");
    }
    return 0;
}