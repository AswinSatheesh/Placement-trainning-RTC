#include<stdio.h>
int main()
{
    int num = 0,chck=0,sum = 0;
    printf("Enter number:\n");
    scanf("%d",&num);
    chck = num;
    for(int i = num; i < 20; i++)
    while(i >0)
    {
        int rem = i %10;
        sum = (sum * 10)+ rem;
        i = i / 10;
    }
    if(chck == sum)
    {
        printf("%d \n",sum);
    }
    // else{
    //     printf("Not palindrome!!\n");
    // }
    return 0;
}
//not completed................