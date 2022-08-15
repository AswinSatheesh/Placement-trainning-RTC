#include<stdio.h>
int main()
{
    int stack[20];
    int totalstackele = 5;
    int top = -1;
    int newvalue;
    printf("Enter the new value to inset into the stack : \n");
    scanf("%d",&newvalue);
    if(top == totalstackele)
    {
        printf("Overflow!! can't insert anymore values.\n");
    }
    else{
        top++;
        stack[top] = newvalue;
    }

    printf("After insertion : \n");
    for(int i = top; i >=0; i--)
    {
        printf("%d ",stack[i]);
    }
    return 0;
}