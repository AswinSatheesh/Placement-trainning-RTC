#include<stdio.h>
int fun(int,int);
int main()
{
    int a = 10, b =5;
    int result = fun(a,b);
    int result1 = fun(60,60);
    printf("%d \n",result);
    printf("%d ",result1);
    return 0;
}

int fun(int a , int b)
{
    int c = a+b;
    return c;
}