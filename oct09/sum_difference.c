//The function accepts two integers n, m as arguments Find the sum of all numbers in range from 1 to m(both inclusive)
//  that are not divisible by n. Return difference between sum of integers not divisible by n with sum of numbers divisible by n.

#include<stdio.h>
int main()
{
    int m=0,n=0,sum1 = 0,sum2 = 0;
    printf("Enter m : \n");
    scanf("%d",&m);
    printf("Enter n:\n");
    scanf("%d",&n);
    for(int i = 1; i <= m; i++)
    {
        if(i%n == 0)
        {
            sum1 = sum1 + i;
        }
        else{
            sum2 = sum2 + i;
        }
    }
    printf("\n Difference = %d",sum2-sum1);
    return 0;
}

