#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a =10 ,b=50;
    int *p = &a;
    int *q = &b;

    printf("Before swap : a = %d b =  %d \n",a,b);
    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;
    printf("After  swap : a = %d b =  %d \n",a,b);
    return 0;
}