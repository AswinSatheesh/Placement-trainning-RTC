#include<stdio.h>
#include<stdlib.h>
void change2(int *,int *);
int main()
{
    int a =20,b=70;
    change2(&a,&b);
    printf("Value of a is : %d \n",a);
    printf("Value of b is  : %d \n",b);
    return 0;
}

void change2(int *x, int *y)
{
    *x = 55;
    *y = 56;
}