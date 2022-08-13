#include<stdio.h>
int main()
{
    int arr[8];
    int n =0;
    while(n<8)
    {
        arr[n] = ++n;
    }
    for(n =0; n<8;n++)
    {
        printf("%d ",arr[n]);
    }
    return 0;
}