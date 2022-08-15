#include<stdio.h>
int main()
{
    int stack[20];
    int totalstackele = 5;
    int top = -1;
    if(top == -1)
    {
        printf("Under flow !! \n");
    }
    else{
        top--;
    }
    printf("After pop array looks like. \n");
    for(int i = top; i >=0; i--)
    {
        printf("%d ",stack[i]);
    }
    return 0;
}