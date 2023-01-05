//This is a program to print the all prime numbers from 1 to limit
#include<stdio.h>
int main()
{
    int n = 0;
    printf("Enter the Limit : \n");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++) // we can convert this prgm into 'prime no bw to ranges'- just get the i value from the user, that's it.
    {
        int prime = 0;
        for(int j =1; j <=n;j++)
        {
            if(i % j == 0)
            {
                prime++;
            }
        }
        if(prime == 2)
        {
            printf("%d ",i);
        }
    }
    return 0;
}