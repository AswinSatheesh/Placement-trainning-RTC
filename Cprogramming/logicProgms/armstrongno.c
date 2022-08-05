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
        sum = sum + (rem * rem * rem);
        num = num / 10;
    }
    if(temp == sum)
    {
        printf("%d is a armstrong number ",sum);
    }
    else{
        printf("Not a armstrong number !!");
    }
    

    return 0;
}