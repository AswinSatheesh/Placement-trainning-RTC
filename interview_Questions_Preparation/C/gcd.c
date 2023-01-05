#include<stdio.h>
int main()
{
    int gcd = 0;
    int n1 = 0,n2=0;
    printf("Enter two numbers :\n");
    scanf("%d %d",&n1,&n2);
    for(int i = 1; i <= n1 && i <= n2; i++)
    {
        if(n1 % i ==0 && n2 % i == 0)
        {
            gcd = i;
        }
    }
    printf("Gcd of %d and %d is : %d \n",n1,n2,gcd);
    return 0;
}