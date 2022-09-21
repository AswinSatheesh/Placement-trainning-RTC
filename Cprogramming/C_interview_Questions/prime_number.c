//This is a progrm to check whether the entered number is prime or not.
#include<stdio.h>
int main()
{
    int num = 0,flag = 0;
    printf("Enter the number :\n");
    scanf("%d",&num);
    for(int i = 2; i < num; i++)
    {
        if(num % 2 == 0)
        {
            flag = 1;
        }
    }
    if(flag == 0) printf(" \n %d is a prime number",num);
    else printf(" \n %d is not a prime number",num);
   
    return 0;
}