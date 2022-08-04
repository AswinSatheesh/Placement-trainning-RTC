#include<stdio.h>
#include<stdlib.h>
void change(int,int);
int main()
{
    int a =10,b=20;
    change(a,b);
    printf("Value of a is : %d \n",a);
    printf("Value of b is  : %d \n",b);
    return 0;
}

void change(int x, int y)
{
    x = 30;
    y = 90;
}