#include<stdio.h>
#include<stdlib.h>
int factorial(int);
int main()
{
    int a =5,fact;
    fact = factorial(a);
    printf("Factorial is : %d", fact);
}

int factorial(int val)
{
    if (val == 1)
    {
        return 1;
    }
    else
    {
        return val * factorial(val -1);
    }
}