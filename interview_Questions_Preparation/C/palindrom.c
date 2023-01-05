#include<stdio.h>
int main()
{
    int num = 0,rem = 0,sum = 0;
    printf("Enter the number : \n");
    scanf("%d",&num);
    int check = num;
    while(num > 0)
    {
        rem = num % 10;
        sum = (sum * 10) + rem;
        num = num / 10;
    }
    if(check == sum)
    {
        printf("Number is palindrom ");
    }
    else{
        printf("Not palindrom");
    }
    return 0;
}