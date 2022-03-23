#include <stdio.h>
#include<string.h>
void main()
{
    int rev[40];
    // clrscr();
    printf("value to reverse");
    scanf("%d",&rev);
    printf("reverse=%d",strrev(rev));
    return 0;
}