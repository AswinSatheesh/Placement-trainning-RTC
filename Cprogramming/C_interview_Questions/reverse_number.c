#include<stdio.h>
int main()
{
    int num =0,sum=0;
    printf("Enter number : \n");
    scanf("%d",&num);
    while(num>0)
    {
        int rem = num%10;
        sum = (sum * 10) + rem;
        num = num / 10;
    }
    printf("Revese : %d",sum);
    return 0;
}