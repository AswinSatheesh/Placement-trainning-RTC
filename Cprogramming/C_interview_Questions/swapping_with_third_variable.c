#include<stdio.h>
int main()
{
    int a = 100, b= 350;
    int temp = 0;
    printf("Beofre swap\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    temp = a;
    a = b;
    b = temp;
    printf("After swap\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    return 0;
}