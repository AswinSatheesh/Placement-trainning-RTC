#include<stdio.h>
int main()
{
    int num =0;
    int rem,sum = 0,rev = 0;
    printf("Enter the number : \n");
    scanf("%d",&num);
    printf("Before reverse : %d \n",num);
    while(num != 0)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num = num/10;
    }

    printf(" After swap : %d ",rev);
    printf("\n");

    return 0;
}