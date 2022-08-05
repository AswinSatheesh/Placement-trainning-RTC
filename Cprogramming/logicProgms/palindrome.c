#include<stdio.h>
int main()
{
    printf("Enter the number : ");
    int num;
    scanf("%d",&num);
    int rem , sum = 0;
    int temp = num;
    while(num > 0)
    {
        rem = num % 10;
        sum = (sum * 10) + rem;
        num = num / 10;
    }
    if(temp == sum)
    {
        printf("Palindrome \n");
    }
    else{
        printf("Not a palindrome");
    }

    return 0;
}