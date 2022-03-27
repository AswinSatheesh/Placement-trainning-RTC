
#include <stdio.h>

int main()
{
    int num1,num2,num3,num4,num5;
    int sum;
    int average;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    printf("Enter the third number:");
    scanf("%d",&num3);
    printf("Enter the fourth number:");
    scanf("%d",&num4);
    printf("Enter the fifth number:");
    scanf("%d",&num5);
    sum = num1+num2+num3+num4+num5;
    
    printf("Sum of the numbers are: %d\n",sum);
    average = sum/5;
    printf("Average of 5 number is : %d\n",average);
    
    return 0;
}