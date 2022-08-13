#include<stdio.h>
int main()
{
    int num;
    int half = 0;
    int flag =0;
    printf("Enter the number to find if its prime or not : \n");
    scanf("%d",&num);
    half = num/2;
    for(int i = 2; i < half; i++)
    {
        if(half % i == 0)
        {
            printf("%d is not a prime number!",num);
            flag = 1;
            break;
        }
        if(flag == 0)
        {
            printf("Number is prime");
            break;
        }
    }
    int resutl = myfun();
    return 0;
}