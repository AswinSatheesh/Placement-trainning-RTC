#include<stdio.h>
int main()
{
    int limit =0;
    printf("Enter the limit :\n");
    scanf("%d",&limit);
    int arr[limit];
    printf("Enter the %d elements: \n",limit);
    for(int i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    int target = 0;
    printf("Enter the limit:\n");
    scanf("%d",&target);
    int temparray[2];
    int num1=-1,num2=-1;
    for(int i=0;i<limit;i++)
    {
        for(int j=0;j<limit;j++)
        {
            if(i != j)
            {
                if(arr[i] + arr[j] == target)
                {
                    num1 = i;
                    num2 = j;
                }
            }
        }
    }
    printf("[%d,%d]",num1,num2);
    return 0;
}