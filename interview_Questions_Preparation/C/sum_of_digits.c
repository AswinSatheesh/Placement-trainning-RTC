#include<stdio.h>
int main()
{
    int num = 0,rem = 0,sum=0;
    printf("Enter the number : \n");
    scanf("%d",&num);
    while(num > 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    printf("Sum = %d",sum);
    return 0;
}