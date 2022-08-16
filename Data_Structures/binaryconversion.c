#include<stdio.h>
int main()
{
    int num = 0;
    int rem =0,quotient =0;
    printf("Enter the number to convert to binary : \n");
    scanf("%d",&num);
    rem = num % 2;
    quotient = num/2;
    printf("Binary value of %d is : %d %d \n",num,quotient,rem);
    return 0;
}