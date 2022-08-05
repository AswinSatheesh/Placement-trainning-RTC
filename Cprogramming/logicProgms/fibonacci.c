// 0 1 1 2 3 5
#include<stdio.h>
int main()
{
    int f = 0;
    int s = 1;
    int limit;
    printf("Enter the limit : \n");
    scanf("%d",&limit);
    printf("%d %d ",f,s);
    for(int i = 2; i < limit; i++)
    {
        int sum = f + s;
        printf("%d ",sum);
        f = s;
        s = sum;
    }
   

    return 0;
}