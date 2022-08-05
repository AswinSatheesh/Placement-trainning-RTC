#include<stdio.h>
int main()
{
    int limit,index,sum=0;
    int Rindex = 1;
    int Lindex = 1;
    printf("Enter the limit : \n");
    scanf("%d",&limit);
    int array[limit];
    printf("Enter the %d elements: \n",limit);
    for(int i = 0; i < limit; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the index : \n");
    scanf("%d",&index);
    printf("%d ",array[index]);

    for(int i = index; i > i-Lindex; i--)
    {
        for(int j = index; j < i + Rindex; j++)
        {
            sum = array[index] + array[i-Lindex] + array[i+Rindex];
            printf("%d",sum);
            Lindex--;
            Rindex++;
            break;
        }
    }

    return 0;
}