#include<stdio.h>
int main()
{
    printf("Enter the number : ");
    int num;
    int fact = 1;
    scanf("%d",&num);
    for(int i = 1; i <=num; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of %d is : %d",num,fact);

    return 0;
}