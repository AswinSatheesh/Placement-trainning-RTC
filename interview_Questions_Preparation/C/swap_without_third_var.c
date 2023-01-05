#include<stdio.h>
int main()
{
    int a = 101,b=205;
    printf("Beofre swap\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swap\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    return 0;
}