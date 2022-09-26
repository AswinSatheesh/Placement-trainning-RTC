#include<stdio.h>
#include<math.h>
int main()
{
    int num = 0,sum =0;
    printf("Enter the number : \n");
    scanf("%d",&num);
    int check = num;
    while(num > 0)
    {
        int rem = num %10;
        sum = sum + rem*rem*rem;
        num = num /10;
    }
    if(check == sum)
    {
        printf("%d is a armstrong number : \n",check);
    }
    else{
        printf("Not armstrong number!!");
    }
    return 0;
}